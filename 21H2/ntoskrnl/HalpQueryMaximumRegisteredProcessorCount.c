/*
 * XREFs of HalpQueryMaximumRegisteredProcessorCount @ 0x1403A2374
 * Callers:
 *     HalStartNextProcessor @ 0x1403A14A0 (HalStartNextProcessor.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x1403A22B4 (HalpInterruptGetNextProcessorLocalId.c)
 *     HalpTimerSelectRoles @ 0x1403A9D9C (HalpTimerSelectRoles.c)
 *     HalEnumerateProcessors @ 0x1403B4E80 (HalEnumerateProcessors.c)
 *     HalpPteReserveResources @ 0x1403BBBE0 (HalpPteReserveResources.c)
 *     HalpAllocateCR3Root @ 0x1403CBAC8 (HalpAllocateCR3Root.c)
 *     HalpTscReserveResources @ 0x1403CD028 (HalpTscReserveResources.c)
 *     HalStartDynamicProcessor @ 0x1404BC2E0 (HalStartDynamicProcessor.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x1404C2090 (HalpHvInitMcaStatusMsrCache.c)
 *     EmonAllocateResources @ 0x1404D31B8 (EmonAllocateResources.c)
 *     HalpTscReportSyncStatus @ 0x1407D2A90 (HalpTscReportSyncStatus.c)
 *     EmonCompleteInitializeProfiling @ 0x14099FC70 (EmonCompleteInitializeProfiling.c)
 *     HalpMcaInitializePcrContext @ 0x1409A023C (HalpMcaInitializePcrContext.c)
 *     EmonInitializeProfiling @ 0x1409A06C0 (EmonInitializeProfiling.c)
 *     HalpDpStartProcessor @ 0x1409A8A54 (HalpDpStartProcessor.c)
 *     Amd64InitializeProfiling @ 0x1409A9720 (Amd64InitializeProfiling.c)
 *     HalpPreAllocateKInterrupts @ 0x140A739EC (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x14037B300 (HalQueryMaximumProcessorCount.c)
 *     ZwQueryLicenseValue @ 0x1403FCE20 (ZwQueryLicenseValue.c)
 */

__int64 HalpQueryMaximumRegisteredProcessorCount()
{
  __int64 result; // rax
  __int64 v1; // rcx
  int v2; // ett
  unsigned __int32 MaximumProcessorCount; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int32 v6; // [rsp+60h] [rbp+20h] BYREF
  int v7; // [rsp+68h] [rbp+28h] BYREF
  int v8; // [rsp+70h] [rbp+30h] BYREF

  v7 = 0;
  v8 = 0;
  v6 = 0;
  DestinationString = 0LL;
  _m_prefetchw(&dword_140CED9B0);
  LODWORD(result) = dword_140CED9B0;
  do
  {
    v1 = (unsigned int)result;
    v2 = result;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140CED9B0, result, result);
  }
  while ( v2 != (_DWORD)result );
  if ( !(_DWORD)result )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount(v1);
    if ( MaximumProcessorCount > 0x500 )
      MaximumProcessorCount = 1280;
    RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
    if ( (int)ZwQueryLicenseValue(&DestinationString, &v8, &v6, 4LL, &v7) >= 0 && v7 == 4 && v8 == 4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 *= CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
      if ( MaximumProcessorCount > v6 )
        MaximumProcessorCount = v6;
    }
    result = MaximumProcessorCount;
    _InterlockedExchange(&dword_140CED9B0, MaximumProcessorCount);
  }
  return result;
}
