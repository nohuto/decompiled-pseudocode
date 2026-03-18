/*
 * XREFs of ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01E9130
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EC214 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01C8394 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 */

__int64 __fastcall DxgkSendDisplayBrokerMessage(
        unsigned int a1,
        struct _PORT_MESSAGE *a2,
        struct _ALPC_MESSAGE_ATTRIBUTES *a3,
        struct _PORT_MESSAGE *a4,
        unsigned __int64 *a5,
        struct _ALPC_MESSAGE_ATTRIBUTES *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned int v26; // eax

  v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( v13 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId);
    if ( SessionDataForSpecifiedSession )
      return DispBrokerClient::SendDisplayBrokerMessage(
               (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 18968),
               a1,
               a2,
               a3,
               a4,
               a5,
               a6,
               a7);
  }
  CurrentProcess = PsGetCurrentProcess(v12, v11, v14, v15);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  WdLogSingleEntry1(1LL, ProcessSessionId);
  v25 = PsGetCurrentProcess(v22, v21, v23, v24);
  v26 = PsGetProcessSessionId(v25);
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    -1,
    (__int64)L"Called DxgkSetKernelDisplayPolicy without session data in session 0x%I64x",
    v26,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221226581LL;
}
