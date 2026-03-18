/*
 * XREFs of NtUserCheckAccessForIntegrityLevel @ 0x1C01F6CC0
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C003B608 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserCheckAccessForIntegrityLevel(int a1, int a2, _DWORD *a3)
{
  void *v4; // rsi
  void *v5; // rbx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 ProcessWin32Process; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // r8d
  _DWORD *v15; // rdx
  PVOID v16; // rcx
  PVOID v18; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v4 = (void *)a2;
  v5 = (void *)a1;
  EnterSharedCrit(0LL, 1LL);
  v18 = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId(v5, (PEPROCESS *)&Object) < 0 )
    goto LABEL_2;
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( !ProcessWin32Process )
    goto LABEL_2;
  if ( PsGetCurrentProcess(v8, v7, v10) != gpepCSRSS
    && ProcessWin32Process != PsGetCurrentProcessWin32Process(gpepCSRSS, v11, v12) )
  {
    v6 = -1073741790;
    goto LABEL_12;
  }
  if ( (int)LockProcessByClientId(v4, (PEPROCESS *)&v18) < 0 || (v13 = PsGetProcessWin32Process(v18)) == 0 )
  {
LABEL_2:
    v6 = -1073741811;
    goto LABEL_12;
  }
  v14 = (unsigned __int8)CheckAccess(ProcessWin32Process + 880, v13 + 880);
  v15 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v15 = (_DWORD *)MmUserProbeAddress;
  *v15 = *v15;
  *a3 = v14;
  v6 = 0;
LABEL_12:
  if ( Object )
    ObfDereferenceObject(Object);
  v16 = v18;
  if ( v18 )
    ObfDereferenceObject(v18);
  UserSessionSwitchLeaveCrit(v16);
  return v6;
}
