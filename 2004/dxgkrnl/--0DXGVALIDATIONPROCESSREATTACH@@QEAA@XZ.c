/*
 * XREFs of ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D47C
 * Callers:
 *     DxgNotifyVSyncCB @ 0x1C0041890 (DxgNotifyVSyncCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C0041910 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C00419D0 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x1C0041A50 (DxgSetPowerComponentIdleCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C0041AD0 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x1C0041E30 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x1C0041EB0 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C0042030 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkMitigatedRangeUpdateCB @ 0x1C0042230 (DxgkMitigatedRangeUpdateCB.c)
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C00422A0 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x1C0042350 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C0042480 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x1C0042500 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C0042580 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C014DD10 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1C014DE10 (DxgDestroyContextAllocationCB.c)
 *     DxgCreateContextAllocationCB @ 0x1C014DEC0 (DxgCreateContextAllocationCB.c)
 *     DxgGetHandleDataCB @ 0x1C014E050 (DxgGetHandleDataCB.c)
 *     DxgkAcquireHandleDataCB @ 0x1C014E270 (DxgkAcquireHandleDataCB.c)
 *     DxgkReleaseHandleDataCB @ 0x1C014E880 (DxgkReleaseHandleDataCB.c)
 *     DxgSetPowerComponentActiveCB @ 0x1C0251710 (DxgSetPowerComponentActiveCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C0251790 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgkMapContextAllocationCB @ 0x1C02518B0 (DxgkMapContextAllocationCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1C0251950 (DxgkUpdateContextAllocationCB.c)
 *     DxgEnumHandleChildrenCB @ 0x1C0256EF0 (DxgEnumHandleChildrenCB.c)
 *     DxgGetCaptureAddressCB @ 0x1C02570E0 (DxgGetCaptureAddressCB.c)
 *     DxgGetHandleParentCB @ 0x1C0257340 (DxgGetHandleParentCB.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00EE9E4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

DXGVALIDATIONPROCESSREATTACH *__fastcall DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH(
        DXGVALIDATIONPROCESSREATTACH *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rax
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v8; // rbx
  struct _KPROCESS *ThreadProcess; // rax

  *(_BYTE *)this = 0;
  if ( (unsigned __int8)KeIsAttachedProcess() && KeGetCurrentIrql() < 2u )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v5 = WdLogNewEntry5_WdAssertion(v3, v2);
      *(_QWORD *)(v5 + 24) = 2238LL;
      WdLogEvent5_WdAssertion(v5);
    }
    if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 387) )
    {
      Global = DXGGLOBAL::GetGlobal(v3, v2);
      SessionData = DXGGLOBAL::GetSessionData(Global);
      if ( SessionData )
      {
        v8 = *((_QWORD *)SessionData + 2337);
        if ( v8 == PsGetCurrentProcess() )
        {
          ThreadProcess = PsGetThreadProcess(KeGetCurrentThread());
          if ( ThreadProcess )
          {
            KeStackAttachProcess(ThreadProcess, (PRKAPC_STATE)((char *)this + 8));
            *(_BYTE *)this = 1;
          }
        }
      }
    }
  }
  return this;
}
