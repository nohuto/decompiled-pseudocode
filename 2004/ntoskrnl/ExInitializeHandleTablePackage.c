/*
 * XREFs of ExInitializeHandleTablePackage @ 0x140A70E84
 * Callers:
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x140379380 (HalQueryMaximumProcessorCount.c)
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
