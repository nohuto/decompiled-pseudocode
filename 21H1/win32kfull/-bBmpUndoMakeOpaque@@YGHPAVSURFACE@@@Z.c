/*
 * XREFs of ?bBmpUndoMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA85F
 * Callers:
 *     ??0BMPDEVDCOPEN@@QAE@PAVXDCOBJ@@@Z @ 0x1F9766 (--0BMPDEVDCOPEN@@QAE@PAVXDCOBJ@@@Z.c)
 *     ??0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1F97A6 (--0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?bUnHookBmpDrv@@YGHAAVXDCOBJ@@@Z @ 0x1FAAC3 (-bUnHookBmpDrv@@YGHAAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall bBmpUndoMakeOpaque(int this)
{
  int v1; // edx
  __int16 v2; // ax
  unsigned int v3; // eax
  int v4; // eax

  v1 = 0;
  if ( *(_WORD *)(this + 64) == 3 && *(struct PDEV **)(this + 28) == gpBmpDev )
  {
    v2 = *(_WORD *)(this + 392);
    *(_DWORD *)(this + 392) = -1;
    *(_WORD *)(this + 64) = v2;
    v3 = *(_DWORD *)(this + 396) | *(_DWORD *)(this + 72) & 0xFFFC7A10;
    *(_DWORD *)(this + 396) = -1;
    *(_DWORD *)(this + 72) = v3;
    v4 = *(_DWORD *)(this + 388);
    *(_DWORD *)(this + 388) = -1;
    v1 = 1;
    *(_DWORD *)(this + 28) = v4;
  }
  return v1;
}
