/*
 * XREFs of DxgkWaitForPnPTransitionDone @ 0x1C0130A5C
 * Callers:
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C0130534 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C025AE4C (DxgkIddHandleSetDisplayConfig.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C02C5DD0 (DpiIndicateConnectorChangeWorkItem.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z @ 0x1C0130AB4 (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z.c)
 */

__int64 __fastcall DxgkWaitForPnPTransitionDone(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  char v6; // si
  unsigned int v7; // ebp
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r8

  v6 = a2;
  v7 = a1;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  LOBYTE(v9) = v6;
  return DXGSESSIONMGR::WaitForPnPTransitionDone(*((_QWORD *)Global + 102), v7, v9, a3, a4);
}
