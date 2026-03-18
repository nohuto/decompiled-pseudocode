/*
 * XREFs of PopPowerRequestDeleteEntryById @ 0x14071DCC8
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140361F40 (PopPowerRequestCleanUp.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14023F6F0 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14023F7B0 (RtlDeleteElementGenericTableAvl.c)
 */

char __fastcall PopPowerRequestDeleteEntryById(int a1)
{
  PVOID v1; // rax
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  v1 = RtlLookupElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
  if ( v1 )
    LOBYTE(v1) = RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, v1);
  return (char)v1;
}
