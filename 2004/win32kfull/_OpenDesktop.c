/*
 * XREFs of _OpenDesktop @ 0x1C00C4408
 * Callers:
 *     NtUserOpenDesktop @ 0x1C00C4370 (NtUserOpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00C45C0 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01EA074 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00BD568 (CloseProtectedHandle.c)
 *     OpenDesktopCompletion @ 0x1C00C5FC4 (OpenDesktopCompletion.c)
 */

__int64 __fastcall OpenDesktop(__int64 a1, __int64 a2, __int64 a3, int a4, HANDLE *a5)
{
  unsigned int v5; // r14d
  KPROCESSOR_MODE v6; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  __int64 v11; // r8
  int v12; // eax
  PVOID v13; // rdi
  __int64 CurrentProcess; // rax
  ULONG v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  ULONG v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  ULONG v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  PVOID Object; // [rsp+48h] [rbp-8h] BYREF

  Handle = 0LL;
  v5 = a3;
  v6 = 1;
  LOBYTE(a3) = 1;
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, a4 | 0x81u, 0LL, &Handle);
  if ( v10 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v9, v8, v11);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    {
      v6 = 0;
      v10 = ObOpenObjectByName(a1, ExDesktopObjectType, 0LL, 0LL, 193, 0LL, &Handle);
    }
    if ( v10 < 0 )
    {
      v16 = RtlNtStatusToDosError(v10);
      UserSetLastError(v16, v17, v18);
      return (unsigned int)v10;
    }
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, v6, &Object, 0LL);
  v10 = v12;
  if ( v12 < 0 )
  {
    v19 = RtlNtStatusToDosError(v12);
    UserSetLastError(v19, v20, v21);
LABEL_16:
    CloseProtectedHandle(Handle, v6);
    return (unsigned int)v10;
  }
  v13 = Object;
  if ( *(_DWORD *)Object != gSessionId )
  {
    v10 = -1073741816;
    v22 = RtlNtStatusToDosError(-1073741816);
    UserSetLastError(v22, v23, v24);
    ObfDereferenceObject(v13);
    goto LABEL_16;
  }
  v10 = OpenDesktopCompletion(Object, Handle, v5);
  if ( v10 < 0 )
  {
    CloseProtectedHandle(Handle, v6);
    Handle = 0LL;
  }
  ObfDereferenceObject(v13);
  if ( v10 >= 0 )
  {
    if ( (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v10 = 0;
      *a5 = Handle;
    }
    else
    {
      CloseProtectedHandle(Handle, v6);
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v10;
}
