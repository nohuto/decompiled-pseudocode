/*
 * XREFs of IopSymlinkGetECP @ 0x1403476CC
 * Callers:
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1406EECE8 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406EEE70 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406EF2E4 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406EF340 (IopGraftName.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x1406791A0 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
