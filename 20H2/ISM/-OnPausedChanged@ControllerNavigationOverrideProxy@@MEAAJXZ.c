/*
 * XREFs of ?OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x18011E4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800BBB7C (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18011CF84 (-OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProx.c)
 */

__int64 __fastcall ControllerNavigationOverrideProxy::OnPausedChanged(ControllerNavigationOverrideProxy *this)
{
  ControllerNavigationManager *ControllerNavigationManager; // rax
  __int64 v3; // r8
  const char *v4; // r9

  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  ControllerNavigationManager::OverrideStateChanged(ControllerNavigationManager, this, v3, v4);
  return 0LL;
}
