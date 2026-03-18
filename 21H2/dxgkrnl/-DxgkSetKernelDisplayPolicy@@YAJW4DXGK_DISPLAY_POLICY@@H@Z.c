/*
 * XREFs of ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1C01E4D80
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C0002690 (-DisableDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C001F90C (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkSetKernelDisplayPolicy(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v11; // rdi
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  bool v16; // bl
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned int v25; // eax
  _BYTE v26[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v27; // [rsp+58h] [rbp-20h]
  int v28; // [rsp+60h] [rbp-18h]

  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( v6
    && (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId),
        (v11 = SessionDataForSpecifiedSession) != 0LL) )
  {
    v12 = a1 - 1;
    if ( !v12 )
    {
      if ( a2 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
          (DXGAUTOPUSHLOCK *)v26,
          (struct _KTHREAD **)SessionDataForSpecifiedSession + 2373,
          0);
        DXGPUSHLOCK::AcquireExclusive(v27);
        v28 = 2;
        *((_BYTE *)v11 + 18976) = 1;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
      }
      else
      {
        DispBrokerClient::DisableDisplayBroker((struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 18968));
      }
      return 0LL;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      *((_BYTE *)SessionDataForSpecifiedSession + 18499) = a2 == 0;
      return 0LL;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      *((_BYTE *)SessionDataForSpecifiedSession + 18498) = a2 == 0;
      return 0LL;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v16 = a2 != 0;
      if ( *((_BYTE *)SessionDataForSpecifiedSession + 18977) != (a2 != 0) )
      {
        *((_BYTE *)SessionDataForSpecifiedSession + 18977) = v16;
        DispBrokerClient::DisconnectDisplayBroker((struct _KTHREAD **)SessionDataForSpecifiedSession + 2371);
      }
      *((_BYTE *)v11 + 18500) = v16;
      return 0LL;
    }
    if ( v15 == 1 )
    {
      *((_BYTE *)SessionDataForSpecifiedSession + 18501) = a2 != 0;
      return 0LL;
    }
    return 3221225485LL;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v5, v4, v7, v8);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    WdLogSingleEntry1(1LL, ProcessSessionId);
    v24 = PsGetCurrentProcess(v21, v20, v22, v23);
    v25 = PsGetProcessSessionId(v24);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Called DxgkSetKernelDisplayPolicy without session data in session 0x%I64x",
      v25,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221226581LL;
  }
}
