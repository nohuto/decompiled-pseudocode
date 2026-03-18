/*
 * XREFs of FreeOperandValue @ 0x1409239FC
 * Callers:
 *     GetOperandValue @ 0x140923F0C (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1409248FC (LocalGetConditionForString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall FreeOperandValue(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    v2 = (void *)P[1];
    if ( v2 )
    {
      if ( !*(_BYTE *)P )
        ExFreePoolWithTag(v2, 0);
    }
    ExFreePoolWithTag(P, 0);
  }
}
