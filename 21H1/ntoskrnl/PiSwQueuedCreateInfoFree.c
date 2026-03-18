/*
 * XREFs of PiSwQueuedCreateInfoFree @ 0x1408AA828
 * Callers:
 *     PiSwProcessRemove @ 0x14071EAD8 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x14071FF8C (PiSwDeviceFree.c)
 *     PiSwCloseDevice @ 0x1407209F0 (PiSwCloseDevice.c)
 *     PiSwIrpStartCreateWorker @ 0x140753958 (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1408AA714 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1406A5638 (PnpFreeDevPropertyArray.c)
 *     PiSwPnPInfoFree @ 0x14072004C (PiSwPnPInfoFree.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
