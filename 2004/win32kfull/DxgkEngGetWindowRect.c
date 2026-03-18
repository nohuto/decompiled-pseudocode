/*
 * XREFs of DxgkEngGetWindowRect @ 0x1C0114EE0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetWindowRect @ 0x1C0114EF8 (UserGetWindowRect.c)
 */

__int64 __fastcall DxgkEngGetWindowRect(__int64 a1, __int64 a2)
{
  return UserGetWindowRect(a1, a2);
}
