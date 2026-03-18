/*
 * XREFs of ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00632BC
 * Callers:
 *     ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C00631FC (-OnProcessTermination@InputObjectMap@@SAXXZ.c)
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C01F54A4 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 *     ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01F5A0C (-GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x1C01F5AB0 (-RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z.c)
 * Callees:
 *     <none>
 */

CAutoPushLockEx *__fastcall CAutoPushLockEx::CAutoPushLockEx(CAutoPushLockEx *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = &InputObjectMap::s_hashTableLock;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  return this;
}
