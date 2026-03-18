/*
 * XREFs of PiDqActionDataFree @ 0x1406A1914
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1406A03F4 (PiDqQueryFreeActiveData.c)
 *     PiDqQuerySerializeActionQueue @ 0x1406A13AC (PiDqQuerySerializeActionQueue.c)
 *     PiDqActionDataCreate @ 0x1406A176C (PiDqActionDataCreate.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1406A5638 (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
