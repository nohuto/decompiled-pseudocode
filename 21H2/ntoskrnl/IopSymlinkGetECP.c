/*
 * XREFs of IopSymlinkGetECP @ 0x1402BB490
 * Callers:
 *     IopSymlinkUpdateECP @ 0x14069E24C (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x14069E3D4 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x14069E848 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x14069E8A4 (IopGraftName.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x1407039E0 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
