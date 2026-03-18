/*
 * XREFs of PiSwInterfaceFree @ 0x140722944
 * Callers:
 *     PiSwInterfaceCreate @ 0x140737148 (PiSwInterfaceCreate.c)
 *     PiSwFreeInterfaceList @ 0x140737588 (PiSwFreeInterfaceList.c)
 *     PiSwIrpInterfaceRegister @ 0x140737A8C (PiSwIrpInterfaceRegister.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1405D6F3C (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwInterfaceFree(PVOID P)
{
  void *v2; // rcx
  char *v3; // rdx

  v2 = (void *)*((_QWORD *)P + 2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x57706E50u);
  v3 = (char *)*((_QWORD *)P + 3);
  if ( v3 )
    PnpFreeDevPropertyArray(*((_DWORD *)P + 8), v3, 0x57706E50u);
  ExFreePoolWithTag(P, 0x57706E50u);
}
