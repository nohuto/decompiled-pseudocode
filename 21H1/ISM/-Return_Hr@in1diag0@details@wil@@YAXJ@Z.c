/*
 * XREFs of ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800C1C70
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x180030F84 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x1800311CC (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180039900 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800BF6E0 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0PEAPEAU2@@Z @ 0x1800BFA20 (-AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0.c)
 *     ?CreateBuffer@SipcEndpoint@@UEAAJ_K0PEBXPEAPEAX@Z @ 0x1800BFF10 (-CreateBuffer@SipcEndpoint@@UEAAJ_K0PEBXPEAPEAX@Z.c)
 *     ?CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AX2PEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z2PEAPEAV1@@Z @ 0x1800C0194 (-CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AX2PEAUISIPCEndpoi.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800C07B0 (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?FreeSection@SipcPort@@QEAAJPEAX@Z @ 0x1800C0998 (-FreeSection@SipcPort@@QEAAJPEAX@Z.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800C0C30 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 *     ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x1800C1480 (-Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z.c)
 *     ?ProtectBuffer@SipcEndpoint@@UEAAJPEAX_K1@Z @ 0x1800C1760 (-ProtectBuffer@SipcEndpoint@@UEAAJPEAX_K1@Z.c)
 *     ?ProtectSection@SipcPort@@QEAAJPEAX_K1@Z @ 0x1800C17A0 (-ProtectSection@SipcPort@@QEAAJPEAX_K1@Z.c)
 *     ?ShareBuffer@SipcEndpoint@@UEAAJPEAX@Z @ 0x1800C1D00 (-ShareBuffer@SipcEndpoint@@UEAAJPEAX@Z.c)
 *     ?ShareSection@AlpcPort@@UEAAJPEAX@Z @ 0x1800C1D40 (-ShareSection@AlpcPort@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180035748 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag0::Return_Hr(wil::details::in1diag0 *this)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(0LL, 0LL, 0LL, 0LL, 0LL, retaddr);
}
