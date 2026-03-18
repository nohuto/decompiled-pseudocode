/*
 * XREFs of ?bInsideDriverCall@@YGHPAU_SPRITESTATE@@@Z @ 0xE5B1E
 * Callers:
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0xE52D4 (-bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUS.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __thiscall bInsideDriverCall(int *this)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // edi
  int v4; // esi
  PKTHREAD v6; // eax
  PKTHREAD v7; // eax
  int v8; // [esp+Ch] [ebp-4h] BYREF

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v8 = *this;
  PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v8);
  if ( !ThreadWin32Thread )
    return this[14];
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v8) )
    return this[14];
  v4 = 0;
  if ( !*(_DWORD *)(ThreadWin32Thread + 52) && !*(_DWORD *)(ThreadWin32Thread + 56) )
    return this[14];
  v6 = KeGetCurrentThread();
  if ( *(int **)(*(_DWORD *)(W32GetThreadWin32Thread(v6) + 156) + 28) == this )
  {
    v7 = KeGetCurrentThread();
    return **(_DWORD **)(W32GetThreadWin32Thread(v7) + 156);
  }
  return v4;
}
