/*
 * XREFs of WerpFreeSid @ 0x1800DDE3C
 * Callers:
 *     SendMessageToWERService @ 0x1800DD70C (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DDB2C (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D470 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall WerpFreeSid(__int64 a1)
{
  if ( a1 )
    return ZwFreeVirtualMemory();
  else
    return 3221225485LL;
}
