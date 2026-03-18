/*
 * XREFs of SfnNCDESTROY @ 0x1C008F3B0
 * Callers:
 *     <none>
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C008FAEC (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall SfnNCDESTROY(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
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
  int v30; // ebx
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
  __int64 v45; // [rsp+58h] [rbp-C0h]
  __int64 v46; // [rsp+60h] [rbp-B8h] BYREF
  int v47; // [rsp+68h] [rbp-B0h]
  int v48; // [rsp+6Ch] [rbp-ACh]
  __int64 v49; // [rsp+70h] [rbp-A8h]
  __int64 v50; // [rsp+78h] [rbp-A0h]
  __int64 v51; // [rsp+80h] [rbp-98h]
  __int64 v52; // [rsp+88h] [rbp-90h]
  _QWORD v53[7]; // [rsp+90h] [rbp-88h] BYREF
  __int128 v54; // [rsp+C8h] [rbp-50h]
  char v55; // [rsp+120h] [rbp+8h] BYREF
  bool v56; // [rsp+128h] [rbp+10h] BYREF
  int v57; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v58; // [rsp+138h] [rbp+20h] BYREF

  v48 = 0;
  v58 = 0LL;
  v57 = 0;
  v53[2] = 0LL;
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
  v48 = 0;
  v46 = v17;
  v47 = a2;
  v49 = a3;
  v50 = a4;
  v51 = a5;
  v52 = a6;
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
  v53[0] = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = v53;
  v53[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v24 = *(_QWORD *)(v11 + 472);
  v54 = *(_OWORD *)(v24 + 64);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v55);
  v56 = (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() != 0;
  UserSessionSwitchLeaveCrit(v28, v27, v29);
  EtwTraceBeginCallback(3LL);
  v30 = KeUserModeCallback(3LL, &v46, 48LL, &v58, &v57);
  EtwTraceEndCallback(3LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v56);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v55);
  if ( a1 )
  {
    v32 = a1[5];
    *(_QWORD *)(v32 + 224) = 0LL;
  }
  ThreadUnlock1(v32, v31, v33);
  v34 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v34 + 64) = v54;
  *(_QWORD *)(v34 + 80) = v45;
  if ( v30 < 0 || v57 != 24 )
    return 0LL;
  v35 = (__int64 *)v58;
  if ( v58 + 8 < v58 || v58 + 8 > MmUserProbeAddress )
    v35 = (__int64 *)MmUserProbeAddress;
  result = *v35;
  v53[3] = *v35;
  return result;
}
