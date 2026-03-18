/*
 * XREFs of __CloseDesktop@8 @ 0x812A8
 * Callers:
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     ?xxxCreateDisconnectDesktop@@YGHPAUHWINSTA__@@PAUtagWINDOWSTATION@@@Z @ 0xE9654 (-xxxCreateDisconnectDesktop@@YGHPAUHWINSTA__@@PAUtagWINDOWSTATION@@@Z.c)
 *     _EditionCloseDesktopEntryPoint@4 @ 0xF2154 (_EditionCloseDesktopEntryPoint@4.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _CloseProtectedHandle@8 @ 0xC931A (_CloseProtectedHandle@8.c)
 */

HANDLE __fastcall _CloseDesktop(void *a1, KPROCESSOR_MODE a2)
{
  int v2; // edi
  int CurrentProcessWin32Process; // ebx
  unsigned int v4; // esi
  int v5; // eax
  int i; // ecx
  struct _NT_TIB *v8; // eax
  HANDLE Handle; // [esp+Ch] [ebp-Ch]
  PVOID Object; // [esp+14h] [ebp-4h] BYREF

  v2 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  Object = 0;
  v4 = (unsigned int)a1;
  v5 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)ExDesktopObjectType, a2, &Object, 0);
  Handle = (HANDLE)v5;
  if ( v5 < 0 )
  {
    v8 = (struct _NT_TIB *)RtlNtStatusToDosError(v5);
    UserSetLastError(v8);
    return Handle;
  }
  else
  {
    if ( *(_DWORD *)CurrentProcessWin32Process != _gpepCSRSS )
    {
      for ( i = *(_DWORD *)(CurrentProcessWin32Process + 180); i; i = *(_DWORD *)(i + 364) )
      {
        if ( ((v4 ^ *(_DWORD *)(i + 316)) & 0xFFFFFFFC) == 0 )
        {
          UserSetLastError((struct _NT_TIB *)0xAA);
          v2 = -2147483631;
          goto LABEL_11;
        }
      }
      if ( Object == *(PVOID *)(CurrentProcessWin32Process + 188)
        && ((v4 ^ *(_DWORD *)(CurrentProcessWin32Process + 216)) & 0xFFFFFFFC) == 0 )
      {
        UnlockObjectAssignment(CurrentProcessWin32Process + 188);
        *(_DWORD *)(CurrentProcessWin32Process + 216) = 0;
      }
    }
    SetHandleFlag(v4, 0, 0);
    CloseProtectedHandle((HANDLE)v4, a2);
LABEL_11:
    ObfDereferenceObject(Object);
    return (HANDLE)v2;
  }
}
