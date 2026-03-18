/*
 * XREFs of __OpenThreadDesktop@20 @ 0x154A0F
 * Callers:
 *     _NtUserOpenThreadDesktop@16 @ 0x167382 (_NtUserOpenThreadDesktop@16.c)
 * Callees:
 *     _OpenDesktopCompletion@12 @ 0x7F0EE (_OpenDesktopCompletion@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _CloseProtectedHandle@8 @ 0xC931A (_CloseProtectedHandle@8.c)
 *     _GetConsoleDesktop@16 @ 0x154940 (_GetConsoleDesktop@16.c)
 */

NTSTATUS __fastcall _OpenThreadDesktop(void **a1, char a2, int a3, unsigned int Object, HANDLE *a5)
{
  int v6; // esi
  ACCESS_MASK v7; // ebx
  NTSTATUS result; // eax
  PRKPROCESS *GrantedAccess; // ecx
  HANDLE v10; // eax
  NTSTATUS v11; // eax
  _BYTE *v12; // edi
  NTSTATUS v13; // esi
  struct _NT_TIB *v14; // eax
  struct _NT_TIB *v15; // eax
  int v16; // eax
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [esp+10h] [ebp-Ch] BYREF
  HANDLE Handle; // [esp+18h] [ebp-4h] BYREF

  v6 = PtiFromThreadId(a1);
  v7 = Object | 0x81;
  HandleInformation.GrantedAccess = 0;
  Handle = 0;
  *a5 = 0;
  if ( v6 )
  {
    v10 = *(HANDLE *)(v6 + 316);
    Handle = v10;
    GrantedAccess = *(PRKPROCESS **)(v6 + 232);
  }
  else
  {
    result = GetConsoleDesktop(a1, &Handle, 0, (int *)&HandleInformation.GrantedAccess);
    if ( result < 0 )
      return result;
    GrantedAccess = (PRKPROCESS *)HandleInformation.GrantedAccess;
    v10 = Handle;
  }
  if ( !v10 )
    return 0;
  HandleInformation.HandleAttributes = 0;
  HandleInformation.GrantedAccess = 0;
  KeAttachProcess(*GrantedAccess);
  Object = 0;
  v11 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, (PVOID *)&Object, &HandleInformation);
  v12 = (_BYTE *)Object;
  v13 = v11;
  KeDetachProcess();
  if ( v13 >= 0 )
  {
    if ( *(_DWORD *)v12 == _gSessionId && (v12[24] & 0xE) == 0 )
    {
      v16 = ObOpenObjectByPointer(v12, 2 * (a3 != 0) + 64, 0, v7, (POBJECT_TYPE)ExDesktopObjectType, 1, &Handle);
      v13 = v16;
      if ( v16 >= 0 )
      {
        v13 = OpenDesktopCompletion((int)v12, (int)Handle, a2);
        if ( v13 >= 0 )
        {
          if ( SetHandleFlag(Handle, 1, 1) )
          {
            v13 = 0;
            *a5 = Handle;
          }
          else
          {
            CloseProtectedHandle(Handle, 1);
            v13 = -1073741801;
          }
        }
        else
        {
          CloseProtectedHandle(Handle, 1);
          Handle = 0;
        }
        goto LABEL_19;
      }
      v15 = (struct _NT_TIB *)RtlNtStatusToDosError(v16);
    }
    else
    {
      v13 = -1073741816;
      v15 = (struct _NT_TIB *)RtlNtStatusToDosError(-1073741816);
    }
    UserSetLastError(v15);
LABEL_19:
    ObfDereferenceObject(v12);
    return v13;
  }
  v14 = (struct _NT_TIB *)RtlNtStatusToDosError(v13);
  UserSetLastError(v14);
  return v13;
}
