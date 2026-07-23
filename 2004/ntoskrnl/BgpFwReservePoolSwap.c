/*
 * XREFs of BgpFwReservePoolSwap @ 0x1409EE354
 * Callers:
 *     ResFwFreeContext @ 0x1409EE224 (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x1409F05B8 (BgpFwInitializeReservePool.c)
 */

__int64 __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140C50568 = qword_140C504E0;
      dword_140C50588 = dword_140C504DC;
      result = (unsigned int)dword_140C504D8;
      dword_140C50570 = dword_140C504D8;
      stru_140C50578 = (_RTL_BITMAP)xmmword_140C504E8;
    }
  }
  else
  {
    dword_140C504D8 = dword_140C50570;
    qword_140C504E0 = qword_140C50568;
    dword_140C504DC = dword_140C50588;
    xmmword_140C504E8 = (__int128)stru_140C50578;
    return BgpFwInitializeReservePool(a2, a3, a4);
  }
  return result;
}
