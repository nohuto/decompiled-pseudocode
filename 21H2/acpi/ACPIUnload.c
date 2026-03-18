/*
 * XREFs of ACPIUnload @ 0x1C00524C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     wil_UninitializeFeatureStaging @ 0x1C008E354 (wil_UninitializeFeatureStaging.c)
 *     WppCleanupKm @ 0x1C00AB678 (WppCleanupKm.c)
 */

__int64 __fastcall ACPIUnload(__int64 a1)
{
  wil_UninitializeFeatureStaging();
  KeSetEvent(&ACPITerminateEvent, 0, 0);
  KeWaitForSingleObject(ACPIThread, Executive, 0, 0, 0LL);
  ObfDereferenceObject(ACPIThread);
  IoDeleteSymbolicLink(&ACPISymbolicLinkName);
  ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&BuildRequestLookAsideList);
  ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&RequestLookAsideList);
  ExDeleteNPagedLookasideList(&DeviceExtensionLookAsideList);
  ExDeleteNPagedLookasideList(&ObjectDataLookAsideList);
  ExDeleteNPagedLookasideList(&XswContextLookAsideList);
  ExDeleteNPagedLookasideList(&WakeInterruptLookAsideList);
  ExDeleteNPagedLookasideList(&NotificationContextLookAsideList);
  if ( AcpiRegistryPath.Buffer )
    ExFreePoolWithTag(AcpiRegistryPath.Buffer, 0);
  if ( *((_QWORD *)&AcpiProcessorString + 1) )
    ExFreePoolWithTag(*((PVOID *)&AcpiProcessorString + 1), 0);
  if ( E820Info )
    ExFreePoolWithTag((PVOID)E820Info, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x12u,
      (__int64)&WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids);
  return WppCleanupKm(a1);
}
