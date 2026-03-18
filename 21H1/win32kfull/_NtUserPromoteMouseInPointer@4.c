/*
 * XREFs of _NtUserPromoteMouseInPointer@4 @ 0x167C3F
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsMiPEnabledForThread@4 @ 0x9AF9E (_IsMiPEnabledForThread@4.c)
 */

int __stdcall NtUserPromoteMouseInPointer(int a1)
{
  int v1; // esi
  int v2; // ecx
  _DWORD *v3; // eax

  v1 = 0;
  EnterCrit(0, 1);
  if ( IsMiPEnabledForThread(_gptiCurrent) && (v3 = *(_DWORD **)(v2 + 720)) != 0 )
  {
    *v3 |= 2u;
    v1 = 1;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
