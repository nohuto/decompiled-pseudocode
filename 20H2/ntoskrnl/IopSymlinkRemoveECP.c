/*
 * XREFs of IopSymlinkRemoveECP @ 0x14020C6F4
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140600990 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkUpdateECP @ 0x1406C6884 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x1406C6F40 (IopGraftName.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x140600BB0 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
