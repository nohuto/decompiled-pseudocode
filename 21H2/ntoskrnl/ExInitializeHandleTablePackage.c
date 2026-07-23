/*
 * XREFs of ExInitializeHandleTablePackage @ 0x140A75084
 * Callers:
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14037AE50 (HalQueryMaximumProcessorCount.c)
 */

__int64 __fastcall ExInitializeHandleTablePackage(__int64 a1)
{
  __int64 result; // rax

  HandleTableListLock = 0LL;
  qword_140D2EB48 = (__int64)&HandleTableListHead;
  HandleTableListHead = (__int64)&HandleTableListHead;
  result = HalQueryMaximumProcessorCount(a1);
  ExpFreeListCount = result;
  return result;
}
