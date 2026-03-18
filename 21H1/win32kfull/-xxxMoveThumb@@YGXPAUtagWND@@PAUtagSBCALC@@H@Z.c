/*
 * XREFs of ?xxxMoveThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z @ 0x1A30D9
 * Callers:
 *     _xxxTrackThumb@20 @ 0x1A49F1 (_xxxTrackThumb@20.c)
 * Callees:
 *     _DrawThumb2@24 @ 0xC1CFA (_DrawThumb2@24.c)
 *     ?xxxGetColorObjects@@YGPAUHBRUSH__@@PAUtagWND@@PAUHDC__@@@Z @ 0xC1E2A (-xxxGetColorObjects@@YGPAUHBRUSH__@@PAUtagWND@@PAUHDC__@@@Z.c)
 *     ?SBPosFromPx@@YGHPAUtagSBCALC@@H@Z @ 0x1A2D1B (-SBPosFromPx@@YGHPAUtagSBCALC@@H@Z.c)
 *     ?xxxDoScroll@@YGXPAUtagWND@@0HHH@Z @ 0x1A2E5D (-xxxDoScroll@@YGXPAUtagWND@@0HHH@Z.c)
 */

void __userpurge xxxMoveThumb(_DWORD *a1@<edx>, int *a2@<ecx>, struct tagWND *a3, struct tagSBCALC *a4, int a5)
{
  _DWORD *v5; // esi
  int v6; // edi
  struct tagWND *v7; // ebx
  struct tagWND *v8; // eax
  void *v9; // edx
  int DCEx; // eax
  int v11; // ecx
  HDC v12; // edi
  _DWORD *v13; // eax
  int v14; // [esp+0h] [ebp-1Ch]
  int v15; // [esp+4h] [ebp-18h]
  _DWORD *v16; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]
  struct tagWND *ColorObjects; // [esp+24h] [ebp+8h]

  v5 = a1;
  v6 = *(_DWORD *)(a2[2] + 392);
  if ( v6 )
  {
    v7 = a3;
    if ( a3 != *(struct tagWND **)(v6 + 48) )
    {
      while ( 1 )
      {
        v8 = (struct tagWND *)SBPosFromPx(v5, (int)v7);
        *(_DWORD *)(v6 + 56) = v8;
        if ( v8 == *(struct tagWND **)(v6 + 52) )
          break;
        v9 = *(void **)(v6 + 12);
        if ( v9 )
        {
          xxxDoScroll(v9, *(int **)(v6 + 8), (struct tagWND *)5, v8, (*(_DWORD *)v6 >> 1) & 1, v14, v15);
          v5 = a1;
        }
        v6 = *(_DWORD *)(a2[2] + 392);
        if ( !v6 || !*(_DWORD *)(v6 + 32) )
          return;
        *(_DWORD *)(v6 + 52) = *(_DWORD *)(v6 + 56);
        if ( (int)v7 < v5[15] + v5[14] )
          break;
        v7 = (struct tagWND *)(v5[15] + v5[14]);
      }
      DCEx = _GetDCEx(a2, 0, 65537);
      v11 = v5[8];
      v12 = (HDC)DCEx;
      v5[13] = v7;
      v5[12] = (char *)v7 + v11;
      ColorObjects = (struct tagWND *)xxxGetColorObjects(a2, DCEx);
      v18 = GreSelectBrush(v12, ColorObjects);
      v13 = *(_DWORD **)(a2[2] + 392);
      v16 = v13;
      if ( v13 )
      {
        DrawThumb2((int)a2, v5, v12, (int)ColorObjects, (HBRUSH)((*v13 >> 1) & 1), 0);
        GreSelectBrush(v12, v18);
        _ReleaseDC(v12);
        v16[12] = v7;
      }
      else
      {
        _ReleaseDC(v12);
      }
    }
  }
}
