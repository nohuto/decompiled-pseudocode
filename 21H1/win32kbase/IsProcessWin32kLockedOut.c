/*
 * XREFs of IsProcessWin32kLockedOut @ 0x1C00CBE50
 * Callers:
 *     UserGlobalAtomTableCallout @ 0x1C002941C (UserGlobalAtomTableCallout.c)
 *     W32CalloutDispatch @ 0x1C005D9C0 (W32CalloutDispatch.c)
 * Callees:
 *     GetProcessSyscallDisablePolicy @ 0x1C00CBE80 (GetProcessSyscallDisablePolicy.c)
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
