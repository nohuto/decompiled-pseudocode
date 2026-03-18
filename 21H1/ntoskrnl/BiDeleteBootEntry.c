/*
 * XREFs of BiDeleteBootEntry @ 0x14096CF7C
 * Callers:
 *     BiBindEfiEntries @ 0x14096BDA0 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x14096D210 (BiExportBcdObjects.c)
 * Callees:
 *     ZwDeleteBootEntry @ 0x1403F3D30 (ZwDeleteBootEntry.c)
 *     BiLogMessage @ 0x1407705AC (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x140771448 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407714A0 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiDeleteBootEntry(unsigned int a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  BiLogMessage(2LL, L"Deleting boot entry 0x%x", a1);
  v3 = BiAcquirePrivilege(0x16u, (__int64)&v6);
  if ( v3 >= 0 )
  {
    v4 = ZwDeleteBootEntry(a1, v2);
    v3 = v4;
    if ( v4 < 0 )
      BiLogMessage(4LL, L"Failed to delete boot entry 0x%x. Status: %x", a1, (unsigned int)v4);
    BiReleasePrivilege((unsigned int *)&v6);
  }
  return (unsigned int)v3;
}
