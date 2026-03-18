/*
 * XREFs of ?HashTableAllocator@@YAPEAX_KPEAX@Z @ 0x1C00BF9EC
 * Callers:
 *     ?AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0091DD4 (-AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?CreateActivationGroupWithId@CActivationObjectManager@@AEAAJAEBUACTIVATION_GROUP_ID@@@Z @ 0x1C00BD38C (-CreateActivationGroupWithId@CActivationObjectManager@@AEAAJAEBUACTIVATION_GROUP_ID@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 */

__int64 __fastcall HashTableAllocator(__int64 a1, void *a2)
{
  return Win32AllocPool(a1, 0x76744143u);
}
