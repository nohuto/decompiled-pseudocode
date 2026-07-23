/*
 * XREFs of BiAddBootEntry @ 0x140970318
 * Callers:
 *     BiCreateEfiEntry @ 0x1409714B0 (BiCreateEfiEntry.c)
 * Callees:
 *     ZwAddBootEntry @ 0x1403FB2C0 (ZwAddBootEntry.c)
 *     BiLogMessage @ 0x140784F5C (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x140785DF8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140785E50 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = ZwAddBootEntry(BootEntry, Id);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to add boot entry. Status: %x", (unsigned int)v5);
    BiReleasePrivilege((unsigned int *)&v7);
  }
  return (unsigned int)v4;
}
