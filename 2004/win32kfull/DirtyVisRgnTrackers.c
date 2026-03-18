/*
 * XREFs of DirtyVisRgnTrackers @ 0x1C00A3960
 * Callers:
 *     ComposeWindowIfNeeded @ 0x1C0020B9C (ComposeWindowIfNeeded.c)
 *     CreateVisRgnTracker @ 0x1C0028A38 (CreateVisRgnTracker.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C002C7DC (xxxDeferWindowPosAndCheckPoint.c)
 *     DecomposeWindowIfNeeded @ 0x1C004E868 (DecomposeWindowIfNeeded.c)
 *     xxxGetSystemMenu @ 0x1C005C324 (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C005C848 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C005F4B4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C005F8B4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxSimpleDoSyncPaint @ 0x1C006CB10 (xxxSimpleDoSyncPaint.c)
 *     LinkWindow @ 0x1C006EAD0 (LinkWindow.c)
 *     InternalInvalidate3 @ 0x1C0073974 (InternalInvalidate3.c)
 *     UnlinkWindow @ 0x1C008A2D8 (UnlinkWindow.c)
 *     ClearHungFlag @ 0x1C008CC64 (ClearHungFlag.c)
 *     xxxDoPaint @ 0x1C0092318 (xxxDoPaint.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     xxxDispatchMessage @ 0x1C00A54AC (xxxDispatchMessage.c)
 *     DwmChildRectChange @ 0x1C00A5C78 (DwmChildRectChange.c)
 *     xxxCalcClientRect @ 0x1C00AC73C (xxxCalcClientRect.c)
 *     xxxSetScrollBar @ 0x1C00F0C18 (xxxSetScrollBar.c)
 *     SelectWindowRgn @ 0x1C0108600 (SelectWindowRgn.c)
 *     xxxSetClassData @ 0x1C010CC4C (xxxSetClassData.c)
 * Callees:
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C0022C94 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00A3B0C (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C01054E0 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
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
    v2 = *(_QWORD *)(gptiCurrent + 448LL);
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
            if ( (*(_WORD *)(v5 + 42) & 0x3FFF) != 0x29D )
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
          Prop = (CVisRgnTrackerProp *)RealGetProp(
                                         *((_QWORD *)v1 + 18),
                                         LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc),
                                         1LL);
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
