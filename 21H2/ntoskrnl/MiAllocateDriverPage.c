/*
 * XREFs of MiAllocateDriverPage @ 0x1406D1A78
 * Callers:
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E6EF4 (MiMakeDriverPagesPrivate.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MiFillPerSessionProtos @ 0x1408D7FE0 (MiFillPerSessionProtos.c)
 *     MiHandleBootImage @ 0x140A4FB14 (MiHandleBootImage.c)
 * Callees:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x14023F280 (MiInitializePageColorBase.c)
 *     MiGetNextPageColor @ 0x1402E5C08 (MiGetNextPageColor.c)
 *     MiPreInitializeSystemImagePage @ 0x1402E7A98 (MiPreInitializeSystemImagePage.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x1402E7D54 (MiUseSlabAllocatorForDriverPage.c)
 *     MiGetSlabPage @ 0x1402E803C (MiGetSlabPage.c)
 *     MiFindContiguousPages @ 0x1403016E0 (MiFindContiguousPages.c)
 *     MiWaitForFreePage @ 0x14055C1FC (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateDriverPage(ULONG_PTR *a1, int a2, char a3)
{
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r8
  __int16 v9; // ax
  unsigned int NextPageColor; // edi
  unsigned int i; // edx
  __int64 v12; // [rsp+60h] [rbp-20h] BYREF
  __int128 v13; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = 0;
  v13 = 0LL;
  v12 = -1LL;
  if ( !(unsigned int)MiUseSlabAllocatorForDriverPage((__int64)a1, a2, &v14)
    || (result = MiGetSlabPage(v6, v5, v14, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0), v12 = result, result == -1) )
  {
    if ( (a3 & 1) != 0 )
    {
      return -1LL;
    }
    else if ( (int)MiFindContiguousPages(
                     (__int64)a1,
                     0LL,
                     qword_140C4CCF0,
                     0LL,
                     1uLL,
                     1u,
                     0x80000000,
                     0x80000000,
                     0x20000000,
                     0LL,
                     &v12) < 0 )
    {
      qword_140C4CCF0 = -1LL;
      MiInitializePageColorBase(0LL, 0, (__int64)&v13);
      NextPageColor = MiGetNextPageColor((__int64)&v13);
      for ( i = NextPageColor; ; i = NextPageColor )
      {
        result = MiGetPage((__int64)a1, i, 0LL);
        v12 = result;
        if ( result != -1 )
          break;
        if ( KeGetCurrentIrql() == 2 )
          return -1LL;
        MiWaitForFreePage(a1);
      }
    }
    else
    {
      v9 = ++qword_140C4CD40;
      if ( a1 == &MiSystemPartition )
      {
        if ( (v9 & 0x1FF) != 0 )
          qword_140C4CCF0 = v12 - 1;
        else
          qword_140C4CCF0 = -1LL;
      }
      MiPreInitializeSystemImagePage(48 * v12 - 0x58000000000LL, (__int64)&MiSystemPartition, v8);
      return v12;
    }
  }
  return result;
}
