/*
 * XREFs of PnpFreeDevPropertyArray @ 0x140641CA0
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x140641B7C (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataFree @ 0x140646194 (PiDqActionDataFree.c)
 *     PiSwProcessRemove @ 0x14072E868 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x14072FF5C (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x140730A54 (PiSwInterfaceFree.c)
 *     PiSwCompleteCreate @ 0x140746764 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140746C88 (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoFree @ 0x1408B1678 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x140641D00 (PnpFreeDevProperty.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
