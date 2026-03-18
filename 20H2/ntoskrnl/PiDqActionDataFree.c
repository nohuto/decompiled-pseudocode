/*
 * XREFs of PiDqActionDataFree @ 0x140646194
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x140645C2C (PiDqQuerySerializeActionQueue.c)
 *     PiDqActionDataCreate @ 0x140645FEC (PiDqActionDataCreate.c)
 *     PiDqQueryFreeActiveData @ 0x1406D806C (PiDqQueryFreeActiveData.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x140641CA0 (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqActionDataFree(PVOID P)
{
  void *v2; // rcx
  char *v3; // rdx

  if ( *(_DWORD *)P )
  {
    v2 = (void *)*((_QWORD *)P + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x58706E50u);
    v3 = (char *)*((_QWORD *)P + 4);
    if ( v3 )
      PnpFreeDevPropertyArray(*((_DWORD *)P + 6), v3, 0x58706E50u);
  }
  ExFreePoolWithTag(P, 0x58706E50u);
}
