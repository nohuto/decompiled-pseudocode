/*
 * XREFs of PiSwInterfaceFree @ 0x140734B24
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14074D118 (PiSwIrpInterfaceRegister.c)
 *     PiSwInterfaceCreate @ 0x14074D504 (PiSwInterfaceCreate.c)
 *     PiSwFreeInterfaceList @ 0x14074D944 (PiSwFreeInterfaceList.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x140633680 (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
