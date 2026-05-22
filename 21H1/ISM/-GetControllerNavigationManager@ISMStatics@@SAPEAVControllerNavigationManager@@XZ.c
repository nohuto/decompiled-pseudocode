/*
 * XREFs of ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800BC0DC
 * Callers:
 *     ?OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ @ 0x18011E820 (-OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ.c)
 *     ?OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x18011E850 (-OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 *     ?OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ @ 0x18011E8E0 (-OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ.c)
 *     ?OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x18011EA10 (-OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18011FAC8 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18011FF84 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1801204A8 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180120F60 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x180122C1C (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800166E8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 */

struct ControllerNavigationManager *ISMStatics::GetControllerNavigationManager(void)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  return (struct ControllerNavigationManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                                + 23)
                                                                                              + 8LL)
                                                                                  + 40LL))(*((_QWORD *)BamoServerConnection
                                                                                           + 23) + 8LL);
}
