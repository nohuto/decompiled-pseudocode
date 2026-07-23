/*
 * XREFs of EmpAllocatePool @ 0x14037409C
 * Callers:
 *     EmpEvaluateTargetRule @ 0x140373A28 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140373C6C (EmpEvaluateNodeLink.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall EmpAllocatePool(SIZE_T NumberOfBytes, __int64 *a2, _DWORD *a3)
{
  PVOID result; // rax
  SIZE_T v4; // r9
  SIZE_T v5; // r10

  result = (PVOID)*a2;
  v4 = (NumberOfBytes + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !*a2 )
    return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x76654D45u);
  v5 = (unsigned int)*a3;
  if ( v5 < v4 )
    return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x76654D45u);
  *a2 = (__int64)result + v4;
  *a3 = v5 - v4;
  return result;
}
