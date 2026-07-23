/*
 * XREFs of BiDeleteBootEntry @ 0x14096E31C
 * Callers:
 *     BiBindEfiEntries @ 0x14096D140 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x14096E5B0 (BiExportBcdObjects.c)
 * Callees:
 *     ZwDeleteBootEntry @ 0x1403F4FC0 (ZwDeleteBootEntry.c)
 *     BiLogMessage @ 0x1407729BC (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x140773858 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407738B0 (BiAcquirePrivilege.c)
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
