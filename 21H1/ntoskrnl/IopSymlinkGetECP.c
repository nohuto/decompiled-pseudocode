/*
 * XREFs of IopSymlinkGetECP @ 0x14030ADCC
 * Callers:
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1406CD9E8 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406CDB70 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406CDFE4 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406CE040 (IopGraftName.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x1406010C0 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
