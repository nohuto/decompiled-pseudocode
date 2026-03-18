/*
 * XREFs of ?vUndo@UNDOW32THREADPIDLOCKS@@QAEXXZ @ 0xE5BBC
 * Callers:
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0xE52D4 (-bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUS.c)
 *     ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B (-bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

void __thiscall UNDOW32THREADPIDLOCKS::vUndo(UNDOW32THREADPIDLOCKS *this)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // edi
  int *v4; // ecx
  int v5; // eax
  int v6; // ecx

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( ThreadWin32Thread && !GreIsSemaphoreOwnedOrSharedByCurrentThread(_ghsemSprite) )
  {
    v4 = *(int **)(ThreadWin32Thread + 172);
    *(_DWORD *)this = v4;
    v5 = *(_DWORD *)(ThreadWin32Thread + 176);
    *((_DWORD *)this + 1) = v5;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 0;
    if ( v4 )
    {
      v6 = *v4;
      if ( (*(_DWORD *)(v6 + 24) & 0x4000) != 0 )
      {
        SURFACE::bUnMap(*(SURFACE **)(v6 + 504), 0, (struct DC *)v6);
        v5 = *((_DWORD *)this + 1);
        *((_DWORD *)this + 2) = 1;
      }
    }
    if ( v5 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)v5 + 24) & 0x4000) != 0 )
      {
        SURFACE::bUnMap(*(SURFACE **)(*(_DWORD *)v5 + 504), 0, 0);
        *((_DWORD *)this + 3) = 1;
      }
    }
  }
}
