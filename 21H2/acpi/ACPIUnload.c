/*
 * XREFs of ACPIUnload @ 0x1C0052F10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     wil_UninitializeFeatureStaging @ 0x1C008F2F0 (wil_UninitializeFeatureStaging.c)
 *     WppCleanupKm @ 0x1C00AC97C (WppCleanupKm.c)
 */

__int64 __fastcall ACPIUnload(__int64 a1)
{
  wil_UninitializeFeatureStaging();
  KeSetEvent(&ACPITerminateEvent, 0, 0);
  KeWaitForSingleObject(ACPIThread, Executive, 0, 0, 0LL);
  ObfDereferenceObject(ACPIThread);
  IoDeleteSymbolicLink(&ACPISymbolicLinkName);
  ExDeleteNPagedLookasideList(&BuildRequestLookAsideList);
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
      (__int64)&WPP_6862a416d8603aba0a2e2af82566a863_Traceguids);
  return WppCleanupKm(a1);
}
