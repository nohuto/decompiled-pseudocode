/*
 * XREFs of EmpFreePool @ 0x140374384
 * Callers:
 *     EmpEvaluateTargetRule @ 0x140373D44 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140373F88 (EmpEvaluateNodeLink.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall EmpFreePool(void *a1, unsigned __int64 a2, unsigned int a3)
{
  if ( !a2 || (unsigned __int64)a1 < a2 || (unsigned __int64)a1 >= a2 + a3 )
    ExFreePoolWithTag(a1, 0x76654D45u);
}
