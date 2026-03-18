/*
 * XREFs of MiAllocateDriverPage @ 0x14079D08C
 * Callers:
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     MiFillPerSessionProtos @ 0x140983680 (MiFillPerSessionProtos.c)
 *     MiHandleBootImage @ 0x140B050A8 (MiHandleBootImage.c)
 * Callees:
 *     MiPreInitializeSystemImagePage @ 0x140248208 (MiPreInitializeSystemImagePage.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x1402EB398 (MiUseSlabAllocatorForDriverPage.c)
 *     MiGetNextPageColor @ 0x1402EB3DC (MiGetNextPageColor.c)
 *     MiGetSlabPage @ 0x1402EB440 (MiGetSlabPage.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     MiAllocateDriverPageFromRange @ 0x1403C9C90 (MiAllocateDriverPageFromRange.c)
 *     MiWaitForFreePage @ 0x1405B8348 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateDriverPage(ULONG_PTR *a1, __int64 a2, char a3)
{
  unsigned int v5; // r10d
  unsigned int NextPageColor; // edi
  __int16 v7; // ax
  __int64 result; // rax
  __int64 v9; // [rsp+70h] [rbp+27h] BYREF
  __int128 v10; // [rsp+78h] [rbp+2Fh] BYREF

  v10 = 0LL;
  MiInitializePageColorBase(0LL, 0, (__int64)&v10);
  v9 = -1LL;
  NextPageColor = MiGetNextPageColor((__int64)&v10);
  if ( !(unsigned int)MiUseSlabAllocatorForDriverPage((__int64)a1, v5)
    || (result = MiGetSlabPage((__int64)a1, 0, NextPageColor, 2, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, 0),
        v9 = result,
        result == -1) )
  {
    if ( (a3 & 1) != 0 )
    {
      return -1LL;
    }
    else if ( !dword_140C4F514
           || a1 != &MiSystemPartition
           || (result = MiAllocateDriverPageFromRange(&dword_140C4F510, (__int64)a1), v9 = result, result == -1) )
    {
      if ( (int)MiFindContiguousPagesEx(
                  (__int64)a1,
                  0LL,
                  qword_140C4F5D0,
                  0LL,
                  0,
                  1uLL,
                  1u,
                  0x80000000,
                  0x80000000,
                  1610612737,
                  0,
                  0LL,
                  &v9) < 0 )
      {
        qword_140C4F5D0 = -1LL;
        while ( 1 )
        {
          result = MiGetPage((__int64)a1, NextPageColor, 0);
          v9 = result;
          if ( result != -1 )
            break;
          if ( KeGetCurrentIrql() == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
            return -1LL;
          MiWaitForFreePage(a1);
        }
      }
      else
      {
        v7 = ++qword_140C4F5C8;
        if ( a1 == &MiSystemPartition )
        {
          if ( (v7 & 0x1FF) != 0 )
            qword_140C4F5D0 = v9 - 1;
          else
            qword_140C4F5D0 = -1LL;
        }
        MiPreInitializeSystemImagePage(48 * v9 - 0x220000000000LL, 0);
        return v9;
      }
    }
  }
  return result;
}
