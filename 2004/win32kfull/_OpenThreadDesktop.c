/*
 * XREFs of _OpenThreadDesktop @ 0x1C01E9E08
 * Callers:
 *     NtUserOpenThreadDesktop @ 0x1C0200860 (NtUserOpenThreadDesktop.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00BD568 (CloseProtectedHandle.c)
 *     OpenDesktopCompletion @ 0x1C00C5FC4 (OpenDesktopCompletion.c)
 *     GetConsoleDesktop @ 0x1C01E9CBC (GetConsoleDesktop.c)
 */

__int64 __fastcall OpenThreadDesktop(__int64 a1, char a2, int a3, int a4, HANDLE *Object)
{
  int v8; // ebx
  __int64 v9; // rax
  HANDLE *v10; // r14
  ACCESS_MASK v11; // esi
  __int64 v12; // r10
  __int64 result; // rax
  PRKPROCESS *v14; // rcx
  HANDLE v15; // rax
  NTSTATUS v16; // eax
  HANDLE *v17; // rdi
  NTSTATUS v18; // ebx
  ULONG v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  NTSTATUS v22; // ecx
  NTSTATUS v23; // eax
  ULONG v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+48h] [rbp-8h] BYREF

  v8 = a1;
  v9 = PtiFromThreadId(a1);
  v10 = Object;
  v11 = a4 | 0x81;
  HandleInformation = 0LL;
  v12 = v9;
  Handle = 0LL;
  *Object = 0LL;
  if ( v9 )
  {
    v15 = *(HANDLE *)(v9 + 584);
    Handle = v15;
    v14 = *(PRKPROCESS **)(v12 + 416);
  }
  else
  {
    result = GetConsoleDesktop(v8, &Handle, 0LL, (__int64 *)&HandleInformation);
    if ( (int)result < 0 )
      return result;
    v14 = (PRKPROCESS *)HandleInformation;
    v15 = Handle;
  }
  if ( !v15 )
    return 0;
  HandleInformation = 0LL;
  KeAttachProcess(*v14);
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, (PVOID *)&Object, &HandleInformation);
  v17 = Object;
  v18 = v16;
  KeDetachProcess();
  if ( v18 >= 0 )
  {
    if ( *(_DWORD *)v17 == gSessionId && ((_DWORD)v17[6] & 0xE) == 0 )
    {
      v23 = ObOpenObjectByPointer(v17, a3 != 0 ? 66 : 64, 0LL, v11, (POBJECT_TYPE)ExDesktopObjectType, 1, &Handle);
      v18 = v23;
      if ( v23 >= 0 )
      {
        v18 = OpenDesktopCompletion((__int64)v17, (__int64)Handle, a2);
        if ( v18 >= 0 )
        {
          if ( (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
          {
            v18 = 0;
            *v10 = Handle;
          }
          else
          {
            CloseProtectedHandle(Handle, 1);
            v18 = -1073741801;
          }
        }
        else
        {
          CloseProtectedHandle(Handle, 1);
          Handle = 0LL;
        }
        goto LABEL_19;
      }
      v22 = v23;
    }
    else
    {
      v22 = -1073741816;
      v18 = -1073741816;
    }
    v24 = RtlNtStatusToDosError(v22);
    UserSetLastError(v24, v25, v26);
LABEL_19:
    ObfDereferenceObject(v17);
    return (unsigned int)v18;
  }
  v19 = RtlNtStatusToDosError(v18);
  UserSetLastError(v19, v20, v21);
  return (unsigned int)v18;
}
