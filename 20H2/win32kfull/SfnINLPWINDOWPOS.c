/*
 * XREFs of SfnINLPWINDOWPOS @ 0x1C00D49B0
 * Callers:
 *     <none>
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00D4CCC (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
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
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 *v33; // rcx
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v37; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v39; // rax
  int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // [rsp+58h] [rbp-E0h]
  _QWORD v44[4]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+80h] [rbp-B8h] BYREF
  int v46; // [rsp+88h] [rbp-B0h]
  int v47; // [rsp+8Ch] [rbp-ACh]
  __int64 v48; // [rsp+90h] [rbp-A8h]
  __int128 v49; // [rsp+98h] [rbp-A0h]
  __int128 v50; // [rsp+A8h] [rbp-90h]
  __int64 v51; // [rsp+B8h] [rbp-80h]
  __int64 v52; // [rsp+C0h] [rbp-78h]
  __int64 v53; // [rsp+C8h] [rbp-70h]
  __int64 v54; // [rsp+D0h] [rbp-68h]
  __int128 v55; // [rsp+F0h] [rbp-48h]
  bool v56; // [rsp+140h] [rbp+8h]
  char v57; // [rsp+148h] [rbp+10h] BYREF
  int v58; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v59; // [rsp+158h] [rbp+20h] BYREF

  v47 = 0;
  v59 = 0LL;
  v58 = 0;
  v44[2] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v13, v12, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v37),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(v11 + 472);
  else
    v17 = 0LL;
  v47 = 0;
  v45 = v17;
  v46 = a2;
  v48 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v49 = *a4;
  v50 = a4[1];
  v51 = *((_QWORD *)a4 + 4);
  v52 = a5;
  v53 = a6;
  v18 = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v16)
    || (v39 = PsGetCurrentProcess(v21, v20, v22),
        v40 = PsGetProcessSessionIdEx(v39),
        v42 = PsGetCurrentThreadProcess(v41),
        v40 == (unsigned int)PsGetProcessSessionIdEx(v42)) )
  {
    v23 = (__int64 *)PsGetThreadWin32Thread(v18);
    if ( v23 )
      v19 = *v23;
  }
  v44[0] = *(_QWORD *)(v19 + 416);
  *(_QWORD *)(v19 + 416) = v44;
  v44[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v24 = *(_QWORD *)(v11 + 480);
  v55 = *(_OWORD *)(v24 + 64);
  v43 = *(_QWORD *)(v24 + 80);
  *(_QWORD *)(v24 + 72) = v17;
  if ( a1 )
    v25 = *a1;
  else
    v25 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v25;
  if ( a1 )
    v26 = *(_QWORD *)(a1[5] + 224);
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v26;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v57);
  v56 = (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() != 0;
  UserSessionSwitchLeaveCrit(v27);
  EtwTraceBeginCallback(17LL);
  v28 = KeUserModeCallback(17LL, &v45, 80LL, &v59, &v58);
  EtwTraceEndCallback(17LL);
  if ( v56 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v57);
  ThreadUnlock1(v30, v29, v31);
  v32 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v32 + 64) = v55;
  *(_QWORD *)(v32 + 80) = v43;
  if ( v28 < 0 || v58 != 24 )
    return 0LL;
  v33 = (__int64 *)v59;
  if ( v59 + 8 < v59 || v59 + 8 > MmUserProbeAddress )
    v33 = (__int64 *)MmUserProbeAddress;
  result = *v33;
  v54 = *v33;
  return result;
}
