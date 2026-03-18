/*
 * XREFs of ?HashTableAllocator@@YAPEAX_KPEAX@Z @ 0x1C005F6D0
 * Callers:
 *     ?AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0028134 (-AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?CreateActivationGroupWithId@CActivationObjectManager@@AEAAJAEBUACTIVATION_GROUP_ID@@@Z @ 0x1C005CDBC (-CreateActivationGroupWithId@CActivationObjectManager@@AEAAJAEBUACTIVATION_GROUP_ID@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 */

__int64 __fastcall HashTableAllocator(__int64 a1, void *a2)
{
  return Win32AllocPool(a1, 1987330371LL);
}
