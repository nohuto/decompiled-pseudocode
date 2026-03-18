/*
 * XREFs of _CloseDesktop @ 0x1C007DCF8
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C000E688 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     EditionCloseDesktopEntryPoint @ 0x1C007DCB0 (EditionCloseDesktopEntryPoint.c)
 * Callees:
 *     CloseProtectedHandle @ 0x1C007DE18 (CloseProtectedHandle.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall CloseDesktop(unsigned __int64 Handle, __int64 a2, __int64 a3)
{
  KPROCESSOR_MODE v3; // r14
  unsigned int v5; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  int v7; // eax
  unsigned int v8; // ebp
  PVOID v9; // rbp
  __int64 i; // rcx
  ULONG v12; // eax
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v3 = a2;
  v5 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(Handle, a2, a3);
  Object = 0LL;
  v7 = ObReferenceObjectByHandle((HANDLE)Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, v3, &Object, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    v12 = RtlNtStatusToDosError(v7);
    UserSetLastError(v12);
    return v8;
  }
  else
  {
    v9 = Object;
    if ( *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS )
    {
      for ( i = *(_QWORD *)(CurrentProcessWin32Process + 320); i; i = *(_QWORD *)(i + 664) )
      {
        if ( ((Handle ^ *(_QWORD *)(i + 592)) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
        {
          UserSetLastError(170LL);
          v5 = -2147483631;
          goto LABEL_11;
        }
      }
      if ( Object == *(PVOID *)(CurrentProcessWin32Process + 336)
        && ((Handle ^ *(_QWORD *)(CurrentProcessWin32Process + 392)) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      {
        UnlockObjectAssignment(CurrentProcessWin32Process + 336);
        *(_QWORD *)(CurrentProcessWin32Process + 392) = 0LL;
      }
    }
    SetHandleFlag(Handle, 0LL, 0LL);
    CloseProtectedHandle((HANDLE)Handle);
LABEL_11:
    ObfDereferenceObject(v9);
    return v5;
  }
}
