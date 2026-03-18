/*
 * XREFs of _NtUserGetProcessUIContextInformation@8 @ 0x9A214
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetProcessUIContextInformation(HANDLE Handle, ULONG a2)
{
  int v2; // esi
  PVOID v3; // edi
  int CurrentProcessWin32Process; // eax
  unsigned int v5; // eax
  _DWORD *v6; // edx
  NTSTATUS v8; // eax
  int v9; // ecx
  int v10; // ecx
  PVOID Object; // [esp+24h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v2 = 0;
  v3 = 0;
  EnterSharedCrit(0, 1);
  if ( Handle == (HANDLE)-1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  }
  else
  {
    Object = 0;
    v8 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0);
    v3 = Object;
    if ( v8 < 0 )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      goto LABEL_12;
    }
    if ( PsGetProcessSessionId(Object) != _gSessionId )
    {
      v9 = 87;
      goto LABEL_19;
    }
    CurrentProcessWin32Process = PsGetProcessWin32Process(v3);
  }
  if ( CurrentProcessWin32Process && (*(_BYTE *)(CurrentProcessWin32Process + 8) & 0x21) != 0 )
  {
    v5 = *(_DWORD *)(CurrentProcessWin32Process + 464);
    v10 = (v5 & 0x40) != 0;
    if ( (v5 & 0x100) != 0 )
      v10 |= 2u;
    ms_exc.registration.TryLevel = 0;
    v6 = (_DWORD *)a2;
    if ( a2 >= _MmUserProbeAddress )
      v6 = (_DWORD *)_MmUserProbeAddress;
    *v6 = (v5 >> 4) & 3;
    v6[1] = v10;
    ms_exc.registration.TryLevel = -2;
    v2 = 1;
    goto LABEL_10;
  }
  v9 = 1471;
LABEL_19:
  UserSetLastError((struct _NT_TIB *)v9);
LABEL_10:
  if ( v3 )
    ObfDereferenceObject(v3);
LABEL_12:
  UserSessionSwitchLeaveCrit();
  return v2;
}
