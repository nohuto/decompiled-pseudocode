/*
 * XREFs of NtMITPostWindowEventMessage @ 0x1C012DE90
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C0007134 (LockProcessByClientId.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C00549F8 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     PostEvent @ 0x1C01A9808 (PostEvent.c)
 */

__int64 __fastcall NtMITPostWindowEventMessage(__int64 a1, int a2, __int64 *a3, int a4, int a5, unsigned int a6)
{
  __int64 v8; // r14
  int v10; // ebx
  CInputThread *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 ProcessWin32Process; // rdi
  int v19; // eax
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h]

  v8 = a2;
  v10 = 0;
  EnterCrit(0, 1);
  if ( !CInputThread::IsInputThread(v11) )
  {
    v13 = 5LL;
LABEL_3:
    UserSetLastError(v13, v12);
    goto LABEL_18;
  }
  LODWORD(v17) = 0;
  v23 = 0LL;
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      a3 = (__int64 *)MmUserProbeAddress;
    v17 = *a3;
    v23 = *a3;
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
  v22 = 0LL;
  if ( qword_1C0251A90 )
  {
    v19 = qword_1C0251A90(a1, ProcessWin32Process, &v22);
    v14 = v22;
  }
  else
  {
    v19 = 0;
  }
  if ( v19 >= 0 )
    v10 = (unsigned __int8)PostEvent(v14, v17, a4, a5, a6);
LABEL_18:
  UserSessionSwitchLeaveCrit(v14, v12, v15, v16);
  return v10;
}
