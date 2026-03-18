/*
 * XREFs of PiDqActionDataFree @ 0x1405D3218
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1405D1B14 (PiDqQueryFreeActiveData.c)
 *     PiDqQuerySerializeActionQueue @ 0x1405D2CB0 (PiDqQuerySerializeActionQueue.c)
 *     PiDqActionDataCreate @ 0x1405D3070 (PiDqActionDataCreate.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1405D6F3C (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqActionDataFree(_QWORD *P)
{
  void *v2; // rcx
  __int64 v3; // rdx

  if ( *(_DWORD *)P )
  {
    v2 = (void *)P[2];
    if ( v2 )
      ExFreePoolWithTag(v2, 0x58706E50u);
    v3 = P[4];
    if ( v3 )
      PnpFreeDevPropertyArray(*((unsigned int *)P + 6), v3, 1483763280LL);
  }
  ExFreePoolWithTag(P, 0x58706E50u);
}
