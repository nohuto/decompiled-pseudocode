/*
 * XREFs of ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D4DC
 * Callers:
 *     DxgNotifyVSyncCB @ 0x1C0041790 (DxgNotifyVSyncCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C0041810 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C00418D0 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x1C0041950 (DxgSetPowerComponentIdleCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C00419D0 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x1C0041D30 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x1C0041DB0 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C0041F30 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkMitigatedRangeUpdateCB @ 0x1C0042130 (DxgkMitigatedRangeUpdateCB.c)
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C00421A0 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x1C0042250 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C0042380 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x1C0042400 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C0042480 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C014CB60 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1C014CC60 (DxgDestroyContextAllocationCB.c)
 *     DxgCreateContextAllocationCB @ 0x1C014CD10 (DxgCreateContextAllocationCB.c)
 *     DxgGetHandleDataCB @ 0x1C014CEA0 (DxgGetHandleDataCB.c)
 *     DxgkAcquireHandleDataCB @ 0x1C014D0C0 (DxgkAcquireHandleDataCB.c)
 *     DxgkReleaseHandleDataCB @ 0x1C014D6D0 (DxgkReleaseHandleDataCB.c)
 *     DxgSetPowerComponentActiveCB @ 0x1C0250730 (DxgSetPowerComponentActiveCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C02507B0 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgkMapContextAllocationCB @ 0x1C02508D0 (DxgkMapContextAllocationCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1C0250970 (DxgkUpdateContextAllocationCB.c)
 *     DxgEnumHandleChildrenCB @ 0x1C0255F10 (DxgEnumHandleChildrenCB.c)
 *     DxgGetCaptureAddressCB @ 0x1C0256100 (DxgGetCaptureAddressCB.c)
 *     DxgGetHandleParentCB @ 0x1C0256360 (DxgGetHandleParentCB.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00ED954 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
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
