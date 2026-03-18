/*
 * XREFs of DirtyVisRgnTrackers @ 0x1C00CBC14
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C001B770 (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxEnableMenuItem @ 0x1C0034648 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00352B4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C003621C (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     InternalInvalidate3 @ 0x1C0044D64 (InternalInvalidate3.c)
 *     LinkWindow @ 0x1C0046760 (LinkWindow.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00493A0 (xxxSimpleDoSyncPaint.c)
 *     xxxCalcClientRect @ 0x1C004BFD0 (xxxCalcClientRect.c)
 *     xxxDispatchMessage @ 0x1C004CFF0 (xxxDispatchMessage.c)
 *     xxxDoPaint @ 0x1C004DFE8 (xxxDoPaint.c)
 *     xxxGetSystemMenu @ 0x1C0078FF4 (xxxGetSystemMenu.c)
 *     ComposeWindowIfNeeded @ 0x1C00918CC (ComposeWindowIfNeeded.c)
 *     DecomposeWindowIfNeeded @ 0x1C00C2A48 (DecomposeWindowIfNeeded.c)
 *     CreateVisRgnTracker @ 0x1C00C6F1C (CreateVisRgnTracker.c)
 *     SelectWindowRgn @ 0x1C00C7B7C (SelectWindowRgn.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     DwmChildRectChange @ 0x1C00CB830 (DwmChildRectChange.c)
 *     UnlinkWindow @ 0x1C00CEAA8 (UnlinkWindow.c)
 *     ClearHungFlag @ 0x1C00D1F84 (ClearHungFlag.c)
 *     xxxSetScrollBar @ 0x1C00EBA98 (xxxSetScrollBar.c)
 *     xxxSetClassData @ 0x1C010EA44 (xxxSetClassData.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C00C9B94 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C00CB428 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00CBDC0 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall DirtyVisRgnTrackers(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // si
  CVisRgnTrackerProp *Prop; // rax
  __int64 i; // rdi
  CVisRgnTrackerProp *v14; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 )
  {
    v1 = a1;
    v2 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( v2 )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 64LL) & 1) != 0
        && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x10) != 0 )
      {
        v3 = (_QWORD *)*((_QWORD *)a1 + 13);
        v4 = v3;
        if ( v3 )
        {
          while ( 1 )
          {
            v5 = v4[5];
            v6 = *(_BYTE *)(v5 + 31);
            if ( (v6 & 0x10) == 0 || (v6 & 0x20) != 0 && v4 != v3 )
              break;
            if ( (*(_WORD *)(v5 + 42) & 0x2FFF) != 0x29D )
            {
              v4 = (_QWORD *)v4[13];
              if ( v4 )
                continue;
            }
            goto LABEL_10;
          }
        }
        else
        {
LABEL_10:
          EtwTraceDwmVisRgnDirty(*(_QWORD *)v1, *v3);
          v7 = *((_QWORD *)v1 + 13);
          if ( !v7 )
            goto LABEL_27;
          v8 = *((_QWORD *)v1 + 3);
          v9 = 0LL;
          if ( v8 )
          {
            v10 = *(_QWORD *)(v8 + 8);
            if ( v10 )
              v9 = *(_QWORD *)(v10 + 24);
          }
          if ( v7 == v9 )
          {
            v11 = 1;
          }
          else
          {
LABEL_27:
            v11 = 0;
            if ( v1 != (struct tagWND *)GetDesktopWindow((__int64)v1) && (*(_BYTE *)(v3[5] + 31LL) & 2) != 0 )
            {
              v14 = 0LL;
              if ( CWindowProp::GetProp<CVisRgnTrackerProp>((__int64)v3, (__int64 *)&v14) )
                CVisRgnTrackerProp::MarkDirty(v14);
            }
          }
          Prop = (CVisRgnTrackerProp *)RealGetProp(*((_QWORD *)v1 + 18), LOWORD(WPP_MAIN_CB.AlignmentRequirement), 1LL);
          if ( Prop )
            CVisRgnTrackerProp::MarkDirty(Prop);
          for ( i = *((_QWORD *)v1 + 14); i; i = *(_QWORD *)(i + 88) )
            MarkDirtyWorker((struct tagWND *)i);
          if ( !v11 )
          {
            while ( 1 )
            {
              v1 = (struct tagWND *)*((_QWORD *)v1 + 11);
              if ( !v1 )
                break;
              if ( (*(_BYTE *)(*((_QWORD *)v1 + 5) + 31LL) & 0x14) == 0x14 )
                MarkDirtyWorker(v1);
            }
          }
        }
      }
    }
  }
}
