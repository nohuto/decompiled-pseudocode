/*
 * XREFs of ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013B6C
 * Callers:
 *     DxgNotifyVSyncCB @ 0x1C0040870 (DxgNotifyVSyncCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C00408F0 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C00409B0 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x1C0040A30 (DxgSetPowerComponentIdleCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C0040AB0 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x1C0040E10 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x1C0040E90 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C0041010 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkMitigatedRangeUpdateCB @ 0x1C0041210 (DxgkMitigatedRangeUpdateCB.c)
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C0041280 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x1C0041330 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C0041460 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x1C00414E0 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C0041560 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C0143040 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1C0143140 (DxgDestroyContextAllocationCB.c)
 *     DxgCreateContextAllocationCB @ 0x1C01431F0 (DxgCreateContextAllocationCB.c)
 *     DxgGetHandleDataCB @ 0x1C0143380 (DxgGetHandleDataCB.c)
 *     DxgkAcquireHandleDataCB @ 0x1C01435A0 (DxgkAcquireHandleDataCB.c)
 *     DxgkReleaseHandleDataCB @ 0x1C0143BB0 (DxgkReleaseHandleDataCB.c)
 *     DxgSetPowerComponentActiveCB @ 0x1C024D410 (DxgSetPowerComponentActiveCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C024D490 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgkMapContextAllocationCB @ 0x1C024D5B0 (DxgkMapContextAllocationCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1C024D650 (DxgkUpdateContextAllocationCB.c)
 *     DxgEnumHandleChildrenCB @ 0x1C0252BF0 (DxgEnumHandleChildrenCB.c)
 *     DxgGetCaptureAddressCB @ 0x1C0252DE0 (DxgGetCaptureAddressCB.c)
 *     DxgGetHandleParentCB @ 0x1C0253040 (DxgGetHandleParentCB.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01144D0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
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
      *(_QWORD *)(v5 + 24) = 2219LL;
      WdLogEvent5_WdAssertion(v5);
    }
    if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 359) )
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
