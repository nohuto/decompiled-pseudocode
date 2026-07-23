/*
 * XREFs of IopSymlinkRemoveECP @ 0x14035FB2C
 * Callers:
 *     IopSymlinkUpdateECP @ 0x1405FD41C (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x1405FDA74 (IopGraftName.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x14071A9B0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x14071AE50 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
