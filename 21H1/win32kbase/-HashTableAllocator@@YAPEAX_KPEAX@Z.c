/*
 * XREFs of ?HashTableAllocator@@YAPEAX_KPEAX@Z @ 0x1C0051BC0
 * Callers:
 *     ?AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C00183B4 (-AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?CreateActivationGroupWithId@CActivationObjectManager@@AEAAJAEBUACTIVATION_GROUP_ID@@@Z @ 0x1C004F24C (-CreateActivationGroupWithId@CActivationObjectManager@@AEAAJAEBUACTIVATION_GROUP_ID@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 */

__int64 __fastcall HashTableAllocator(__int64 a1, void *a2)
{
  return Win32AllocPool(a1, 1987330371LL);
}
