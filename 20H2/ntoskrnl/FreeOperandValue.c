/*
 * XREFs of FreeOperandValue @ 0x140929824
 * Callers:
 *     GetOperandValue @ 0x140929D34 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x14092A724 (LocalGetConditionForString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
