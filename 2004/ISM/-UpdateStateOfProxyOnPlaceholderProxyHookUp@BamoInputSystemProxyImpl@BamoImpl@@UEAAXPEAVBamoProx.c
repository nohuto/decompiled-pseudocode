/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSystemProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1800439F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateActivationWatcher@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800ED528 (-UpdateActivationWatcher@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateControllerNavigationManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800ED830 (-UpdateControllerNavigationManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateDragNDropContextualProcessor@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EDB3C (-UpdateDragNDropContextualProcessor@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateEdgyControllerServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EDCF8 (-UpdateEdgyControllerServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateHeatGripService@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EE260 (-UpdateHeatGripService@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateInputDeliveryServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EE564 (-UpdateInputDeliveryServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateInputObserverManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EE67C (-UpdateInputObserverManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateInputSiteManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EE794 (-UpdateInputSiteManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateKeyboardDockServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EEC44 (-UpdateKeyboardDockServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdatePenDeviceManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EEF08 (-UpdatePenDeviceManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdatePenEventsDispatcher@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EF020 (-UpdatePenEventsDispatcher@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateResizeContextualProcessor@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EF280 (-UpdateResizeContextualProcessor@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateSystemCursorController@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EF744 (-UpdateSystemCursorController@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateTestCommands@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EF864 (-UpdateTestCommands@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateUIAHitTest@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800EFC24 (-UpdateUIAHitTest@BamoInputSystemProxyImpl@BamoImpl@@QEAAJI@Z.c)
 */

void __fastcall BamoImpl::BamoInputSystemProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoInputSystemProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v2; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v2 = *((_QWORD *)a2 + 4);
  if ( v2 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateActivationWatcher(this, *(_DWORD *)(v2 + 40));
  v5 = *((_QWORD *)a2 + 5);
  if ( v5 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateControllerNavigationManager(this, *(_DWORD *)(v5 + 40));
  v6 = *((_QWORD *)a2 + 6);
  if ( v6 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateDragNDropContextualProcessor(this, *(_DWORD *)(v6 + 40));
  v7 = *((_QWORD *)a2 + 7);
  if ( v7 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateEdgyControllerServer(this, *(_DWORD *)(v7 + 40));
  v8 = *((_QWORD *)a2 + 8);
  if ( v8 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateHeatGripService(this, *(_DWORD *)(v8 + 40));
  v9 = *((_QWORD *)a2 + 9);
  if ( v9 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateInputDeliveryServer(this, *(_DWORD *)(v9 + 40));
  v10 = *((_QWORD *)a2 + 10);
  if ( v10 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateInputObserverManager(this, *(_DWORD *)(v10 + 40));
  v11 = *((_QWORD *)a2 + 11);
  if ( v11 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateInputSiteManager(this, *(_DWORD *)(v11 + 40));
  v12 = *((_QWORD *)a2 + 12);
  if ( v12 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateKeyboardDockServer(this, *(_DWORD *)(v12 + 40));
  v13 = *((_QWORD *)a2 + 13);
  if ( v13 )
    BamoImpl::BamoInputSystemProxyImpl::UpdatePenDeviceManager(this, *(_DWORD *)(v13 + 40));
  v14 = *((_QWORD *)a2 + 14);
  if ( v14 )
    BamoImpl::BamoInputSystemProxyImpl::UpdatePenEventsDispatcher(this, *(_DWORD *)(v14 + 40));
  v15 = *((_QWORD *)a2 + 15);
  if ( v15 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateResizeContextualProcessor(this, *(_DWORD *)(v15 + 40));
  v16 = *((_QWORD *)a2 + 16);
  if ( v16 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateSystemCursorController(this, *(_DWORD *)(v16 + 40));
  v17 = *((_QWORD *)a2 + 17);
  if ( v17 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateTestCommands(this, *(_DWORD *)(v17 + 40));
  v18 = *((_QWORD *)a2 + 18);
  if ( v18 )
    BamoImpl::BamoInputSystemProxyImpl::UpdateUIAHitTest(this, *(_DWORD *)(v18 + 40));
}
