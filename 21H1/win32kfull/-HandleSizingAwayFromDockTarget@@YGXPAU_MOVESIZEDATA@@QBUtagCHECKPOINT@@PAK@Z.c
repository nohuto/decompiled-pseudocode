/*
 * XREFs of ?HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z @ 0x1713DE
 * Callers:
 *     ?SnapSizeRect@@YGXPAU_MOVESIZEDATA@@PAUtagCHECKPOINT@@PAUtagMONITOR@@PAK@Z @ 0x172387 (-SnapSizeRect@@YGXPAU_MOVESIZEDATA@@PAUtagCHECKPOINT@@PAUtagMONITOR@@PAK@Z.c)
 * Callees:
 *     ?DisableTemporayMetricsOverrides@@YGXPAU_MOVESIZEDATA@@@Z @ 0x171025 (-DisableTemporayMetricsOverrides@@YGXPAU_MOVESIZEDATA@@@Z.c)
 *     ?IsSemiMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z @ 0x171919 (-IsSemiMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z.c)
 *     ?IsSizingBOTTOM@@YGEH@Z @ 0x171927 (-IsSizingBOTTOM@@YGEH@Z.c)
 *     ?IsSizingTOP@@YGEH@Z @ 0x171965 (-IsSizingTOP@@YGEH@Z.c)
 *     ?IsVerticallyMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z @ 0x17197A (-IsVerticallyMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z.c)
 *     ?MakeArrangedStateObservable@@YGXQBU_MOVESIZEDATA@@@Z @ 0x1719C0 (-MakeArrangedStateObservable@@YGXQBU_MOVESIZEDATA@@@Z.c)
 *     ?PreserveShellArrangementDuringTopBottomSize@@YGHPBU_MOVESIZEDATA@@@Z @ 0x171F4C (-PreserveShellArrangementDuringTopBottomSize@@YGHPBU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragInThresholdAlways@@YGXPAU_MOVESIZEDATA@@@Z @ 0x1720CE (-SetDragInThresholdAlways@@YGXPAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YGXPAU_MOVESIZEDATA@@@Z @ 0x17217D (-SetDragOutToDragInThreshold@@YGXPAU_MOVESIZEDATA@@@Z.c)
 *     ?WasSemiMaximized@@YG_NPAU_MOVESIZEDATA@@@Z @ 0x172B90 (-WasSemiMaximized@@YG_NPAU_MOVESIZEDATA@@@Z.c)
 *     ?WasVerticallyMaximized@@YG_NPAU_MOVESIZEDATA@@@Z @ 0x172B9E (-WasVerticallyMaximized@@YG_NPAU_MOVESIZEDATA@@@Z.c)
 */

void __userpurge HandleSizingAwayFromDockTarget(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct _MOVESIZEDATA *a3,
        const struct tagCHECKPOINT *const a4,
        unsigned int *a5)
{
  int v7; // eax
  int v8; // ecx
  int v9; // ebx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  const struct _MOVESIZEDATA *v21; // [esp+0h] [ebp-Ch]
  struct _MOVESIZEDATA *v22; // [esp+0h] [ebp-Ch]
  const struct _MOVESIZEDATA *v23; // [esp+0h] [ebp-Ch]

  v7 = PreserveShellArrangementDuringTopBottomSize(v21);
  v8 = a2[52];
  v9 = v7;
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          goto LABEL_27;
        if ( !IsSizingBOTTOM((int)v22) || !WasSemiMaximized(v22) || !IsSemiMaximizedMoveSizeData(v22) )
        {
          v13 = a2[28];
          a2[16] = v13;
          a2[8] = v13;
          goto LABEL_27;
        }
        if ( !v9 )
        {
          if ( a1 )
          {
            a2[16] = *(_DWORD *)(a1 + 4);
            v12 = *(_DWORD *)(a1 + 4);
          }
          else
          {
            v12 = a2[28];
            a2[16] = v12;
          }
          a2[8] = v12;
LABEL_25:
          SetDragInThresholdAlways(v22);
          goto LABEL_27;
        }
      }
      else
      {
        a2[15] = a2[7];
      }
    }
    else
    {
      a2[17] = a2[9];
    }
    goto LABEL_16;
  }
  if ( IsSizingTOP((int)v22) && WasSemiMaximized(v22) && IsSemiMaximizedMoveSizeData(v22) )
  {
    if ( !v9 )
    {
      if ( a1 )
      {
        a2[18] = *(_DWORD *)(a1 + 12);
        v14 = *(_DWORD *)(a1 + 12);
      }
      else
      {
        v14 = a2[30];
        a2[18] = v14;
      }
      a2[10] = v14;
      goto LABEL_25;
    }
LABEL_16:
    SetDragOutToDragInThreshold(v22);
    goto LABEL_27;
  }
  v15 = a2[30];
  a2[18] = v15;
  a2[10] = v15;
LABEL_27:
  if ( v9 )
    goto LABEL_37;
  v16 = a2[41];
  if ( v16 != 1 && v16 != 2 )
  {
    a2[46] &= 0xFFFFFCFF;
    a2[62] &= ~2u;
    DisableTemporayMetricsOverrides(a2);
    MakeArrangedStateObservable(v22);
    ++a2[73];
    goto LABEL_37;
  }
  if ( !WasVerticallyMaximized(v22) || !IsVerticallyMaximizedMoveSizeData(v23) )
  {
    v18 = a2[46];
    if ( v17 == 1 )
    {
      v19 = 8448;
    }
    else
    {
      if ( v17 != 2 )
        goto LABEL_37;
      v19 = 16896;
    }
    if ( (v19 & v18) == v19 )
    {
      a2[62] &= ~2u;
      a2[46] = v18 | 0x300;
      DisableTemporayMetricsOverrides(a2);
      MakeArrangedStateObservable(v23);
      ++a2[72];
    }
  }
LABEL_37:
  v20 = a2[46];
  a2[52] = 4;
  if ( (v20 & 0x6000000) == 0x6000000 )
  {
    a2[46] = v20 & 0xFDFFFFFF;
    if ( a3 )
      *(_DWORD *)a3 |= 4u;
  }
}
