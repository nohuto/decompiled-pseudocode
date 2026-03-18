/*
 * XREFs of CmpFreeCallbackContext @ 0x1403765BC
 * Callers:
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
