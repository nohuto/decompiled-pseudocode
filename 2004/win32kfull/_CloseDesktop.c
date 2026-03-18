/*
 * XREFs of _CloseDesktop @ 0x1C00BD448
 * Callers:
 *     EditionCloseDesktopEntryPoint @ 0x1C00BD400 (EditionCloseDesktopEntryPoint.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00C30E8 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00BD568 (CloseProtectedHandle.c)
 */

__int64 __fastcall CloseDesktop(unsigned __int64 Handle, KPROCESSOR_MODE a2)
{
  unsigned int v4; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebp
  PVOID v10; // rbp
  __int64 i; // rcx
  ULONG v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(Handle);
  Object = 0LL;
  v6 = ObReferenceObjectByHandle((HANDLE)Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, a2, &Object, 0LL);
  v9 = v6;
  if ( v6 < 0 )
  {
    v13 = RtlNtStatusToDosError(v6);
    UserSetLastError(v13, v14, v15);
    return v9;
  }
  else
  {
    v10 = Object;
    if ( *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS )
    {
      for ( i = *(_QWORD *)(CurrentProcessWin32Process + 320); i; i = *(_QWORD *)(i + 656) )
      {
        if ( ((Handle ^ *(_QWORD *)(i + 584)) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
        {
          UserSetLastError(170LL, v7, v8);
          v4 = -2147483631;
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
    ObfDereferenceObject(v10);
    return v4;
  }
}
