/*
 * XREFs of _stricmp @ 0x1403CE7D0
 * Callers:
 *     HalGetEnvironmentVariable @ 0x1404B6C30 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x1404B6DD0 (HalSetEnvironmentVariable.c)
 *     ViSetRequestedIoCallbacks @ 0x14059B8BC (ViSetRequestedIoCallbacks.c)
 *     ViSetRequestedOrderDependentAPIs @ 0x14059B938 (ViSetRequestedOrderDependentAPIs.c)
 *     ViThunkSnapSharedExportByName @ 0x1409BF34C (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x1409C490C (VfCheckImageCompliance.c)
 *     ViSetRequestedAPIs @ 0x1409C5BCC (ViSetRequestedAPIs.c)
 *     ViThunkFindAPIContextByName @ 0x1409D5FFC (ViThunkFindAPIContextByName.c)
 *     HdlspBugCheckProcessing @ 0x1409EBD54 (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x140A41F90 (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x140A574F4 (CmpSetupConfigurationTree.c)
 *     CmpAppendSection @ 0x140A59DB8 (CmpAppendSection.c)
 * Callees:
 *     __ascii_stricmp @ 0x1403CE77C (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
