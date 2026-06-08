/*
 * XREFs of memset @ 0x1C000EDC0
 * Callers:
 *     memcpy_s @ 0x1C0001EE8 (memcpy_s.c)
 *     InitDevExts @ 0x1C0002C8C (InitDevExts.c)
 *     GetProcessorStatusInfo @ 0x1C0004FD0 (GetProcessorStatusInfo.c)
 *     AcpiEval_OSC @ 0x1C00056F8 (AcpiEval_OSC.c)
 *     InitLegacyPccInternal @ 0x1C000A628 (InitLegacyPccInternal.c)
 *     RegisterKernelIdleStates @ 0x1C000AC40 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C000B38C (UpdateKernelPlatformStates.c)
 *     PepParkMask @ 0x1C000DCD0 (PepParkMask.c)
 *     PepParkPreference @ 0x1C000DE50 (PepParkPreference.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C001D008 (ProcLibTraceProcessorLpiRundown.c)
 *     InitCoreProcessorSetAffinity @ 0x1C001F9AC (InitCoreProcessorSetAffinity.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001FFE4 (GetRegistryDwordValueNoDefault.c)
 *     GetRegistryQwordValue @ 0x1C0020064 (GetRegistryQwordValue.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C0020218 (ProcLibTraceCoordinatedLpiRundown.c)
 *     EvtDriverDeviceAdd @ 0x1C0020AA0 (EvtDriverDeviceAdd.c)
 *     WppTraceCallback @ 0x1C0021170 (WppTraceCallback.c)
 *     RegisterHvCStates @ 0x1C0022758 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C0022AA0 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvLegacyPcc @ 0x1C0022FA0 (RegisterHvLegacyPcc.c)
 *     RegisterHvLpiStates @ 0x1C002329C (RegisterHvLpiStates.c)
 *     RegisterHvPepContext @ 0x1C00235EC (RegisterHvPepContext.c)
 *     RegisterHvPerfStates @ 0x1C0023700 (RegisterHvPerfStates.c)
 *     AcquirePccInterface @ 0x1C0023CF0 (AcquirePccInterface.c)
 *     RegisterSubspace @ 0x1C0024144 (RegisterSubspace.c)
 *     RegisterWmi @ 0x1C00243C8 (RegisterWmi.c)
 *     AcpiEval_CPC @ 0x1C00249AC (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x1C00250B0 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C00253C8 (AcpiEval_CST.c)
 *     AcpiEval_PSD_TSD @ 0x1C0025F60 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C00262C4 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C00267EC (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0026AFC (AcpiEval_XPSS.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C00270D8 (AcpiGetCoordinatedLpiStates.c)
 *     AcpiParseLpiObject @ 0x1C00277BC (AcpiParseLpiObject.c)
 *     AcpiParseProcessorContainer @ 0x1C0027FBC (AcpiParseProcessorContainer.c)
 *     EnumerateControlMethods @ 0x1C0028694 (EnumerateControlMethods.c)
 *     RegisterXsdDomain @ 0x1C002A624 (RegisterXsdDomain.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C002B294 (ValidateCoordinatedDependencyOptions.c)
 *     ValidateCoordinatedState @ 0x1C002B884 (ValidateCoordinatedState.c)
 *     DeregisterKernelIdleDomains @ 0x1C002CCEC (DeregisterKernelIdleDomains.c)
 *     InitCpcStatesInternal @ 0x1C002D198 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002E704 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C002EAC0 (InitPerfStatesInternal.c)
 *     RegisterIdleDomain @ 0x1C002F4AC (RegisterIdleDomain.c)
 *     RegisterKernelIdleDomains @ 0x1C002FB7C (RegisterKernelIdleDomains.c)
 *     RegisterKernelPepIdleStates @ 0x1C00301D0 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C00308F0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C0030FB4 (RegisterKernelPlatformStates.c)
 *     InitAcpi1ThrottleStates @ 0x1C00318F4 (InitAcpi1ThrottleStates.c)
 *     InitAcpi1CStates @ 0x1C0032160 (InitAcpi1CStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C003284C (PepNotifyCoordinatedLpiStates.c)
 *     PepNotifyProcessorLpiStates @ 0x1C0032B5C (PepNotifyProcessorLpiStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C0032D0C (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00330C8 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C003338C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C00337F8 (PepNotifyReportCStates.c)
 *     PepQueryName @ 0x1C003398C (PepQueryName.c)
 *     PepQueryVetoList @ 0x1C0033AF4 (PepQueryVetoList.c)
 *     EnableEnergyEstimation @ 0x1C0034000 (EnableEnergyEstimation.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C0034118 (EnablePerformanceMonitoringCounters.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0034448 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitPepPerfStates @ 0x1C0034860 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0035030 (PepNotifyQueryFeedbackCounters.c)
 *     RegisterPepDevice @ 0x1C0035C94 (RegisterPepDevice.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0036620 (LpiTranslateCoordinatedIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C003778C (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationModel @ 0x1C00383DC (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C0038540 (ReadEnergyEquation.c)
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
