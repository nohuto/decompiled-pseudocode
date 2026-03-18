/*
 * XREFs of DxgkEngGetWindowRect @ 0x1C012DDF0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetWindowRect @ 0x1C008C7FC (UserGetWindowRect.c)
 */

__int64 __fastcall DxgkEngGetWindowRect(__int64 a1, _OWORD *a2)
{
  return UserGetWindowRect(a1, a2);
}
