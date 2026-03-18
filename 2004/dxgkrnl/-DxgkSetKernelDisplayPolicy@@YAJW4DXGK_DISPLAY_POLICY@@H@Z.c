/*
 * XREFs of ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1C0166390
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C0019118 (-DisableDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkSetKernelDisplayPolicy(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  int v8; // edi
  int v9; // edi
  int v10; // edi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+30h] [rbp-18h]

  v2 = a2;
  v3 = a1;
  SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 102);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       SessionDataForSpecifiedSession,
                                       CurrentProcessSessionId);
  }
  if ( SessionDataForSpecifiedSession )
  {
    v8 = v3 - 1;
    if ( !v8 )
    {
      if ( v2 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
          (DXGAUTOPUSHLOCK *)v16,
          (struct _KTHREAD **)SessionDataForSpecifiedSession + 2369,
          0);
        DXGPUSHLOCK::AcquireExclusive(v17);
        v18 = 2;
        *((_BYTE *)SessionDataForSpecifiedSession + 18944) = 1;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
      }
      else
      {
        DispBrokerClient::DisableDisplayBroker((struct _KTHREAD **)SessionDataForSpecifiedSession + 2367);
      }
      return 0LL;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      *((_BYTE *)SessionDataForSpecifiedSession + 18491) = v2 == 0;
      return 0LL;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      *((_BYTE *)SessionDataForSpecifiedSession + 18490) = v2 == 0;
      return 0LL;
    }
    if ( v10 == 1 )
    {
      *((_BYTE *)SessionDataForSpecifiedSession + 18945) = v2 != 0;
      *((_BYTE *)SessionDataForSpecifiedSession + 18492) = v2 != 0;
      return 0LL;
    }
    return 3221225485LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion(v5, v4);
    CurrentProcess = PsGetCurrentProcess(v14, v13);
    *(_QWORD *)(v12 + 24) = (unsigned int)PsGetProcessSessionId(CurrentProcess);
    WdLogEvent5_WdAssertion(v12);
    return 3221226581LL;
  }
}
