/*
 * XREFs of IopSymlinkGetECP @ 0x1402396A0
 * Callers:
 *     IopSymlinkUpdateECP @ 0x1405FD41C (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1405FD5A4 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1405FDA18 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1405FDA74 (IopGraftName.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x14071ADC0 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
