/*
 * XREFs of HalpQueryMaximumRegisteredProcessorCount @ 0x1403A1AB4
 * Callers:
 *     HalStartNextProcessor @ 0x1403A0BE0 (HalStartNextProcessor.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x1403A19F4 (HalpInterruptGetNextProcessorLocalId.c)
 *     HalpTimerSelectRoles @ 0x1403AFDEC (HalpTimerSelectRoles.c)
 *     HalEnumerateProcessors @ 0x1403B3840 (HalEnumerateProcessors.c)
 *     HalpPteReserveResources @ 0x1403BB1E0 (HalpPteReserveResources.c)
 *     HalpAllocateCR3Root @ 0x1403CB0F8 (HalpAllocateCR3Root.c)
 *     HalpTscReserveResources @ 0x1403CC658 (HalpTscReserveResources.c)
 *     HalStartDynamicProcessor @ 0x1404BA920 (HalStartDynamicProcessor.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x1404C06C0 (HalpHvInitMcaStatusMsrCache.c)
 *     EmonAllocateResources @ 0x1404D17E8 (EmonAllocateResources.c)
 *     HalpTscReportSyncStatus @ 0x1407CE6A0 (HalpTscReportSyncStatus.c)
 *     EmonCompleteInitializeProfiling @ 0x1409A23A0 (EmonCompleteInitializeProfiling.c)
 *     HalpMcaInitializePcrContext @ 0x1409A2A1C (HalpMcaInitializePcrContext.c)
 *     EmonInitializeProfiling @ 0x1409A2EA0 (EmonInitializeProfiling.c)
 *     HalpDpStartProcessor @ 0x1409ABB84 (HalpDpStartProcessor.c)
 *     Amd64InitializeProfiling @ 0x1409AC850 (Amd64InitializeProfiling.c)
 *     HalpPreAllocateKInterrupts @ 0x140A76A6C (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x14037B0B0 (HalQueryMaximumProcessorCount.c)
 *     ZwQueryLicenseValue @ 0x1403FABF0 (ZwQueryLicenseValue.c)
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
  _m_prefetchw(&dword_140CED6B0);
  LODWORD(result) = dword_140CED6B0;
  do
  {
    v1 = (unsigned int)result;
    v2 = result;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140CED6B0, result, result);
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
    _InterlockedExchange(&dword_140CED6B0, MaximumProcessorCount);
  }
  return result;
}
