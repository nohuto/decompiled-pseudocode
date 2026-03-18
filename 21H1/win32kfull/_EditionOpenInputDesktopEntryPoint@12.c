/*
 * XREFs of _EditionOpenInputDesktopEntryPoint@12 @ 0xF2960
 * Callers:
 *     <none>
 * Callees:
 *     _OpenDesktopCompletion@12 @ 0x7F0EE (_OpenDesktopCompletion@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __GetProcessWindowStation@4 @ 0xA1FCA (__GetProcessWindowStation@4.c)
 *     ?IsCurrentProcessDwm@@YGHXZ @ 0xADB5C (-IsCurrentProcessDwm@@YGHXZ.c)
 *     _CloseProtectedHandle@8 @ 0xC931A (_CloseProtectedHandle@8.c)
 */

void *__stdcall EditionOpenInputDesktopEntryPoint(char a1, int a2, int a3)
{
  int ProcessWindowStation; // eax
  ULONG v4; // ecx
  void **v5; // esi
  void *v6; // esi
  const UNICODE_STRING *v7; // eax
  int v8; // ecx
  NTSTATUS v9; // eax
  int v10; // esi
  void *v11; // esi
  int v13; // [esp-4h] [ebp-1Ch]
  NTSTATUS v14; // [esp-4h] [ebp-1Ch]
  struct _UNICODE_STRING DestinationString; // [esp+8h] [ebp-10h] BYREF
  KPROCESSOR_MODE AccessMode[4]; // [esp+10h] [ebp-8h]
  void *Handle; // [esp+14h] [ebp-4h] BYREF

  AccessMode[0] = 1;
  Handle = 0;
  EnterCrit(0, 1);
  if ( !_grpdeskRitInput )
    goto LABEL_24;
  ProcessWindowStation = _GetProcessWindowStation(&DestinationString.Buffer);
  if ( !ProcessWindowStation )
  {
    v13 = 5;
LABEL_25:
    v4 = v13;
    goto LABEL_26;
  }
  if ( (*(_BYTE *)(ProcessWindowStation + 32) & 4) != 0 )
  {
    v4 = 1;
LABEL_26:
    UserSetLastError((struct _NT_TIB *)v4);
    goto LABEL_27;
  }
  v5 = (void **)_gspdeskShouldBeForeground;
  if ( !_gbDesktopLocked )
    v5 = (void **)_grpdeskRitInput;
  v6 = *v5;
  if ( !v6 )
  {
LABEL_24:
    v13 = 110;
    goto LABEL_25;
  }
  if ( !IsCurrentProcessDwm()
    || ((*(_DWORD *)&DestinationString.Length = 0,
         DestinationString.Buffer = 0,
         AccessMode[0] = 0,
         RtlInitUnicodeString(&DestinationString, L"Default"),
         !ObQueryNameInfo(v6))
      ? (v7 = 0)
      : (v7 = (const UNICODE_STRING *)(ObQueryNameInfo(v6) + 4)),
        RtlEqualUnicodeString(&DestinationString, v7, 0)) )
  {
    v8 = a3;
  }
  else
  {
    v8 = 64;
  }
  v9 = ObOpenObjectByPointer(
         v6,
         a2 != 0 ? 2 : 0,
         0,
         v8 | 0x81,
         (POBJECT_TYPE)ExDesktopObjectType,
         AccessMode[0],
         &Handle);
  if ( v9 < 0 )
  {
    v14 = v9;
LABEL_22:
    Handle = 0;
    v4 = RtlNtStatusToDosError(v14);
    goto LABEL_26;
  }
  v10 = OpenDesktopCompletion((int)v6, (int)Handle, a1);
  if ( v10 < 0 || !SetHandleFlag(Handle, 1, 1) )
  {
    CloseProtectedHandle(Handle, 1);
    if ( v10 >= 0 )
      v10 = -1073741801;
    v14 = v10;
    goto LABEL_22;
  }
LABEL_27:
  v11 = Handle;
  UserSessionSwitchLeaveCrit();
  return v11;
}
