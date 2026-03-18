/*
 * XREFs of BiSetBootEntryOrder @ 0x14096E23C
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x14096BA78 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x14096D338 (BiExportEfiBootManager.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x14096E188 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 * Callees:
 *     ZwSetBootEntryOrder @ 0x1403F5410 (ZwSetBootEntryOrder.c)
 *     BiLogMessage @ 0x1407705AC (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x140771448 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407714A0 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiSetBootEntryOrder(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = ZwSetBootEntryOrder(a1, a2);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to set boot entry order. Status: %x", (unsigned int)v5);
    BiReleasePrivilege((unsigned int *)&v7);
  }
  return (unsigned int)v4;
}
