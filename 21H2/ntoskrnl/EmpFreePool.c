/*
 * XREFs of EmpFreePool @ 0x140374068
 * Callers:
 *     EmpEvaluateTargetRule @ 0x140373A28 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140373C6C (EmpEvaluateNodeLink.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall EmpFreePool(void *a1, unsigned __int64 a2, unsigned int a3)
{
  if ( !a2 || (unsigned __int64)a1 < a2 || (unsigned __int64)a1 >= a2 + a3 )
    ExFreePoolWithTag(a1, 0x76654D45u);
}
