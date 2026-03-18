/*
 * XREFs of PopPowerRequestFindEntryById @ 0x14064D488
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140276C34 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140202510 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PopPowerRequestFindEntryById(int a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  return RtlLookupElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
}
