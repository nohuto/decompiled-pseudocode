/*
 * XREFs of IopSymlinkGetECP @ 0x14020B134
 * Callers:
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1406C6884 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406C6A70 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x1406C6EE4 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406C6F40 (IopGraftName.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x140600B20 (FsRtlFindExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkGetECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlFindExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
