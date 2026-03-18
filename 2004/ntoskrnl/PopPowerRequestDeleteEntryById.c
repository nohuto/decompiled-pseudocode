/*
 * XREFs of PopPowerRequestDeleteEntryById @ 0x14064D42C
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1402767F4 (PopPowerRequestCleanUp.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140201B40 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x140202510 (RtlLookupElementGenericTableAvl.c)
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
