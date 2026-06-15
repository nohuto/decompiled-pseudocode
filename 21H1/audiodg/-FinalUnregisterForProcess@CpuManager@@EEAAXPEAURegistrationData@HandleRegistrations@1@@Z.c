/*
 * XREFs of ?FinalUnregisterForProcess@CpuManager@@EEAAXPEAURegistrationData@HandleRegistrations@1@@Z @ 0x1400348E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpuManager::FinalUnregisterForProcess(CpuManager *this, HANDLE *a2)
{
  RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID, 0LL, 0LL, 0LL, *a2);
  NtSetInformationProcess(*a2, ProcessVmCounters|0x40, 0LL, 0);
  RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, (char *)this + 464, 4LL, 0LL);
  CloseHandle(*a2);
  *a2 = 0LL;
}
