/*
 * XREFs of _DxgkEngGetWindowRect@8 @ 0xAD3CE
 * Callers:
 *     <none>
 * Callees:
 *     _UserGetWindowRect@8 @ 0x253DA (_UserGetWindowRect@8.c)
 */

int __stdcall DxgkEngGetWindowRect(int a1, _DWORD *a2)
{
  return UserGetWindowRect(a1, a2);
}
