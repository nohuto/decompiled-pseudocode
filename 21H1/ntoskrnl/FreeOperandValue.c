/*
 * XREFs of FreeOperandValue @ 0x14092274C
 * Callers:
 *     GetOperandValue @ 0x140922C5C (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x14092364C (LocalGetConditionForString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
