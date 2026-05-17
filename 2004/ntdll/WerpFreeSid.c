/*
 * XREFs of WerpFreeSid @ 0x1800DDA9C
 * Callers:
 *     SendMessageToWERService @ 0x1800DD36C (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DD78C (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D1D0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall WerpFreeSid(__int64 a1)
{
  if ( a1 )
    return ZwFreeVirtualMemory();
  else
    return 3221225485LL;
}
