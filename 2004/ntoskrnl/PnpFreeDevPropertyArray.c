/*
 * XREFs of PnpFreeDevPropertyArray @ 0x1405D6F3C
 * Callers:
 *     PiDqActionDataFree @ 0x1405D3218 (PiDqActionDataFree.c)
 *     PiDqQueryEvaluateFilter @ 0x1405D6FE0 (PiDqQueryEvaluateFilter.c)
 *     PiSwProcessRemove @ 0x140720878 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140721E4C (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x140722944 (PiSwInterfaceFree.c)
 *     PiSwCompleteCreate @ 0x1407372D4 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1407377F8 (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoFree @ 0x1408ABB48 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x1405D6F9C (PnpFreeDevProperty.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
