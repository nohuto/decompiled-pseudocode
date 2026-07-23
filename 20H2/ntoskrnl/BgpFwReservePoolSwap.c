/*
 * XREFs of BgpFwReservePoolSwap @ 0x1409F41AC
 * Callers:
 *     ResFwFreeContext @ 0x1409F407C (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x1409F59E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x1409F65B8 (BgpFwInitializeReservePool.c)
 */

__int64 __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140C505E8 = qword_140C50560;
      dword_140C50608 = dword_140C5055C;
      result = (unsigned int)dword_140C50558;
      dword_140C505F0 = dword_140C50558;
      stru_140C505F8 = (_RTL_BITMAP)xmmword_140C50568;
    }
  }
  else
  {
    dword_140C50558 = dword_140C505F0;
    qword_140C50560 = qword_140C505E8;
    dword_140C5055C = dword_140C50608;
    xmmword_140C50568 = (__int128)stru_140C505F8;
    return BgpFwInitializeReservePool(a2, a3, a4);
  }
  return result;
}
