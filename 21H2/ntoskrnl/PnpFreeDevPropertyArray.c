/*
 * XREFs of PnpFreeDevPropertyArray @ 0x140633680
 * Callers:
 *     PiDqActionDataFree @ 0x14062FB54 (PiDqActionDataFree.c)
 *     PiDqQueryEvaluateFilter @ 0x140633724 (PiDqQueryEvaluateFilter.c)
 *     PiSwProcessRemove @ 0x140732BD8 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140733F90 (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x140734B24 (PiSwInterfaceFree.c)
 *     PiSwCompleteCreate @ 0x14074D690 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DBB8 (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoFree @ 0x1408AEC48 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x1406336E0 (PnpFreeDevProperty.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDevPropertyArray(unsigned int a1, char *a2, ULONG a3)
{
  char *v5; // rbx
  __int64 v6; // rbp

  if ( a1 )
  {
    v5 = a2;
    v6 = a1;
    do
    {
      PnpFreeDevProperty(v5, a3);
      v5 += 48;
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(a2, a3);
}
