/*
 * XREFs of _NtUserOpenDesktop@12 @ 0x7DCC2
 * Callers:
 *     <none>
 * Callees:
 *     __OpenDesktop@20 @ 0x7DD0E (__OpenDesktop@20.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserOpenDesktop(int a1, int a2, PVOID Object)
{
  int v3; // esi
  NTSTATUS v4; // eax
  ULONG v6; // eax
  int v7; // [esp+4h] [ebp-4h] BYREF

  v3 = 0;
  v7 = 0;
  EnterCrit(0, 1);
  v4 = _OpenDesktop(a2, Object, (int)&v7);
  if ( v4 < 0 )
  {
    v6 = RtlNtStatusToDosError(v4);
    UserSetLastError(v6);
  }
  else
  {
    v3 = v7;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
