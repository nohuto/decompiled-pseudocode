/*
 * XREFs of IopSymlinkFreeRelatedMountPointChain @ 0x1406C6A28
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140600990 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkUpdateECP @ 0x1406C6884 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCleanupECP @ 0x1406C6A10 (IopSymlinkCleanupECP.c)
 *     IopSymlinkRememberJunction @ 0x1406C6A70 (IopSymlinkRememberJunction.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall IopSymlinkFreeRelatedMountPointChain(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)v2[1];
      ExFreePoolWithTag(v2, 0x69536F49u);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
