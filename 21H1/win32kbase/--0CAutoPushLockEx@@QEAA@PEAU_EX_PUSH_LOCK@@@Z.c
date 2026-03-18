/*
 * XREFs of ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002EC24
 * Callers:
 *     ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C002EB64 (-OnProcessTermination@InputObjectMap@@SAXXZ.c)
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C01FC804 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 *     ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01FCD6C (-GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x1C01FCE10 (-RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z.c)
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
