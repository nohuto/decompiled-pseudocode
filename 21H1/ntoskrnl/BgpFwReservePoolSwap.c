/*
 * XREFs of BgpFwReservePoolSwap @ 0x1409EE1AC
 * Callers:
 *     ResFwFreeContext @ 0x1409EE07C (ResFwFreeContext.c)
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
      qword_140C506A8 = qword_140C50620;
      dword_140C506C8 = dword_140C5061C;
      result = (unsigned int)dword_140C50618;
      dword_140C506B0 = dword_140C50618;
      stru_140C506B8 = (_RTL_BITMAP)xmmword_140C50628;
    }
  }
  else
  {
    dword_140C50618 = dword_140C506B0;
    qword_140C50620 = qword_140C506A8;
    dword_140C5061C = dword_140C506C8;
    xmmword_140C50628 = (__int128)stru_140C506B8;
    return BgpFwInitializeReservePool(a2, a3, a4);
  }
  return result;
}
