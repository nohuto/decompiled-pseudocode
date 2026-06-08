/*
 * XREFs of memset @ 0x1C00047C0
 * Callers:
 *     InitDevExts @ 0x1C0001CB4 (InitDevExts.c)
 *     AcpiEval_OSC @ 0x1C0003864 (AcpiEval_OSC.c)
 *     RegisterKernelIdleStates @ 0x1C0003B20 (RegisterKernelIdleStates.c)
 *     memcpy_s @ 0x1C00042D8 (memcpy_s.c)
 *     GetProcessorStatusInfo @ 0x1C000B260 (GetProcessorStatusInfo.c)
 *     InitLegacyPccInternal @ 0x1C000DF4C (InitLegacyPccInternal.c)
 *     UpdateKernelPlatformStates @ 0x1C000E52C (UpdateKernelPlatformStates.c)
 *     PepParkMask @ 0x1C0010790 (PepParkMask.c)
 *     PepParkPreference @ 0x1C0010910 (PepParkPreference.c)
 *     PepQueryVetoList @ 0x1C00207DC (PepQueryVetoList.c)
 *     GetRegistryQwordValue @ 0x1C002083C (GetRegistryQwordValue.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0020924 (GetRegistryDwordValueNoDefault.c)
 *     RegisterWmi @ 0x1C0020AEC (RegisterWmi.c)
 *     InitAcpi1ThrottleStates @ 0x1C002151C (InitAcpi1ThrottleStates.c)
 *     AcquirePccInterface @ 0x1C00224A8 (AcquirePccInterface.c)
 *     AcpiEval_PSD_TSD @ 0x1C002263C (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CSD @ 0x1C00228A0 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0022A10 (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C0022ED8 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C00231C4 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0023584 (AcpiEval_TSS.c)
 *     RegisterXsdDomain @ 0x1C0023BF0 (RegisterXsdDomain.c)
 *     RegisterPepDevice @ 0x1C0024054 (RegisterPepDevice.c)
 *     EnumerateControlMethods @ 0x1C0024138 (EnumerateControlMethods.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002440C (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitPerfStatesInternal @ 0x1C002480C (InitPerfStatesInternal.c)
 *     EnableEnergyEstimation @ 0x1C0024F0C (EnableEnergyEstimation.c)
 *     RegisterKernelIdleDomains @ 0x1C00252EC (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0025790 (DeregisterKernelIdleDomains.c)
 *     EvtDriverDeviceAdd @ 0x1C0025930 (EvtDriverDeviceAdd.c)
 *     InitEnergyCounters @ 0x1C0025D30 (InitEnergyCounters.c)
 *     RetrieveModelParameters @ 0x1C00260E0 (RetrieveModelParameters.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C002B700 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C002C830 (ProcLibTraceProcessorLpiRundown.c)
 *     WppTraceCallback @ 0x1C002D350 (WppTraceCallback.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C002E3C0 (ValidateCoordinatedDependencyOptions.c)
 *     ValidateCoordinatedState @ 0x1C002EA5C (ValidateCoordinatedState.c)
 *     RegisterHvCStates @ 0x1C002FB58 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C002FE90 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvLegacyPcc @ 0x1C0030390 (RegisterHvLegacyPcc.c)
 *     RegisterHvLpiStates @ 0x1C003068C (RegisterHvLpiStates.c)
 *     RegisterHvPepContext @ 0x1C00309DC (RegisterHvPepContext.c)
 *     RegisterHvPerfStates @ 0x1C0030AF0 (RegisterHvPerfStates.c)
 *     RegisterSubspace @ 0x1C00313D4 (RegisterSubspace.c)
 *     AcpiEval_XPSS @ 0x1C0031D6C (AcpiEval_XPSS.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C0032180 (AcpiGetCoordinatedLpiStates.c)
 *     AcpiParseLpiObject @ 0x1C00325D4 (AcpiParseLpiObject.c)
 *     AcpiParseProcessorContainer @ 0x1C0032DC0 (AcpiParseProcessorContainer.c)
 *     InitAcpi1CStates @ 0x1C0033704 (InitAcpi1CStates.c)
 *     InitCpcStatesInternal @ 0x1C0033C90 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00351F4 (InitPerfFeedbackInternal.c)
 *     RegisterIdleDomain @ 0x1C0035670 (RegisterIdleDomain.c)
 *     RegisterKernelPepIdleStates @ 0x1C0035F90 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C0036610 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C0036C6C (RegisterKernelPlatformStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C00377C0 (PepNotifyCoordinatedLpiStates.c)
 *     PepNotifyProcessorLpiStates @ 0x1C0037AD0 (PepNotifyProcessorLpiStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C0037C80 (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0038038 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0038310 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C0038760 (PepNotifyReportCStates.c)
 *     PepQueryName @ 0x1C00388F4 (PepQueryName.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C0038DD0 (EnablePerformanceMonitoringCounters.c)
 *     InitPepPerfStates @ 0x1C0038F1C (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0039718 (PepNotifyQueryFeedbackCounters.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003A120 (LpiTranslateCoordinatedIdleStates.c)
 *     PopulateEnergyEstimationModel @ 0x1C003B590 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C003B680 (ReadEnergyEquation.c)
 *     ProcLibGlobalInit @ 0x1C003B758 (ProcLibGlobalInit.c)
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
