/*
 * XREFs of EditionOpenInputDesktopEntryPoint @ 0x1C00C3C00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00BD568 (CloseProtectedHandle.c)
 *     _GetProcessWindowStation @ 0x1C00C40D0 (_GetProcessWindowStation.c)
 *     OpenDesktopCompletion @ 0x1C00C5FC4 (OpenDesktopCompletion.c)
 */

HANDLE __fastcall EditionOpenInputDesktopEntryPoint(unsigned int a1, int a2, int a3)
{
  KPROCESSOR_MODE AccessMode; // si
  void **v7; // rdx
  __int64 v8; // r8
  __int64 ProcessWindowStation; // rax
  __int64 v10; // rcx
  void *v11; // rbx
  __int64 CurrentProcess; // rax
  NTSTATUS v13; // eax
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  HANDLE v18; // rbx
  NTSTATUS v20; // ecx
  __int64 v21; // rcx
  const UNICODE_STRING *NameInfo; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  Handle = 0LL;
  AccessMode = 1;
  EnterCrit(0LL, 1LL);
  if ( !grpdeskRitInput )
    goto LABEL_25;
  ProcessWindowStation = GetProcessWindowStation(&DestinationString);
  if ( !ProcessWindowStation )
  {
    v21 = 5LL;
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(ProcessWindowStation + 64) & 4) != 0 )
  {
    v21 = 1LL;
    goto LABEL_14;
  }
  v7 = (void **)grpdeskRitInput;
  if ( gbDesktopLocked )
    v7 = (void **)gspdeskShouldBeForeground;
  v11 = *v7;
  if ( !*v7 )
  {
LABEL_25:
    v21 = 110LL;
    goto LABEL_14;
  }
  CurrentProcess = PsGetCurrentProcess(v10, v7, v8);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    AccessMode = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Default");
    NameInfo = (const UNICODE_STRING *)ObQueryNameInfo(v11);
    if ( NameInfo )
      NameInfo = (const UNICODE_STRING *)(ObQueryNameInfo(v11) + 8);
    if ( !RtlEqualUnicodeString(&DestinationString, NameInfo, 0) )
      a3 = 64;
  }
  v13 = ObOpenObjectByPointer(
          v11,
          a2 != 0 ? 2 : 0,
          0LL,
          a3 | 0x81,
          (POBJECT_TYPE)ExDesktopObjectType,
          AccessMode,
          &Handle);
  if ( v13 < 0 )
  {
    v20 = v13;
LABEL_13:
    Handle = 0LL;
    v21 = RtlNtStatusToDosError(v20);
LABEL_14:
    UserSetLastError(v21, (__int64)v7, v8);
    goto LABEL_11;
  }
  v14 = OpenDesktopCompletion(v11, Handle, a1);
  if ( v14 < 0 || !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
  {
    CloseProtectedHandle(Handle, 1);
    if ( v14 >= 0 )
      v14 = -1073741801;
    v20 = v14;
    goto LABEL_13;
  }
LABEL_11:
  v18 = Handle;
  UserSessionSwitchLeaveCrit(v16, v15, v17);
  return v18;
}
