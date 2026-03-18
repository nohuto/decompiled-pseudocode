/*
 * XREFs of PnpFreeDevPropertyArray @ 0x1406A5638
 * Callers:
 *     PiDqActionDataFree @ 0x1406A1914 (PiDqActionDataFree.c)
 *     PiDqQueryEvaluateFilter @ 0x1406A56DC (PiDqQueryEvaluateFilter.c)
 *     PiSwProcessRemove @ 0x14071EAD8 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x14071FF8C (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x140720A84 (PiSwInterfaceFree.c)
 *     PiSwCompleteCreate @ 0x140753438 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140753958 (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoFree @ 0x1408AA828 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x1406A5698 (PnpFreeDevProperty.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
