/*
 * XREFs of MiAllocateDriverPage @ 0x1406ED7B8
 * Callers:
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiFillPerSessionProtos @ 0x1408DA820 (MiFillPerSessionProtos.c)
 *     MiHandleBootImage @ 0x140A4E1C8 (MiHandleBootImage.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x140332E58 (MiUseSlabAllocatorForDriverPage.c)
 *     MiGetSlabPage @ 0x140332E88 (MiGetSlabPage.c)
 *     MiPreInitializeSystemImagePage @ 0x140333100 (MiPreInitializeSystemImagePage.c)
 *     MiGetNextPageColor @ 0x140336AE8 (MiGetNextPageColor.c)
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MiWaitForFreePage @ 0x14055A72C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateDriverPage(ULONG_PTR *a1, int a2, char a3)
{
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 result; // rax
  __int16 v8; // ax
  unsigned int NextPageColor; // edi
  unsigned int i; // edx
  __int64 v11; // [rsp+60h] [rbp-20h] BYREF
  __int128 v12; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+A8h] [rbp+28h] BYREF

  v13 = 0;
  v12 = 0LL;
  v11 = -1LL;
  if ( !(unsigned int)MiUseSlabAllocatorForDriverPage((__int64)a1, a2, &v13)
    || (result = MiGetSlabPage(v6, v5, v13, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0), v11 = result, result == -1) )
  {
    if ( (a3 & 1) != 0 )
    {
      return -1LL;
    }
    else if ( (int)MiFindContiguousPages(
                     (__int64)a1,
                     0LL,
                     qword_140C4CB70,
                     0LL,
                     1uLL,
                     1u,
                     0x80000000,
                     0x80000000,
                     0x20000000,
                     0LL,
                     &v11) < 0 )
    {
      qword_140C4CB70 = -1LL;
      MiInitializePageColorBase(0LL, 0, (__int64)&v12);
      NextPageColor = MiGetNextPageColor((__int64)&v12);
      for ( i = NextPageColor; ; i = NextPageColor )
      {
        result = MiGetPage((__int64)a1, i, 0LL);
        v11 = result;
        if ( result != -1 )
          break;
        if ( KeGetCurrentIrql() == 2 )
          return -1LL;
        MiWaitForFreePage(a1);
      }
    }
    else
    {
      v8 = ++qword_140C4CBC0;
      if ( a1 == &MiSystemPartition )
      {
        if ( (v8 & 0x1FF) != 0 )
          qword_140C4CB70 = v11 - 1;
        else
          qword_140C4CB70 = -1LL;
      }
      MiPreInitializeSystemImagePage(48 * v11 - 0x58000000000LL);
      return v11;
    }
  }
  return result;
}
