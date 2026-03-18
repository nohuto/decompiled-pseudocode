/*
 * XREFs of EmpAllocatePool @ 0x1402DCA80
 * Callers:
 *     EmpEvaluateTargetRule @ 0x1402DC420 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x1402DC668 (EmpEvaluateNodeLink.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EmpAllocatePool(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10

  result = *a2;
  v4 = (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !*a2 )
    return ExAllocatePool2(256LL, a1, 1986350405LL);
  v5 = (unsigned int)*a3;
  if ( v5 < v4 )
    return ExAllocatePool2(256LL, a1, 1986350405LL);
  *a2 = result + v4;
  *a3 = v5 - v4;
  return result;
}
