/*
 * XREFs of IopSymlinkFreeRelatedMountPointChain @ 0x1406EF738
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140678DB0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkUpdateECP @ 0x1406EECE8 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406EEE70 (IopSymlinkRememberJunction.c)
 *     IopSymlinkCleanupECP @ 0x1406EF720 (IopSymlinkCleanupECP.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
