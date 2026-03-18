/*
 * XREFs of ?bUndoMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC4F6
 * Callers:
 *     ??0REDIRDEVDCOPEN@@QAE@PAVXDCOBJ@@@Z @ 0x1FADFD (--0REDIRDEVDCOPEN@@QAE@PAVXDCOBJ@@@Z.c)
 *     ??0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1FAE3D (--0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?bUnHookRedir@@YGHAAVXDCOBJ@@@Z @ 0x1FC439 (-bUnHookRedir@@YGHAAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall bUndoMakeOpaque(int this)
{
  int v2; // ecx
  __int16 v3; // ax
  unsigned int v4; // ecx
  int v5; // eax

  v2 = 0;
  if ( *(_WORD *)(this + 64) == 3 && *(struct PDEV **)(this + 28) == gpRedirDev )
  {
    v3 = *(_WORD *)(this + 392);
    v4 = *(_DWORD *)(this + 396) & 0xFFDFFFFF;
    *(_DWORD *)(this + 392) = -1;
    *(_DWORD *)(this + 396) = -1;
    *(_DWORD *)(this + 72) = v4;
    *(_WORD *)(this + 64) = v3;
    v5 = *(_DWORD *)(this + 388);
    *(_DWORD *)(this + 388) = -1;
    v2 = 1;
    *(_DWORD *)(this + 28) = v5;
  }
  return v2;
}
