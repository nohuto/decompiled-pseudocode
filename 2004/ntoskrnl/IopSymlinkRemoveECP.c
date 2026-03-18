/*
 * XREFs of IopSymlinkRemoveECP @ 0x1402922CC
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140678DB0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkUpdateECP @ 0x1406EECE8 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x1406EF340 (IopGraftName.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x140679230 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
