/*
 * XREFs of ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0015214
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C0014B70 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x1C0025C10 (DxgSetPowerComponentIdleCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C004BB00 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C004BBC0 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x1C004BC40 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x1C004BCC0 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C004BD50 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkMitigatedRangeUpdateCB @ 0x1C004BF50 (DxgkMitigatedRangeUpdateCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x1C004BFC0 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C004C130 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x1C004C1B0 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C004C230 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgGetHandleDataCB @ 0x1C015B530 (DxgGetHandleDataCB.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C01C9150 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C01C9260 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgkMapContextAllocationCB @ 0x1C01C92D0 (DxgkMapContextAllocationCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1C01C9360 (DxgDestroyContextAllocationCB.c)
 *     DxgCreateContextAllocationCB @ 0x1C01C9420 (DxgCreateContextAllocationCB.c)
 *     DxgkAcquireHandleDataCB @ 0x1C01C95D0 (DxgkAcquireHandleDataCB.c)
 *     DxgkReleaseHandleDataCB @ 0x1C01C9830 (DxgkReleaseHandleDataCB.c)
 *     DxgSetPowerComponentActiveCB @ 0x1C01F4740 (DxgSetPowerComponentActiveCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1C02E2DA0 (DxgkUpdateContextAllocationCB.c)
 *     DxgEnumHandleChildrenCB @ 0x1C02E7EE0 (DxgEnumHandleChildrenCB.c)
 *     DxgGetCaptureAddressCB @ 0x1C02E80E0 (DxgGetCaptureAddressCB.c)
 *     DxgGetHandleParentCB @ 0x1C02E8350 (DxgGetHandleParentCB.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01961F0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

DXGVALIDATIONPROCESSREATTACH *__fastcall DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH(
        DXGVALIDATIONPROCESSREATTACH *this)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v8; // rbx
  struct _KPROCESS *ThreadProcess; // rax

  *(_BYTE *)this = 0;
  if ( (unsigned __int8)KeIsAttachedProcess() && KeGetCurrentIrql() < 2u )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry1(1LL, 2373LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v4,
            v3,
            v5,
            0,
            2,
            -1,
            (__int64)L"m_pGlobal != NULL",
            2373LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 429) )
    {
      Global = DXGGLOBAL_GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(Global);
      if ( SessionData )
      {
        v8 = *((_QWORD *)SessionData + 2340);
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
