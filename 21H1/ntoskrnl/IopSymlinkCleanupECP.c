/*
 * XREFs of IopSymlinkCleanupECP @ 0x1406CE420
 * Callers:
 *     <none>
 * Callees:
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1406CE438 (IopSymlinkFreeRelatedMountPointChain.c)
 */

void __fastcall IopSymlinkCleanupECP(PVOID EcpContext, LPCGUID EcpType)
{
  IopSymlinkFreeRelatedMountPointChain(EcpContext);
}
