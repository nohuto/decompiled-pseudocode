/*
 * XREFs of _stricmp @ 0x1403CD990
 * Callers:
 *     HalGetEnvironmentVariable @ 0x1404B6550 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x1404B66F0 (HalSetEnvironmentVariable.c)
 *     ViSetRequestedIoCallbacks @ 0x14059B1CC (ViSetRequestedIoCallbacks.c)
 *     ViSetRequestedOrderDependentAPIs @ 0x14059B248 (ViSetRequestedOrderDependentAPIs.c)
 *     ViThunkSnapSharedExportByName @ 0x1409BF33C (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x1409C48FC (VfCheckImageCompliance.c)
 *     ViSetRequestedAPIs @ 0x1409C5BBC (ViSetRequestedAPIs.c)
 *     ViThunkFindAPIContextByName @ 0x1409D5F9C (ViThunkFindAPIContextByName.c)
 *     HdlspBugCheckProcessing @ 0x1409EBD54 (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x140A49000 (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x140A517F4 (CmpSetupConfigurationTree.c)
 *     CmpAppendSection @ 0x140A5AD1C (CmpAppendSection.c)
 * Callees:
 *     __ascii_stricmp @ 0x1403CD93C (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
