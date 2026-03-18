/*
 * XREFs of ??0UNDOENGUPDATEDEVICESURFACE@@QAE@XZ @ 0x1DA64A
 * Callers:
 *     ?GdiUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@@Z @ 0x12266 (-GdiUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

UNDOENGUPDATEDEVICESURFACE *__thiscall UNDOENGUPDATEDEVICESURFACE::UNDOENGUPDATEDEVICESURFACE(
        UNDOENGUPDATEDEVICESURFACE *this)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  *((_DWORD *)this + 1) = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    *(_BYTE *)this = (int)(*(_DWORD *)(ThreadWin32Thread + 180) << 31) >> 31;
    *(_DWORD *)(ThreadWin32Thread + 180) &= ~1u;
  }
  return this;
}
