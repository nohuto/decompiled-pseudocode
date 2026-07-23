/*
 * XREFs of BiModifyBootEntry @ 0x1409729D0
 * Callers:
 *     BiUpdateEfiEntry @ 0x14097334C (BiUpdateEfiEntry.c)
 * Callees:
 *     ZwModifyBootEntry @ 0x1403FC840 (ZwModifyBootEntry.c)
 *     BiLogMessage @ 0x140784F5C (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x140785DF8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140785E50 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = BiAcquirePrivilege(0x16u, (__int64)&v5);
  if ( v2 >= 0 )
  {
    v3 = ZwModifyBootEntry(BootEntry);
    v2 = v3;
    if ( v3 < 0 )
      BiLogMessage(4LL, L"Failed to modify boot entry 0x%x. Status: %x", BootEntry->Id, (unsigned int)v3);
    BiReleasePrivilege((unsigned int *)&v5);
  }
  return (unsigned int)v2;
}
