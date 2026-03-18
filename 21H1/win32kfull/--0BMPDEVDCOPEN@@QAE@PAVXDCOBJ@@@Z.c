/*
 * XREFs of ??0BMPDEVDCOPEN@@QAE@PAVXDCOBJ@@@Z @ 0x1F9766
 * Callers:
 *     ??1DEVEXCLUDERECT@@QAE@XZ @ 0x1D6F97 (--1DEVEXCLUDERECT@@QAE@XZ.c)
 * Callees:
 *     ?bBmpUndoMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA85F (-bBmpUndoMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

BMPDEVDCOPEN *__thiscall BMPDEVDCOPEN::BMPDEVDCOPEN(BMPDEVDCOPEN *this, struct XDCOBJ *a2)
{
  int v3; // edx
  int v4; // ecx
  struct SURFACE *v6; // [esp+0h] [ebp-4h]

  *(_DWORD *)this = 0;
  if ( a2 )
  {
    v3 = *(_DWORD *)a2;
    if ( (*(_DWORD *)(*(_DWORD *)a2 + 24) & 0x4000) != 0 && *(struct PDEV **)(v3 + 36) == gpBmpDev )
    {
      v4 = *(_DWORD *)(v3 + 504);
      *(_DWORD *)this = v4;
      if ( v4 )
        bBmpUndoMakeOpaque(v6);
    }
  }
  return this;
}
