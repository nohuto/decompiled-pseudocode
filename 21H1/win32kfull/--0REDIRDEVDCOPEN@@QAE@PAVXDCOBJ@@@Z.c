/*
 * XREFs of ??0REDIRDEVDCOPEN@@QAE@PAVXDCOBJ@@@Z @ 0x1FADFD
 * Callers:
 *     ??1DEVEXCLUDERECT@@QAE@XZ @ 0x1D6F97 (--1DEVEXCLUDERECT@@QAE@XZ.c)
 * Callees:
 *     ?bUndoMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC4F6 (-bUndoMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

REDIRDEVDCOPEN *__thiscall REDIRDEVDCOPEN::REDIRDEVDCOPEN(REDIRDEVDCOPEN *this, struct XDCOBJ *a2)
{
  int v3; // edx
  int v4; // ecx
  struct SURFACE *v6; // [esp+0h] [ebp-4h]

  *(_DWORD *)this = 0;
  if ( a2 )
  {
    v3 = *(_DWORD *)a2;
    if ( (*(_DWORD *)(*(_DWORD *)a2 + 24) & 0x4000) != 0 && *(struct PDEV **)(v3 + 36) == gpRedirDev )
    {
      v4 = *(_DWORD *)(v3 + 504);
      *(_DWORD *)this = v4;
      if ( v4 )
        bUndoMakeOpaque(v6);
    }
  }
  return this;
}
