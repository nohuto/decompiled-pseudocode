/*
 * XREFs of IopSymlinkRemoveECP @ 0x1402A4DEC
 * Callers:
 *     IopSymlinkUpdateECP @ 0x1406B9A14 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x1406B9FD4 (IopGraftName.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x14072AC10 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
