/*
 * XREFs of _NtUserOpenThreadDesktop@16 @ 0x167382
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __OpenThreadDesktop@20 @ 0x154A0F (__OpenThreadDesktop@20.c)
 */

int __stdcall NtUserOpenThreadDesktop(void **a1, char a2, int a3, PVOID Object)
{
  int v4; // esi
  int v5; // eax
  struct _NT_TIB *v6; // eax
  int v8; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  v8 = 0;
  EnterCrit(0, 1);
  v5 = _OpenThreadDesktop(a1, a2, a3, (unsigned int)Object, (HANDLE *)&v8);
  if ( v5 >= 0 )
  {
    v4 = v8;
  }
  else
  {
    v6 = (struct _NT_TIB *)RtlNtStatusToDosError(v5);
    UserSetLastError(v6);
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
