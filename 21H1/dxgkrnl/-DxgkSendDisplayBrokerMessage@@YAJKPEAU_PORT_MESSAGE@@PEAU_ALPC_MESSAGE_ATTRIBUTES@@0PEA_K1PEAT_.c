/*
 * XREFs of ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C0159EB0
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0256B4C (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C0152ED8 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 */

__int64 __fastcall DxgkSendDisplayBrokerMessage(
        __int64 a1,
        struct _PORT_MESSAGE *a2,
        struct _ALPC_MESSAGE_ATTRIBUTES *a3,
        struct _PORT_MESSAGE *a4,
        unsigned __int64 *a5,
        struct _ALPC_MESSAGE_ATTRIBUTES *a6,
        union _LARGE_INTEGER *a7)
{
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 CurrentProcess; // rax

  v10 = a1;
  v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1, (__int64)a2) + 88);
  if ( v13 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
    return DispBrokerClient::SendDisplayBrokerMessage(
             (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 18936),
             v10,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  v17 = WdLogNewEntry5_WdAssertion(v12, v11);
  CurrentProcess = PsGetCurrentProcess(v19, v18);
  *(_QWORD *)(v17 + 24) = (unsigned int)PsGetProcessSessionId(CurrentProcess);
  WdLogEvent5_WdAssertion(v17);
  return 3221226581LL;
}
