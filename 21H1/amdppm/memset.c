/*
 * XREFs of memset @ 0x1C000ED80
 * Callers:
 *     memcpy_s @ 0x1C0001EE8 (memcpy_s.c)
 *     InitDevExts @ 0x1C0002C8C (InitDevExts.c)
 *     GetProcessorStatusInfo @ 0x1C0004F90 (GetProcessorStatusInfo.c)
 *     AcpiEval_OSC @ 0x1C00056B8 (AcpiEval_OSC.c)
 *     InitLegacyPccInternal @ 0x1C000A5E8 (InitLegacyPccInternal.c)
 *     RegisterKernelIdleStates @ 0x1C000AC00 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C000B34C (UpdateKernelPlatformStates.c)
 *     PepParkMask @ 0x1C000DC90 (PepParkMask.c)
 *     PepParkPreference @ 0x1C000DE10 (PepParkPreference.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C001C008 (ProcLibTraceProcessorLpiRundown.c)
 *     InitCoreProcessorSetAffinity @ 0x1C001E9AC (InitCoreProcessorSetAffinity.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001EFE4 (GetRegistryDwordValueNoDefault.c)
 *     GetRegistryQwordValue @ 0x1C001F064 (GetRegistryQwordValue.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C001F218 (ProcLibTraceCoordinatedLpiRundown.c)
 *     EvtDriverDeviceAdd @ 0x1C001FAA0 (EvtDriverDeviceAdd.c)
 *     WppTraceCallback @ 0x1C0020170 (WppTraceCallback.c)
 *     RegisterHvCStates @ 0x1C0021418 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C0021760 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvLegacyPcc @ 0x1C0021C60 (RegisterHvLegacyPcc.c)
 *     RegisterHvLpiStates @ 0x1C0021F5C (RegisterHvLpiStates.c)
 *     RegisterHvPepContext @ 0x1C00222AC (RegisterHvPepContext.c)
 *     RegisterHvPerfStates @ 0x1C00223C0 (RegisterHvPerfStates.c)
 *     AcquirePccInterface @ 0x1C00229B0 (AcquirePccInterface.c)
 *     RegisterSubspace @ 0x1C0022E04 (RegisterSubspace.c)
 *     RegisterWmi @ 0x1C0023088 (RegisterWmi.c)
 *     AcpiEval_CPC @ 0x1C002366C (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x1C0023D70 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C0024088 (AcpiEval_CST.c)
 *     AcpiEval_PSD_TSD @ 0x1C0024C20 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C0024F84 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C00254AC (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C00257BC (AcpiEval_XPSS.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C0025D98 (AcpiGetCoordinatedLpiStates.c)
 *     AcpiParseLpiObject @ 0x1C002647C (AcpiParseLpiObject.c)
 *     AcpiParseProcessorContainer @ 0x1C0026C7C (AcpiParseProcessorContainer.c)
 *     EnumerateControlMethods @ 0x1C0027354 (EnumerateControlMethods.c)
 *     RegisterXsdDomain @ 0x1C00292E4 (RegisterXsdDomain.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C0029F54 (ValidateCoordinatedDependencyOptions.c)
 *     ValidateCoordinatedState @ 0x1C002A544 (ValidateCoordinatedState.c)
 *     DeregisterKernelIdleDomains @ 0x1C002B9AC (DeregisterKernelIdleDomains.c)
 *     InitCpcStatesInternal @ 0x1C002BE58 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002D3C4 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C002D780 (InitPerfStatesInternal.c)
 *     RegisterIdleDomain @ 0x1C002E16C (RegisterIdleDomain.c)
 *     RegisterKernelIdleDomains @ 0x1C002E83C (RegisterKernelIdleDomains.c)
 *     RegisterKernelPepIdleStates @ 0x1C002EE90 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C002F5B0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C002FC74 (RegisterKernelPlatformStates.c)
 *     InitAcpi1ThrottleStates @ 0x1C00305B4 (InitAcpi1ThrottleStates.c)
 *     InitAcpi1CStates @ 0x1C0030E20 (InitAcpi1CStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C003150C (PepNotifyCoordinatedLpiStates.c)
 *     PepNotifyProcessorLpiStates @ 0x1C003181C (PepNotifyProcessorLpiStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C00319CC (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0031D88 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C003204C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C00324B8 (PepNotifyReportCStates.c)
 *     PepQueryName @ 0x1C003264C (PepQueryName.c)
 *     PepQueryVetoList @ 0x1C00327B4 (PepQueryVetoList.c)
 *     EnableEnergyEstimation @ 0x1C0032CC0 (EnableEnergyEstimation.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C0032DD8 (EnablePerformanceMonitoringCounters.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0033108 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitPepPerfStates @ 0x1C0033520 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0033CF0 (PepNotifyQueryFeedbackCounters.c)
 *     RegisterPepDevice @ 0x1C0034954 (RegisterPepDevice.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C00352E0 (LpiTranslateCoordinatedIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C0036650 (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationModel @ 0x1C00372A0 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C0037404 (ReadEnergyEquation.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
