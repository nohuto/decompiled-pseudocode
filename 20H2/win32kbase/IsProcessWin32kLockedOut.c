/*
 * XREFs of IsProcessWin32kLockedOut @ 0x1C00CB910
 * Callers:
 *     W32CalloutDispatch @ 0x1C00297E0 (W32CalloutDispatch.c)
 *     UserGlobalAtomTableCallout @ 0x1C006B5BC (UserGlobalAtomTableCallout.c)
 * Callees:
 *     GetProcessSyscallDisablePolicy @ 0x1C00CB940 (GetProcessSyscallDisablePolicy.c)
 */

char __fastcall IsProcessWin32kLockedOut(__int64 a1)
{
  char result; // al
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( (int)GetProcessSyscallDisablePolicy(a1, &v2) < 0 )
    return 0;
  result = 1;
  if ( (v2 & 0x100000000LL) == 0 )
    return 0;
  return result;
}
