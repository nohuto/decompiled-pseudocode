/*
 * XREFs of _stricmp @ 0x1403D1460
 * Callers:
 *     HalGetEnvironmentVariable @ 0x1404BA150 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x1404BA2F0 (HalSetEnvironmentVariable.c)
 *     ViSetRequestedIoCallbacks @ 0x14059F35C (ViSetRequestedIoCallbacks.c)
 *     ViSetRequestedOrderDependentAPIs @ 0x14059F3D8 (ViSetRequestedOrderDependentAPIs.c)
 *     ViThunkSnapSharedExportByName @ 0x1409C535C (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x1409CA92C (VfCheckImageCompliance.c)
 *     ViSetRequestedAPIs @ 0x1409CBBEC (ViSetRequestedAPIs.c)
 *     ViThunkFindAPIContextByName @ 0x1409DC01C (ViThunkFindAPIContextByName.c)
 *     HdlspBugCheckProcessing @ 0x1409F1D54 (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x140A48230 (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x140A57B74 (CmpSetupConfigurationTree.c)
 *     CmpAppendSection @ 0x140A6111C (CmpAppendSection.c)
 * Callees:
 *     __ascii_stricmp @ 0x1403D140C (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
