/*
 * XREFs of BiSetBootEntryOrder @ 0x140972AC4
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140970300 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x140971BC0 (BiExportEfiBootManager.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140972A10 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 * Callees:
 *     ZwSetBootEntryOrder @ 0x1403FD4C0 (ZwSetBootEntryOrder.c)
 *     BiLogMessage @ 0x140784D9C (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x140785C38 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140785C90 (BiAcquirePrivilege.c)
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
