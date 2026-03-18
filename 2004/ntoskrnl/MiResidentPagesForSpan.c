/*
 * XREFs of MiResidentPagesForSpan @ 0x140704084
 * Callers:
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MiRemoveVadCharges @ 0x1405F8D70 (MiRemoveVadCharges.c)
 *     MiInsertVadCharges @ 0x1405FE050 (MiInsertVadCharges.c)
 *     MiComputeAweCharges @ 0x1408D2300 (MiComputeAweCharges.c)
 * Callees:
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 */

__int64 __fastcall MiResidentPagesForSpan(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r11
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 v8; // r11

  v3 = 0LL;
  v4 = a1;
  if ( a3 >= 0 )
  {
    do
    {
      MiGetPteAddress(v4);
      MiGetPteAddress(v5);
    }
    while ( v6 != 1 );
  }
  if ( a3 < 3 )
  {
    v7 = (unsigned int)(3 - a3);
    do
    {
      MiGetPteAddress(v4);
      MiGetPteAddress(v8);
      --v7;
    }
    while ( v7 );
  }
  return v3;
}
