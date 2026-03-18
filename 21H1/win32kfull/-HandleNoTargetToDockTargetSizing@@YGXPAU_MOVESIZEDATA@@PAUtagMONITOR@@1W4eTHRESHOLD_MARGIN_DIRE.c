/*
 * XREFs of ?HandleNoTargetToDockTargetSizing@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PAK@Z @ 0x171265
 * Callers:
 *     ?SnapSizeRect@@YGXPAU_MOVESIZEDATA@@PAUtagCHECKPOINT@@PAUtagMONITOR@@PAK@Z @ 0x172387 (-SnapSizeRect@@YGXPAU_MOVESIZEDATA@@PAUtagCHECKPOINT@@PAUtagMONITOR@@PAK@Z.c)
 * Callees:
 *     ?IsSizingBOTTOM@@YGEH@Z @ 0x171927 (-IsSizingBOTTOM@@YGEH@Z.c)
 *     ?IsSizingLEFT@@YGEH@Z @ 0x17193C (-IsSizingLEFT@@YGEH@Z.c)
 *     ?IsSizingRIGHT@@YGEH@Z @ 0x171950 (-IsSizingRIGHT@@YGEH@Z.c)
 *     ?IsSizingTOP@@YGEH@Z @ 0x171965 (-IsSizingTOP@@YGEH@Z.c)
 *     ?IsVerticallyMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z @ 0x17197A (-IsVerticallyMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z.c)
 *     ?MakeArrangedStateObservable@@YGXQBU_MOVESIZEDATA@@@Z @ 0x1719C0 (-MakeArrangedStateObservable@@YGXQBU_MOVESIZEDATA@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@H@Z @ 0x172097 (-SetCurrentHitTargetMonitor@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@H@Z.c)
 *     ?SetDragInToDragOutThreshold@@YGXPAU_MOVESIZEDATA@@@Z @ 0x17210F (-SetDragInToDragOutThreshold@@YGXPAU_MOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x172710 (-VerticalSizeRectFromHitTarget@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?WasVerticallyMaximized@@YG_NPAU_MOVESIZEDATA@@@Z @ 0x172B9E (-WasVerticallyMaximized@@YG_NPAU_MOVESIZEDATA@@@Z.c)
 */

void __fastcall HandleNoTargetToDockTargetSizing(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // [esp+0h] [ebp-2Ch]
  struct _MOVESIZEDATA *v15; // [esp+0h] [ebp-2Ch]
  const struct _MOVESIZEDATA *v16; // [esp+0h] [ebp-2Ch]
  struct tagMONITOR *v17; // [esp+0h] [ebp-2Ch]
  int v18; // [esp+4h] [ebp-28h]
  int v19; // [esp+10h] [ebp-1Ch]
  int v20; // [esp+14h] [ebp-18h]
  int v21; // [esp+18h] [ebp-14h]
  int v22; // [esp+1Ch] [ebp-10h]
  int v24; // [esp+24h] [ebp-8h]

  if ( a4 == 3 )
  {
    v7 = IsSizingTOP(v14);
  }
  else
  {
    if ( a4 )
      goto LABEL_4;
    v7 = IsSizingBOTTOM(v14);
  }
  if ( v7 )
  {
LABEL_10:
    *(_DWORD *)(a1 + 204) = a2;
    return;
  }
LABEL_4:
  if ( (IsSizingLEFT(v14) && v8 == 1 || IsSizingRIGHT((int)v15) && v9 == 2)
    && WasVerticallyMaximized(v15)
    && IsVerticallyMaximizedMoveSizeData(v15) )
  {
    goto LABEL_10;
  }
  v24 = 0;
  if ( (IsSizingTOP((int)v15) || IsSizingBOTTOM((int)v16)) && (v10 == 3 || !v10) && (*(_BYTE *)(a1 + 248) & 2) != 0 )
  {
    v11 = 1;
    v24 = 1;
  }
  else
  {
    v11 = 0;
  }
  v12 = *(_DWORD *)(a1 + 184);
  v19 = *(_DWORD *)(a1 + 28);
  v20 = *(_DWORD *)(a1 + 32);
  v21 = *(_DWORD *)(a1 + 36);
  v22 = *(_DWORD *)(a1 + 40);
  v13 = 0;
  if ( (v12 & 0x4000000) != 0 && !v11 )
  {
    v11 = 0x2000000;
    if ( (v12 & 0x2000000) == 0 )
    {
      v13 = 1;
      *(_DWORD *)(a1 + 184) = v12 | 0x2000000;
    }
  }
  if ( VerticalSizeRectFromHitTarget(a1, a2, v10, a3, *(_DWORD *)(a1 + 268), v11) )
  {
    if ( v13 && a5 )
      *a5 |= 8u;
    if ( !a4 || a4 == 3 )
    {
      if ( !v24 )
      {
        *(_DWORD *)(a1 + 184) |= 0x300u;
        *(_DWORD *)(a1 + 248) &= ~2u;
        MakeArrangedStateObservable(v16);
      }
      SetDragInToDragOutThreshold(v16);
      *(_DWORD *)(a1 + 208) = a4;
      SetCurrentHitTargetMonitor((struct _MOVESIZEDATA *)1, v17, v18);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 184) &= ~0x2000000u;
    *(_DWORD *)(a1 + 204) = a2;
    *(_DWORD *)(a1 + 208) = a4;
    *(_DWORD *)(a1 + 28) = v19;
    *(_DWORD *)(a1 + 32) = v20;
    *(_DWORD *)(a1 + 36) = v21;
    *(_DWORD *)(a1 + 40) = v22;
  }
}
