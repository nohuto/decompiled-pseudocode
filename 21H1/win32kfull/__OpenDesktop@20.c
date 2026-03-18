/*
 * XREFs of __OpenDesktop@20 @ 0x7DD0E
 * Callers:
 *     _NtUserOpenDesktop@12 @ 0x7DCC2 (_NtUserOpenDesktop@12.c)
 *     _xxxResolveDesktop@20 @ 0x7DE28 (_xxxResolveDesktop@20.c)
 *     _xxxResolveDesktopForWOW@4 @ 0x154BAD (_xxxResolveDesktopForWOW@4.c)
 * Callees:
 *     _OpenDesktopCompletion@12 @ 0x7F0EE (_OpenDesktopCompletion@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _CloseProtectedHandle@8 @ 0xC931A (_CloseProtectedHandle@8.c)
 */

NTSTATUS __thiscall _OpenDesktop(void *this, int a2, unsigned int Object, HANDLE *a4)
{
  KPROCESSOR_MODE v5; // bl
  NTSTATUS v6; // esi
  int v7; // eax
  PVOID v8; // edi
  int CurrentProcess; // eax
  ULONG v11; // eax
  ULONG v12; // eax
  ULONG v13; // eax
  KPROCESSOR_MODE AccessMode; // [esp+Ch] [ebp-Ch]
  HANDLE Handle[2]; // [esp+10h] [ebp-8h] BYREF

  Handle[0] = 0;
  v5 = 1;
  AccessMode = 1;
  v6 = ObOpenObjectByName(this, ExDesktopObjectType, 1, 0, Object | 0x81, 0, Handle);
  if ( v6 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( IsProcessDwm(CurrentProcess) )
    {
      v5 = 0;
      AccessMode = 0;
      v6 = ObOpenObjectByName(this, ExDesktopObjectType, 0, 0, 193, 0, Handle);
    }
    if ( v6 < 0 )
    {
      v11 = RtlNtStatusToDosError(v6);
      UserSetLastError(v11);
      return v6;
    }
  }
  Object = 0;
  v7 = ObReferenceObjectByHandle(Handle[0], 0, (POBJECT_TYPE)ExDesktopObjectType, AccessMode, (PVOID *)&Object, 0);
  v6 = v7;
  if ( v7 < 0 )
  {
    v12 = RtlNtStatusToDosError(v7);
    UserSetLastError(v12);
LABEL_16:
    CloseProtectedHandle(Handle[0], v5);
    return v6;
  }
  v8 = (PVOID)Object;
  if ( *(_DWORD *)Object != _gSessionId )
  {
    v6 = -1073741816;
    v13 = RtlNtStatusToDosError(-1073741816);
    UserSetLastError(v13);
    ObfDereferenceObject(v8);
    goto LABEL_16;
  }
  v6 = OpenDesktopCompletion(a2);
  if ( v6 < 0 )
  {
    CloseProtectedHandle(Handle[0], v5);
    Handle[0] = 0;
  }
  ObfDereferenceObject(v8);
  if ( v6 >= 0 )
  {
    if ( SetHandleFlag(Handle[0], 1, 1) )
    {
      v6 = 0;
      *a4 = Handle[0];
    }
    else
    {
      CloseProtectedHandle(Handle[0], v5);
      return -1073741801;
    }
  }
  return v6;
}
