/*
 * XREFs of NtMITPostWindowEventMessage @ 0x1C01361D0
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C0038134 (LockProcessByClientId.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0073320 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     PostEvent @ 0x1C01B18E8 (PostEvent.c)
 */

__int64 __fastcall NtMITPostWindowEventMessage(__int64 a1, int a2, __int64 *a3, int a4, int a5, unsigned int a6)
{
  __int64 v8; // r14
  int v10; // ebx
  CInputThread *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 ProcessWin32Process; // rdi
  int v17; // eax
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h]

  v8 = a2;
  v10 = 0;
  EnterCrit(0LL, 1);
  if ( !CInputThread::IsInputThread(v11) )
  {
    v13 = 5LL;
LABEL_3:
    UserSetLastError(v13, v12);
    goto LABEL_18;
  }
  LODWORD(v15) = 0;
  v21 = 0LL;
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      a3 = (__int64 *)MmUserProbeAddress;
    v15 = *a3;
    v21 = *a3;
  }
  Object = 0LL;
  ProcessWin32Process = 0LL;
  if ( (int)LockProcessByClientId(v8, &Object) >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    ObfDereferenceObject(Object);
  }
  if ( !ProcessWin32Process )
  {
    v13 = 87LL;
    goto LABEL_3;
  }
  v14 = 0LL;
  v20 = 0LL;
  if ( qword_1C0259A50 )
  {
    v17 = qword_1C0259A50(a1, ProcessWin32Process, &v20);
    v14 = v20;
  }
  else
  {
    v17 = 0;
  }
  if ( v17 >= 0 )
    v10 = (unsigned __int8)PostEvent(v14, v15, a4, a5, a6);
LABEL_18:
  UserSessionSwitchLeaveCrit(v14);
  return v10;
}
