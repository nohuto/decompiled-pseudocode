/*
 * XREFs of HalpQueryMaximumRegisteredProcessorCount @ 0x14039F5E4
 * Callers:
 *     HalStartNextProcessor @ 0x14039E710 (HalStartNextProcessor.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x14039F524 (HalpInterruptGetNextProcessorLocalId.c)
 *     HalpTimerSelectRoles @ 0x1403AD7FC (HalpTimerSelectRoles.c)
 *     HalEnumerateProcessors @ 0x1403B0ED0 (HalEnumerateProcessors.c)
 *     HalpPteReserveResources @ 0x1403B8740 (HalpPteReserveResources.c)
 *     HalpAllocateCR3Root @ 0x1403C84B8 (HalpAllocateCR3Root.c)
 *     HalpTscReserveResources @ 0x1403C9A18 (HalpTscReserveResources.c)
 *     HalStartDynamicProcessor @ 0x1404B7400 (HalStartDynamicProcessor.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x1404BD1A0 (HalpHvInitMcaStatusMsrCache.c)
 *     EmonAllocateResources @ 0x1404CE248 (EmonAllocateResources.c)
 *     HalpTscReportSyncStatus @ 0x1407BFE10 (HalpTscReportSyncStatus.c)
 *     EmonCompleteInitializeProfiling @ 0x14099C2A0 (EmonCompleteInitializeProfiling.c)
 *     HalpMcaInitializePcrContext @ 0x14099C91C (HalpMcaInitializePcrContext.c)
 *     EmonInitializeProfiling @ 0x14099CDA0 (EmonInitializeProfiling.c)
 *     HalpDpStartProcessor @ 0x1409A5C24 (HalpDpStartProcessor.c)
 *     Amd64InitializeProfiling @ 0x1409A68E0 (Amd64InitializeProfiling.c)
 *     HalpPreAllocateKInterrupts @ 0x140A70634 (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x140379380 (HalQueryMaximumProcessorCount.c)
 *     ZwQueryLicenseValue @ 0x1403F6020 (ZwQueryLicenseValue.c)
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
  _m_prefetchw(&dword_140CED5F0);
  LODWORD(result) = dword_140CED5F0;
  do
  {
    v1 = (unsigned int)result;
    v2 = result;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140CED5F0, result, result);
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
    _InterlockedExchange(&dword_140CED5F0, MaximumProcessorCount);
  }
  return result;
}
