/*
 * XREFs of _vMirrorIncludeNotifyWrap@12 @ 0x93030
 * Callers:
 *     <none>
 * Callees:
 *     ?bStockSurface@SURFACE@@QAEHXZ @ 0x1FAAA9 (-bStockSurface@SURFACE@@QAEHXZ.c)
 *     ?vMirrorNotifyDrawing@@YGXAAVPDEVOBJ@@PAVSURFACE@@H@Z @ 0x1FAB80 (-vMirrorNotifyDrawing@@YGXAAVPDEVOBJ@@PAVSURFACE@@H@Z.c)
 */

void __userpurge vMirrorIncludeNotifyWrap(struct SURFACE *a1@<esi>, int a2, SURFACE *a3, int a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int savedregs; // [esp+0h] [ebp+0h]

  v4 = *(_DWORD *)(*(_DWORD *)a2 + 36);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 24);
    if ( ((unsigned int)&loc_20000 & v5) != 0
      && (v5 & 0x2000000) != 0
      && (v5 & 1) != 0
      && (*((_DWORD *)a3 + 18) & 0x4000000) != 0
      && a3 != SURFACE::pdibDefault
      && !SURFACE::bStockSurface(a3)
      && (v6 & 0x400800) == 0 )
    {
      if ( a4 )
      {
        *((_DWORD *)a3 + 18) = v6 | 0x10;
        vMirrorNotifyDrawing((struct PDEVOBJ *)1, a1, savedregs);
      }
      else
      {
        vMirrorNotifyDrawing(0, a1, savedregs);
        *((_DWORD *)a3 + 18) &= ~0x10u;
      }
    }
  }
}
