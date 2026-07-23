/*
 * XREFs of BiDeleteBootEntry @ 0x1409719E4
 * Callers:
 *     BiBindEfiEntries @ 0x140970808 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x140971C78 (BiExportBcdObjects.c)
 * Callees:
 *     ZwDeleteBootEntry @ 0x1403FBFA0 (ZwDeleteBootEntry.c)
 *     BiLogMessage @ 0x140784F5C (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x140785DF8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140785E50 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiDeleteBootEntry(ULONG Id)
{
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  BiLogMessage(2LL, L"Deleting boot entry 0x%x", Id);
  v2 = BiAcquirePrivilege(0x16u, (__int64)&v5);
  if ( v2 >= 0 )
  {
    v3 = ZwDeleteBootEntry(Id);
    v2 = v3;
    if ( v3 < 0 )
      BiLogMessage(4LL, L"Failed to delete boot entry 0x%x. Status: %x", Id, (unsigned int)v3);
    BiReleasePrivilege((unsigned int *)&v5);
  }
  return (unsigned int)v2;
}
