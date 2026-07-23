/*
 * XREFs of BgpFwReservePoolSwap @ 0x1409F21AC
 * Callers:
 *     ResFwFreeContext @ 0x1409F207C (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x1409F39E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x1409F45B8 (BgpFwInitializeReservePool.c)
 */

__int64 __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140C507A8 = qword_140C50720;
      dword_140C507C8 = dword_140C5071C;
      result = (unsigned int)dword_140C50718;
      dword_140C507B0 = dword_140C50718;
      stru_140C507B8 = (_RTL_BITMAP)xmmword_140C50728;
    }
  }
  else
  {
    dword_140C50718 = dword_140C507B0;
    qword_140C50720 = qword_140C507A8;
    dword_140C5071C = dword_140C507C8;
    xmmword_140C50728 = (__int128)stru_140C507B8;
    return BgpFwInitializeReservePool(a2, a3, a4);
  }
  return result;
}
