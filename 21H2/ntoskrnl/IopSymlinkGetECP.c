/*
 * XREFs of IopSymlinkGetECP @ 0x14024013C
 * Callers:
 *     IopSymlinkUpdateECP @ 0x1406B9A14 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406B9BC0 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406B9F74 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406B9FD4 (IopGraftName.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x14072AB80 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
