/*
 * XREFs of BiAddBootEntry @ 0x14096CC50
 * Callers:
 *     BiCreateEfiEntry @ 0x14096DDE8 (BiCreateEfiEntry.c)
 * Callees:
 *     ZwAddBootEntry @ 0x1403F4300 (ZwAddBootEntry.c)
 *     BiLogMessage @ 0x1407729BC (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x140773858 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407738B0 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiAddBootEntry(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = ZwAddBootEntry(a1, a2);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to add boot entry. Status: %x", (unsigned int)v5);
    BiReleasePrivilege((unsigned int *)&v7);
  }
  return (unsigned int)v4;
}
