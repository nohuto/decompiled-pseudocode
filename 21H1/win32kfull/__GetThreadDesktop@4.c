/*
 * XREFs of __GetThreadDesktop@4 @ 0x9ACDC
 * Callers:
 *     _EditionGetThreadDesktopEntryPoint@4 @ 0xF27F6 (_EditionGetThreadDesktopEntryPoint@4.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GetConsoleDesktop@16 @ 0x154940 (_GetConsoleDesktop@16.c)
 */

HANDLE __thiscall _GetThreadDesktop(void **this)
{
  int v2; // eax
  int v3; // edx
  HANDLE result; // eax
  PRKPROCESS *v5; // esi
  int v6; // eax
  NTSTATUS v7; // eax
  PVOID v8; // esi
  int v9; // edi
  int CurrentProcess; // eax
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [esp+8h] [ebp-10h] BYREF
  PVOID Object; // [esp+10h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+14h] [ebp-4h] BYREF

  v2 = PtiFromThreadId(this);
  v3 = v2;
  Object = 0;
  Handle = 0;
  if ( v2 )
  {
    result = *(HANDLE *)(v2 + 316);
    Handle = *(HANDLE *)(v3 + 316);
    v5 = *(PRKPROCESS **)(v3 + 232);
  }
  else
  {
    if ( GetConsoleDesktop(this, 0, (int)&Object) < 0 )
      return 0;
    v5 = (PRKPROCESS *)Object;
    result = Handle;
  }
  if ( result )
  {
    if ( v5 != (PRKPROCESS *)PsGetCurrentProcessWin32Process() )
    {
      HandleInformation.HandleAttributes = 0;
      HandleInformation.GrantedAccess = 0;
      KeAttachProcess(*v5);
      Object = 0;
      v7 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation);
      v8 = Object;
      v9 = v7;
      KeDetachProcess();
      if ( v9 < 0
        || (CurrentProcess = PsGetCurrentProcess(),
            !(unsigned __int8)ObFindHandleForObject(CurrentProcess, v8, 0, &HandleInformation, &Handle)) )
      {
        Handle = 0;
      }
      if ( v9 >= 0 )
        ObfDereferenceObject(v8);
    }
    if ( Handle )
    {
      v6 = SetHandleFlag(Handle, 1, 1);
      return v6 != 0 ? Handle : 0;
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)5);
      return Handle;
    }
  }
  return result;
}
