/*
 * XREFs of PiSwPnPInfoFree @ 0x140734210
 * Callers:
 *     PiSwProcessRemove @ 0x140732D98 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140734150 (PiSwDeviceFree.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DD78 (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoFree @ 0x1408AEDA8 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPnPInfoFree(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x57706E50u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v4 = *(void **)(a1 + 16);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x57706E50u);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v5 = *(void **)(a1 + 24);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x57706E50u);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v6 = *(void **)(a1 + 32);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x57706E50u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
