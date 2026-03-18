/*
 * XREFs of NtUserEmptyClipboard @ 0x1C00566C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEmptyClipboard @ 0x1C0056AE0 (xxxEmptyClipboard.c)
 */

__int64 NtUserEmptyClipboard()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  EnterCrit(0LL, 1LL);
  v0 = (int)xxxEmptyClipboard(0LL);
  UserSessionSwitchLeaveCrit(v2, v1, v3);
  return v0;
}
