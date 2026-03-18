/*
 * XREFs of EmpFreePool @ 0x140372434
 * Callers:
 *     EmpEvaluateTargetRule @ 0x140371DF4 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140372038 (EmpEvaluateNodeLink.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall EmpFreePool(void *a1, unsigned __int64 a2, unsigned int a3)
{
  if ( !a2 || (unsigned __int64)a1 < a2 || (unsigned __int64)a1 >= a2 + a3 )
    ExFreePoolWithTag(a1, 0x76654D45u);
}
