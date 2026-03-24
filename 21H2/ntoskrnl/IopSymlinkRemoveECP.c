/*
 * XREFs of IopSymlinkRemoveECP @ 0x140354DDC
 * Callers:
 *     IopSymlinkUpdateECP @ 0x14069E24C (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x14069E8A4 (IopGraftName.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1407035D0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x140703A70 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
