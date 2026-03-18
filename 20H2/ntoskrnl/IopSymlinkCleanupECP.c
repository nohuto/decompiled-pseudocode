/*
 * XREFs of IopSymlinkCleanupECP @ 0x1406C6A10
 * Callers:
 *     <none>
 * Callees:
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1406C6A28 (IopSymlinkFreeRelatedMountPointChain.c)
 */

void __fastcall IopSymlinkCleanupECP(PVOID EcpContext, LPCGUID EcpType)
{
  IopSymlinkFreeRelatedMountPointChain(EcpContext);
}
