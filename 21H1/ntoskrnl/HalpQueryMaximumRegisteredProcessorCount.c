/*
 * XREFs of HalpQueryMaximumRegisteredProcessorCount @ 0x14039EE54
 * Callers:
 *     HalStartNextProcessor @ 0x14039DF80 (HalStartNextProcessor.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x14039ED94 (HalpInterruptGetNextProcessorLocalId.c)
 *     HalpTimerSelectRoles @ 0x1403A673C (HalpTimerSelectRoles.c)
 *     HalEnumerateProcessors @ 0x1403AB250 (HalEnumerateProcessors.c)
 *     HalpPteReserveResources @ 0x1403B7910 (HalpPteReserveResources.c)
 *     HalpAllocateCR3Root @ 0x1403C76A8 (HalpAllocateCR3Root.c)
 *     HalpTscReserveResources @ 0x1403C8C08 (HalpTscReserveResources.c)
 *     HalStartDynamicProcessor @ 0x1404B6D20 (HalStartDynamicProcessor.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x1404BCAC0 (HalpHvInitMcaStatusMsrCache.c)
 *     EmonAllocateResources @ 0x1404CDD98 (EmonAllocateResources.c)
 *     HalpTscReportSyncStatus @ 0x1407BCCA0 (HalpTscReportSyncStatus.c)
 *     EmonCompleteInitializeProfiling @ 0x14099AB00 (EmonCompleteInitializeProfiling.c)
 *     HalpMcaInitializePcrContext @ 0x14099B17C (HalpMcaInitializePcrContext.c)
 *     EmonInitializeProfiling @ 0x14099B600 (EmonInitializeProfiling.c)
 *     HalpDpStartProcessor @ 0x1409A4DE4 (HalpDpStartProcessor.c)
 *     Amd64InitializeProfiling @ 0x1409A5AA0 (Amd64InitializeProfiling.c)
 *     HalpPreAllocateKInterrupts @ 0x140A6FA6C (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x1403785C0 (HalQueryMaximumProcessorCount.c)
 *     ZwQueryLicenseValue @ 0x1403F4D90 (ZwQueryLicenseValue.c)
 */

__int64 HalpQueryMaximumRegisteredProcessorCount()
{
  __int64 result; // rax
  __int64 v1; // rcx
  int v2; // ett
  unsigned __int32 MaximumProcessorCount; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int32 Data; // [rsp+60h] [rbp+20h] BYREF
  ULONG ResultDataSize; // [rsp+68h] [rbp+28h] BYREF
  ULONG Type; // [rsp+70h] [rbp+30h] BYREF

  ResultDataSize = 0;
  Type = 0;
  Data = 0;
  DestinationString = 0LL;
  _m_prefetchw(&dword_140CED730);
  LODWORD(result) = dword_140CED730;
  do
  {
    v1 = (unsigned int)result;
    v2 = result;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140CED730, result, result);
  }
  while ( v2 != (_DWORD)result );
  if ( !(_DWORD)result )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount(v1);
    if ( MaximumProcessorCount > 0x500 )
      MaximumProcessorCount = 1280;
    RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
    if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) >= 0
      && ResultDataSize == 4
      && Type == 4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      Data *= CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
      if ( MaximumProcessorCount > Data )
        MaximumProcessorCount = Data;
    }
    result = MaximumProcessorCount;
    _InterlockedExchange(&dword_140CED730, MaximumProcessorCount);
  }
  return result;
}
