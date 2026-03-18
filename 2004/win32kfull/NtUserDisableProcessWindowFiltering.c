/*
 * XREFs of NtUserDisableProcessWindowFiltering @ 0x1C011A640
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 NtUserDisableProcessWindowFiltering()
{
  __int64 v0; // r8
  __int64 v1; // rcx

  EnterCrit(0LL, 1LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 820LL) |= 0x800u;
  v1 = *(_QWORD *)(gptiCurrent + 472LL);
  if ( v1 )
    *(_QWORD *)(v1 + 224) |= 4uLL;
  UserSessionSwitchLeaveCrit(v1, gptiCurrent, v0);
  return 1LL;
}
