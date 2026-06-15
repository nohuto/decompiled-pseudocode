/*
 * XREFs of ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x140062760
 * Callers:
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x140060D20 (-GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14006117C (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?ValidateDescriptorInSharedMemory@SpatialBlock@@QEAAJXZ @ 0x140062850 (-ValidateDescriptorInSharedMemory@SpatialBlock@@QEAAJXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ValidateBlockDescriptors(SpatialBlock **this)
{
  unsigned int v2; // ebx
  void (__fastcall **v3)(char *, __int64, int *); // r8
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = SpatialBlock::ValidateDescriptorInSharedMemory(this[162]);
  if ( v2 == -2005139387 )
  {
    v3 = (void (__fastcall **)(char *, __int64, int *))this[142];
    v5 = 1;
    (*v3)((char *)this + 1136, 1LL, &v5);
  }
  return v2;
}
