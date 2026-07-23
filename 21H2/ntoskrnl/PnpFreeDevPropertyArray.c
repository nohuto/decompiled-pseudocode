/*
 * XREFs of PnpFreeDevPropertyArray @ 0x140628848
 * Callers:
 *     PiDqActionDataFree @ 0x140624BD4 (PiDqActionDataFree.c)
 *     PiDqQueryEvaluateFilter @ 0x1406288EC (PiDqQueryEvaluateFilter.c)
 *     PiSwProcessRemove @ 0x140732D98 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140734150 (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x140734CE4 (PiSwInterfaceFree.c)
 *     PiSwCompleteCreate @ 0x14074D850 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DD78 (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoFree @ 0x1408AEDA8 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x1406288A8 (PnpFreeDevProperty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
