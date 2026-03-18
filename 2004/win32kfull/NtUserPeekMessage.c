/*
 * XREFs of NtUserPeekMessage @ 0x1C00940E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ClientGetMessageMPH @ 0x1C00931E8 (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall NtUserPeekMessage(_OWORD *a1, __int64 a2, int a3, int a4, unsigned int a5, char a6)
{
  _OWORD *v9; // r14
  int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // r8
  int MessageMPH; // eax
  __int64 v19; // rdx
  ULONG64 v20; // rcx
  __int64 v21; // r8
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v26; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v28; // zf
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-70h]
  union _LARGE_INTEGER v31; // [rsp+50h] [rbp-68h] BYREF
  __int128 v32; // [rsp+58h] [rbp-60h] BYREF
  __int128 v33; // [rsp+68h] [rbp-50h]
  __int128 v34; // [rsp+78h] [rbp-40h]

  v9 = a1;
  v10 = 0;
  if ( (a6 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(a1)
      || (CurrentProcess = PsGetCurrentProcess(v13, v12, v14),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v26),
          v28 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
          v11 = 0LL,
          v28) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v11 = *ThreadWin32Thread;
    }
    v31.QuadPart = 0LL;
    if ( KeWaitForSingleObject(*(PVOID *)(v11 + 1408), WrUserRequest, 1, 0, &v31) == 258 )
      return 0LL;
    if ( (a6 & 2) != 0 )
      --*(_QWORD *)(*(_QWORD *)(v11 + 472) + 8LL);
  }
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL, a5, v17);
  }
  else
  {
    LODWORD(Timeout) = a5;
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 440LL) + 20LL) > 0 )
      MessageMPH = ClientGetMessageMPH(&v32, a2, a3, a4, a5, 0);
    else
      MessageMPH = xxxRealInternalGetMessage((__int64)&v32, (unsigned __int64)Timeout, 0);
    v10 = MessageMPH;
    if ( MessageMPH )
    {
      HIDWORD(v32) = 0;
      HIDWORD(v34) = 0;
      v22 = v33;
      v23 = v34;
      v20 = MmUserProbeAddress;
      if ( (unsigned __int64)v9 >= MmUserProbeAddress )
        v9 = (_OWORD *)MmUserProbeAddress;
      *v9 = v32;
      v9[1] = v22;
      v9[2] = v23;
    }
  }
  UserSessionSwitchLeaveCrit(v20, v19, v21);
  return v10;
}
