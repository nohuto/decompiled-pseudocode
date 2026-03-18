/*
 * XREFs of HalpQueryMaximumRegisteredProcessorCount @ 0x1403B3BA0
 * Callers:
 *     HalStartNextProcessor @ 0x1403B2F30 (HalStartNextProcessor.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x1403B3AE0 (HalpInterruptGetNextProcessorLocalId.c)
 *     HalpTscReserveResources @ 0x1403BAB70 (HalpTscReserveResources.c)
 *     HalpTimerSelectRoles @ 0x1403BC388 (HalpTimerSelectRoles.c)
 *     HalEnumerateProcessors @ 0x1403DD110 (HalEnumerateProcessors.c)
 *     HalStartDynamicProcessor @ 0x140508D60 (HalStartDynamicProcessor.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x14050E490 (HalpHvInitMcaStatusMsrCache.c)
 *     EmonAllocateResources @ 0x14051FFF8 (EmonAllocateResources.c)
 *     HalpTscReportSyncStatus @ 0x140822FF8 (HalpTscReportSyncStatus.c)
 *     EmonInitializeProfiling @ 0x140A557A0 (EmonInitializeProfiling.c)
 *     HalpMcaInitializePcrContext @ 0x140A5B2F8 (HalpMcaInitializePcrContext.c)
 *     EmonCompleteInitializeProfiling @ 0x140A5B400 (EmonCompleteInitializeProfiling.c)
 *     HalpDpStartProcessor @ 0x140A629D4 (HalpDpStartProcessor.c)
 *     Amd64InitializeProfiling @ 0x140A63680 (Amd64InitializeProfiling.c)
 *     HalpPreAllocateKInterrupts @ 0x140AF866C (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 */

__int64 HalpQueryMaximumRegisteredProcessorCount()
{
  __int64 result; // rax
  int v1; // ett
  unsigned __int32 MaximumProcessorCount; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int32 v5; // [rsp+60h] [rbp+20h] BYREF
  int v6; // [rsp+68h] [rbp+28h] BYREF
  int v7; // [rsp+70h] [rbp+30h] BYREF

  v6 = 0;
  v7 = 0;
  v5 = 0;
  DestinationString = 0LL;
  _m_prefetchw(&dword_140CF75C4);
  LODWORD(result) = dword_140CF75C4;
  do
  {
    v1 = result;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140CF75C4, result, result);
  }
  while ( v1 != (_DWORD)result );
  if ( !(_DWORD)result )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    if ( MaximumProcessorCount > 0x800 )
      MaximumProcessorCount = 2048;
    RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
    if ( (int)ZwQueryLicenseValue(&DestinationString, &v7, &v5, 4LL, &v6) >= 0 && v6 == 4 && v7 == 4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v5 *= CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
      if ( MaximumProcessorCount > v5 )
        MaximumProcessorCount = v5;
    }
    result = MaximumProcessorCount;
    _InterlockedExchange(&dword_140CF75C4, MaximumProcessorCount);
  }
  return result;
}
