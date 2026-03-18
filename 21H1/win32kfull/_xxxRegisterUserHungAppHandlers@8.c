/*
 * XREFs of _xxxRegisterUserHungAppHandlers@8 @ 0x1A1148
 * Callers:
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall xxxRegisterUserHungAppHandlers(int a1, HANDLE Handle)
{
  int CurrentProcessWin32Process; // ebx
  _DWORD *v3; // esi
  int v4; // edi
  NTSTATUS v5; // eax
  PVOID Object; // [esp+Ch] [ebp-8h] BYREF
  int ProcessInformation; // [esp+10h] [ebp-4h] BYREF

  ProcessInformation = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( *(_DWORD *)(CurrentProcessWin32Process + 200) )
    return 0;
  if ( ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessWx86Information, &ProcessInformation, 4u, 0) < 0 )
    return 0;
  if ( !ProcessInformation )
    return 0;
  v3 = (_DWORD *)Win32AllocPoolWithQuotaZInit(40, 1886876501);
  if ( !v3 )
    return 0;
  Object = 0;
  v4 = 1;
  v5 = ObReferenceObjectByHandle(Handle, (ACCESS_MASK)&loc_1F0002 + 1, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0);
  v3[4] = Object;
  if ( v5 < 0 )
  {
    v4 = 0;
    Win32FreePool(v3);
  }
  else
  {
    v3[5] = Handle;
    v3[3] = a1;
    *(_DWORD *)(CurrentProcessWin32Process + 200) = v3;
    *v3 = _gpwpiFirstWow;
    _gpwpiFirstWow = v3;
  }
  return v4;
}
