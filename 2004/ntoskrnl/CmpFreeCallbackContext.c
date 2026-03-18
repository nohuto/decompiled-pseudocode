/*
 * XREFs of CmpFreeCallbackContext @ 0x1404E7720
 * Callers:
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeCallbackContext(PSLIST_ENTRY ListEntry)
{
  unsigned int v1; // edx

  v1 = CmpCallBackCount * KeNumberProcessors_0;
  if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
    v1 = 64;
  if ( LOWORD(CmpCallbackContextSList.Alignment) >= v1 )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, ListEntry);
}
