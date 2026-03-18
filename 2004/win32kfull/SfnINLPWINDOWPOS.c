/*
 * XREFs of SfnINLPWINDOWPOS @ 0x1C008F7D0
 * Callers:
 *     <none>
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C008FAEC (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall SfnINLPWINDOWPOS(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  struct _KTHREAD *v18; // r12
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // edi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 *v35; // rcx
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v39; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v41; // rax
  int v42; // ebx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // [rsp+58h] [rbp-E0h]
  _QWORD v46[4]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+80h] [rbp-B8h] BYREF
  int v48; // [rsp+88h] [rbp-B0h]
  int v49; // [rsp+8Ch] [rbp-ACh]
  __int64 v50; // [rsp+90h] [rbp-A8h]
  __int128 v51; // [rsp+98h] [rbp-A0h]
  __int128 v52; // [rsp+A8h] [rbp-90h]
  __int64 v53; // [rsp+B8h] [rbp-80h]
  __int64 v54; // [rsp+C0h] [rbp-78h]
  __int64 v55; // [rsp+C8h] [rbp-70h]
  __int64 v56; // [rsp+D0h] [rbp-68h]
  __int128 v57; // [rsp+F0h] [rbp-48h]
  bool v58; // [rsp+140h] [rbp+8h]
  char v59; // [rsp+148h] [rbp+10h] BYREF
  int v60; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v61; // [rsp+158h] [rbp+20h] BYREF

  v49 = 0;
  v61 = 0LL;
  v60 = 0;
  v46[2] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v13, v12, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v39),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(v11 + 464);
  else
    v17 = 0LL;
  v49 = 0;
  v47 = v17;
  v48 = a2;
  v50 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v51 = *a4;
  v52 = a4[1];
  v53 = *((_QWORD *)a4 + 4);
  v54 = a5;
  v55 = a6;
  v18 = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v16)
    || (v41 = PsGetCurrentProcess(v21, v20, v22),
        v42 = PsGetProcessSessionIdEx(v41),
        v44 = PsGetCurrentThreadProcess(v43),
        v42 == (unsigned int)PsGetProcessSessionIdEx(v44)) )
  {
    v23 = (__int64 *)PsGetThreadWin32Thread(v18);
    if ( v23 )
      v19 = *v23;
  }
  v46[0] = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = v46;
  v46[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v24 = *(_QWORD *)(v11 + 472);
  v57 = *(_OWORD *)(v24 + 64);
  v45 = *(_QWORD *)(v24 + 80);
  *(_QWORD *)(v24 + 72) = v17;
  if ( a1 )
    v25 = *a1;
  else
    v25 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v25;
  if ( a1 )
    v26 = *(_QWORD *)(a1[5] + 224);
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v26;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v59);
  v58 = (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() != 0;
  UserSessionSwitchLeaveCrit(v28, v27, v29);
  EtwTraceBeginCallback(17LL);
  v30 = KeUserModeCallback(17LL, &v47, 80LL, &v61, &v60);
  EtwTraceEndCallback(17LL);
  if ( v58 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v59);
  ThreadUnlock1(v32, v31, v33);
  v34 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v34 + 64) = v57;
  *(_QWORD *)(v34 + 80) = v45;
  if ( v30 < 0 || v60 != 24 )
    return 0LL;
  v35 = (__int64 *)v61;
  if ( v61 + 8 < v61 || v61 + 8 > MmUserProbeAddress )
    v35 = (__int64 *)MmUserProbeAddress;
  result = *v35;
  v56 = *v35;
  return result;
}
