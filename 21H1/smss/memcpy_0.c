/*
 * XREFs of memcpy_0 @ 0x14000EE07
 * Callers:
 *     SmpParseToken @ 0x140004AF0 (SmpParseToken.c)
 *     SmpSaveRegistryValue_U @ 0x140008F10 (SmpSaveRegistryValue_U.c)
 *     SmpConfigureSharedSessionData @ 0x14000A7D0 (SmpConfigureSharedSessionData.c)
 *     SmpCopyListToSharedSection @ 0x14000ACD8 (SmpCopyListToSharedSection.c)
 *     SmpConfigureEnvironment @ 0x14000DEC0 (SmpConfigureEnvironment.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x140011828 (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpConfigureS0InitCmd @ 0x140014160 (SmpConfigureS0InitCmd.c)
 *     SmpRenameTargetFile @ 0x140014B3C (SmpRenameTargetFile.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t MaxCount)
{
  return memcpy(a1, Src, MaxCount);
}
