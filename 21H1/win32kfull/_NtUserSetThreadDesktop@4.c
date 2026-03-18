/*
 * XREFs of _NtUserSetThreadDesktop@4 @ 0x7D826
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSetThreadDesktop@8 @ 0x7D894 (_xxxSetThreadDesktop@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

BOOL __stdcall NtUserSetThreadDesktop(int a1)
{
  BOOL v1; // ebx
  NTSTATUS v2; // esi
  ULONG v4; // eax
  PVOID Object; // [esp+8h] [ebp-4h] BYREF

  v1 = 0;
  Object = 0;
  EnterCrit(0, 1);
  v2 = ValidateHdesk(a1, 1, 0, &Object);
  if ( v2 < 0 )
  {
    if ( !a1 && PsGetCurrentProcess() == _gpepCSRSS )
    {
      v2 = xxxSetThreadDesktop(0, 0);
      v1 = v2 >= 0;
    }
  }
  else
  {
    v2 = xxxSetThreadDesktop(a1, Object);
    LOBYTE(v1) = v2 >= 0;
    ObfDereferenceObject(Object);
  }
  if ( v2 < 0 )
  {
    v4 = RtlNtStatusToDosError(v2);
    UserSetLastError(v4);
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
