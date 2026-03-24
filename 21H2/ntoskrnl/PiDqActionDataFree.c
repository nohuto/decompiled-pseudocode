/*
 * XREFs of PiDqActionDataFree @ 0x14062FB54
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x14062E710 (PiDqQueryFreeActiveData.c)
 *     PiDqQuerySerializeActionQueue @ 0x14062F5EC (PiDqQuerySerializeActionQueue.c)
 *     PiDqActionDataCreate @ 0x14062F9AC (PiDqActionDataCreate.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x140633680 (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
