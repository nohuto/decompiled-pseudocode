/*
 * XREFs of memset @ 0x1C000EF40
 * Callers:
 *     memcpy_s @ 0x1C0001DE8 (memcpy_s.c)
 *     InitDevExts @ 0x1C0002D2C (InitDevExts.c)
 *     GetProcessorStatusInfo @ 0x1C00057C0 (GetProcessorStatusInfo.c)
 *     AcpiEval_OSC @ 0x1C0005EE8 (AcpiEval_OSC.c)
 *     InitLegacyPccInternal @ 0x1C000AE18 (InitLegacyPccInternal.c)
 *     RegisterKernelIdleStates @ 0x1C000B430 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C000BB8C (UpdateKernelPlatformStates.c)
 *     PepParkMask @ 0x1C000DE30 (PepParkMask.c)
 *     PepParkPreference @ 0x1C000DFB0 (PepParkPreference.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C001E008 (ProcLibTraceProcessorLpiRundown.c)
 *     InitCoreProcessorSetAffinity @ 0x1C00209AC (InitCoreProcessorSetAffinity.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0020FE4 (GetRegistryDwordValueNoDefault.c)
 *     GetRegistryQwordValue @ 0x1C0021064 (GetRegistryQwordValue.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C0021218 (ProcLibTraceCoordinatedLpiRundown.c)
 *     EvtDriverDeviceAdd @ 0x1C0021AA0 (EvtDriverDeviceAdd.c)
 *     WppTraceCallback @ 0x1C0022170 (WppTraceCallback.c)
 *     InitAcpi1CStates @ 0x1C0022718 (InitAcpi1CStates.c)
 *     RegisterHvCStates @ 0x1C0023C28 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C0023F70 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvLegacyPcc @ 0x1C0024470 (RegisterHvLegacyPcc.c)
 *     RegisterHvLpiStates @ 0x1C002476C (RegisterHvLpiStates.c)
 *     RegisterHvPepContext @ 0x1C0024ABC (RegisterHvPepContext.c)
 *     RegisterHvPerfStates @ 0x1C0024BD0 (RegisterHvPerfStates.c)
 *     AcquirePccInterface @ 0x1C00251C0 (AcquirePccInterface.c)
 *     RegisterSubspace @ 0x1C0025614 (RegisterSubspace.c)
 *     RegisterWmi @ 0x1C0025898 (RegisterWmi.c)
 *     AcpiEval_CPC @ 0x1C0025E7C (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x1C0026580 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C0026898 (AcpiEval_CST.c)
 *     AcpiEval_PSD_TSD @ 0x1C0027430 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C0027794 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0027CBC (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0027FCC (AcpiEval_XPSS.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C00285A8 (AcpiGetCoordinatedLpiStates.c)
 *     AcpiParseLpiObject @ 0x1C0028C8C (AcpiParseLpiObject.c)
 *     AcpiParseProcessorContainer @ 0x1C002948C (AcpiParseProcessorContainer.c)
 *     EnumerateControlMethods @ 0x1C0029B84 (EnumerateControlMethods.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C002BFEC (ValidateCoordinatedDependencyOptions.c)
 *     ValidateCoordinatedState @ 0x1C002C5DC (ValidateCoordinatedState.c)
 *     DeregisterKernelIdleDomains @ 0x1C002DA44 (DeregisterKernelIdleDomains.c)
 *     InitCpcStatesInternal @ 0x1C002DEF8 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002F464 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C002F820 (InitPerfStatesInternal.c)
 *     RegisterIdleDomain @ 0x1C00302D4 (RegisterIdleDomain.c)
 *     RegisterKernelIdleDomains @ 0x1C003099C (RegisterKernelIdleDomains.c)
 *     RegisterKernelPepIdleStates @ 0x1C0030FF0 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C0031710 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C0031DD4 (RegisterKernelPlatformStates.c)
 *     RegisterXsdDomain @ 0x1C003293C (RegisterXsdDomain.c)
 *     InitAcpi1ThrottleStates @ 0x1C0032EB8 (InitAcpi1ThrottleStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C00338EC (PepNotifyCoordinatedLpiStates.c)
 *     PepNotifyProcessorLpiStates @ 0x1C0033BFC (PepNotifyProcessorLpiStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C0033DAC (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0034168 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C003442C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C0034898 (PepNotifyReportCStates.c)
 *     PepQueryName @ 0x1C0034A2C (PepQueryName.c)
 *     PepQueryVetoList @ 0x1C0034B94 (PepQueryVetoList.c)
 *     EnableEnergyEstimation @ 0x1C00350A0 (EnableEnergyEstimation.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C00351B8 (EnablePerformanceMonitoringCounters.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00354E8 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitPepPerfStates @ 0x1C0035900 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C00360D0 (PepNotifyQueryFeedbackCounters.c)
 *     RegisterPepDevice @ 0x1C0036D34 (RegisterPepDevice.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0037700 (LpiTranslateCoordinatedIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C00387D0 (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationModel @ 0x1C0039490 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C00395F4 (ReadEnergyEquation.c)
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
