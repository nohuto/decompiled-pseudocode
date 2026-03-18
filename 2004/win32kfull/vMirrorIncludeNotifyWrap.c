/*
 * XREFs of vMirrorIncludeNotifyWrap @ 0x1C00F5400
 * Callers:
 *     <none>
 * Callees:
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C029BA74 (-bStockSurface@SURFACE@@QEAAHXZ.c)
 *     ?vMirrorNotifyDrawing@@YAXAEAVPDEVOBJ@@PEAVSURFACE@@H@Z @ 0x1C029BC14 (-vMirrorNotifyDrawing@@YAXAEAVPDEVOBJ@@PEAVSURFACE@@H@Z.c)
 */

void __fastcall vMirrorIncludeNotifyWrap(__int64 a1, struct SURFACE *a2)
{
  __int64 v3; // rax
  int v4; // ecx
  int v5; // edx
  int v6; // r8d
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v7 = v3;
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 40);
    if ( (v4 & 0x20000) != 0
      && (v4 & 0x2000000) != 0
      && (v4 & 1) != 0
      && (*((_DWORD *)a2 + 28) & 0x4000000) != 0
      && a2 != SURFACE::pdibDefault
      && !(unsigned int)SURFACE::bStockSurface(a2)
      && (v5 & 0x400800) == 0 )
    {
      if ( v6 )
      {
        *((_DWORD *)a2 + 28) = v5 | 0x10;
        vMirrorNotifyDrawing((struct PDEVOBJ *)&v7, a2, 1);
      }
      else
      {
        vMirrorNotifyDrawing((struct PDEVOBJ *)&v7, a2, 0);
        *((_DWORD *)a2 + 28) &= ~0x10u;
      }
    }
  }
}
