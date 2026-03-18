/*
 * XREFs of PiSwQueuedCreateInfoFree @ 0x140953AB8
 * Callers:
 *     PiSwProcessRemove @ 0x1406619F8 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140661C4C (PiSwDeviceFree.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 *     PiSwCloseDevice @ 0x14095341C (PiSwCloseDevice.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1409539A8 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     PiSwPnPInfoFree @ 0x140661CD8 (PiSwPnPInfoFree.c)
 *     PnpFreeDevPropertyArray @ 0x140779620 (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwQueuedCreateInfoFree(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  char *v4; // rdx

  v2 = *(void **)P;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_QWORD *)P = 0LL;
  }
  PiSwPnPInfoFree((__int64)P + 8);
  v3 = (void *)*((_QWORD *)P + 7);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x57706E50u);
    *((_QWORD *)P + 7) = 0LL;
  }
  v4 = (char *)*((_QWORD *)P + 9);
  if ( v4 )
    PnpFreeDevPropertyArray(*((_DWORD *)P + 20), v4, 0x57706E50u);
  ExFreePoolWithTag(P, 0x57706E50u);
}
