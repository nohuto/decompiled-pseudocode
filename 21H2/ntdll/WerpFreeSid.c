/*
 * XREFs of WerpFreeSid @ 0x1800DDBEC
 * Callers:
 *     SendMessageToWERService @ 0x1800DD4BC (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DD8DC (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009DA00 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall WerpFreeSid(__int64 a1)
{
  if ( a1 )
    return ZwFreeVirtualMemory();
  else
    return 3221225485LL;
}
