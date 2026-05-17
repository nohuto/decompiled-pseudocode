/*
 * XREFs of _RtlQueryWnfMetaNotification@20 @ 0x4B33BE50
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryWnfStateNameInformation@20 @ 0x4B2F3FC0 (_NtQueryWnfStateNameInformation@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlQueryWnfMetaNotification(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD v6[2]; // [esp+0h] [ebp-Ch] BYREF

  v6[0] = a3;
  v6[1] = a4;
  return NtQueryWnfStateNameInformation((int)v6, a2, a5, a1, 4);
}
