/*
 * XREFs of ?ndisInitializeStackTraces@@YAXXZ @ 0x1C010B8CC
 * Callers:
 *     DriverEntry @ 0x1C01438F0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void ndisInitializeStackTraces(void)
{
  PRTL_DYNAMIC_HASH_TABLE HashTable; // [rsp+30h] [rbp+8h] BYREF

  HashTable = (PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.Dpc.DpcData;
  KeInitializeSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Dpc.SystemArgument1);
  BYTE3(WPP_MAIN_CB.Dpc.SystemArgument2) = 4;
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = 0;
  *(_WORD *)((char *)&WPP_MAIN_CB.Dpc.SystemArgument2 + 1) = 0;
  LOBYTE(WPP_MAIN_CB.Dpc.SystemArgument2) = RtlCreateHashTable(&HashTable, 0, 0);
}
