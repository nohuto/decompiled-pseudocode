/*
 * XREFs of SmpDeallocSavedRegistryEntry @ 0x1400092F0
 * Callers:
 *     SmpFreeSavedRegistryEntry @ 0x140005A00 (SmpFreeSavedRegistryEntry.c)
 *     SmpCleanupStalePageFiles @ 0x1400074EC (SmpCleanupStalePageFiles.c)
 *     SmpCreatePagingFiles @ 0x14000768C (SmpCreatePagingFiles.c)
 *     SmpInitializeKnownDlls @ 0x140007950 (SmpInitializeKnownDlls.c)
 *     SmpRecordNewPageFile @ 0x1400085D8 (SmpRecordNewPageFile.c)
 *     SmpBuildSubSystemLists @ 0x140008730 (SmpBuildSubSystemLists.c)
 *     SmpSaveRegistryValue_U @ 0x140008F10 (SmpSaveRegistryValue_U.c)
 *     SmpInitializeDosDevices @ 0x140009150 (SmpInitializeDosDevices.c)
 *     SmpProcessFileRenames @ 0x140009348 (SmpProcessFileRenames.c)
 *     SmpConfigureSharedSessionData @ 0x14000A7D0 (SmpConfigureSharedSessionData.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SmpDeallocSavedRegistryEntry(struct _UNICODE_STRING *BaseAddress)
{
  void *v2; // r8
  BOOLEAN result; // al

  if ( BaseAddress )
  {
    RtlFreeUnicodeString(BaseAddress + 2);
    v2 = *(void **)&BaseAddress[3].Length;
    if ( v2 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v2);
    return RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
  }
  return result;
}
