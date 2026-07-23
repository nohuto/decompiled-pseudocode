/*
 * XREFs of FreeOperandValue @ 0x140927154
 * Callers:
 *     GetOperandValue @ 0x140927664 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x140928054 (LocalGetConditionForString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
