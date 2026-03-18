/*
 * XREFs of NtUserCheckAccessForIntegrityLevel @ 0x1C01F7B30
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C00283C8 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserCheckAccessForIntegrityLevel(int a1, int a2, _DWORD *a3)
{
  void *v4; // rsi
  void *v5; // rbx
  _DWORD *v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 ProcessWin32Process; // rbx
  __int64 v11; // rax
  PVOID v12; // rcx
  PVOID v14; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v4 = (void *)a2;
  v5 = (void *)a1;
  EnterSharedCrit(0LL, 1LL);
  v14 = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId(v5, (PEPROCESS *)&Object) < 0 )
    goto LABEL_2;
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( !ProcessWin32Process )
    goto LABEL_2;
  if ( PsGetCurrentProcess(v9, v6, v7) != gpepCSRSS && ProcessWin32Process != PsGetCurrentProcessWin32Process(gpepCSRSS) )
  {
    v8 = -1073741790;
    goto LABEL_12;
  }
  if ( (int)LockProcessByClientId(v4, (PEPROCESS *)&v14) < 0 || (v11 = PsGetProcessWin32Process(v14)) == 0 )
  {
LABEL_2:
    v8 = -1073741811;
    goto LABEL_12;
  }
  v7 = (unsigned __int8)CheckAccess(ProcessWin32Process + 880, v11 + 880);
  v6 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v6 = (_DWORD *)MmUserProbeAddress;
  *v6 = *v6;
  *a3 = v7;
  v8 = 0;
LABEL_12:
  if ( Object )
    ObfDereferenceObject(Object);
  v12 = v14;
  if ( v14 )
    ObfDereferenceObject(v14);
  UserSessionSwitchLeaveCrit(v12, v6, v7);
  return v8;
}
