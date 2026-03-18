/*
 * XREFs of PopPowerRequestFindEntryById @ 0x14071D914
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140361DE0 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14023F6F0 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PopPowerRequestFindEntryById(int a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  return RtlLookupElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
}
