/*
 * XREFs of _NtUserCheckAccessForIntegrityLevel@12 @ 0x160084
 * Callers:
 *     <none>
 * Callees:
 *     _LockProcessByClientId@8 @ 0x1AD58 (_LockProcessByClientId@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserCheckAccessForIntegrityLevel(HANDLE ProcessId, HANDLE a2, _DWORD *a3)
{
  int v3; // esi
  int ProcessWin32Process; // edi
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // ecx
  PVOID v9; // [esp+18h] [ebp-20h] BYREF
  PVOID Object; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v3 = 0;
  EnterSharedCrit(0, 1);
  v9 = 0;
  Object = 0;
  if ( LockProcessByClientId(ProcessId, (PEPROCESS *)&Object) < 0 )
    goto LABEL_2;
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( !ProcessWin32Process )
    goto LABEL_2;
  if ( PsGetCurrentProcess() != _gpepCSRSS && ProcessWin32Process != PsGetCurrentProcessWin32Process() )
  {
    v3 = -1073741790;
    goto LABEL_12;
  }
  if ( LockProcessByClientId(a2, (PEPROCESS *)&v9) < 0 || (v5 = PsGetProcessWin32Process(v9)) == 0 )
  {
LABEL_2:
    v3 = -1073741811;
    goto LABEL_12;
  }
  v6 = (unsigned __int8)CheckAccess(ProcessWin32Process + 496, v5 + 496);
  ms_exc.registration.TryLevel = 0;
  v7 = a3;
  if ( (unsigned int)a3 >= _MmUserProbeAddress )
    v7 = (_DWORD *)_MmUserProbeAddress;
  *v7 = *v7;
  *a3 = v6;
  ms_exc.registration.TryLevel = -2;
LABEL_12:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v9 )
    ObfDereferenceObject(v9);
  UserSessionSwitchLeaveCrit();
  return v3;
}
