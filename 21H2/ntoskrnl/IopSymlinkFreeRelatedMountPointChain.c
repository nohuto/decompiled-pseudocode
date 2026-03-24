/*
 * XREFs of IopSymlinkFreeRelatedMountPointChain @ 0x14069EF38
 * Callers:
 *     IopSymlinkUpdateECP @ 0x14069E24C (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x14069E3D4 (IopSymlinkRememberJunction.c)
 *     IopSymlinkCleanupECP @ 0x14069EF20 (IopSymlinkCleanupECP.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1407035D0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
