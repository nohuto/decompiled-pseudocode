/*
 * XREFs of SfnNCDESTROY @ 0x1C00D4540
 * Callers:
 *     <none>
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00D4CCC (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
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
  __int64 v27; // rcx
  int v28; // ebx
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
  __int64 v43; // [rsp+58h] [rbp-C0h]
  __int64 v44; // [rsp+60h] [rbp-B8h] BYREF
  int v45; // [rsp+68h] [rbp-B0h]
  int v46; // [rsp+6Ch] [rbp-ACh]
  __int64 v47; // [rsp+70h] [rbp-A8h]
  __int64 v48; // [rsp+78h] [rbp-A0h]
  __int64 v49; // [rsp+80h] [rbp-98h]
  __int64 v50; // [rsp+88h] [rbp-90h]
  _QWORD v51[7]; // [rsp+90h] [rbp-88h] BYREF
  __int128 v52; // [rsp+C8h] [rbp-50h]
  char v53; // [rsp+120h] [rbp+8h] BYREF
  bool v54; // [rsp+128h] [rbp+10h] BYREF
  int v55; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v56; // [rsp+138h] [rbp+20h] BYREF

  v46 = 0;
  v56 = 0LL;
  v55 = 0;
  v51[2] = 0LL;
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
  v46 = 0;
  v44 = v17;
  v45 = a2;
  v47 = a3;
  v48 = a4;
  v49 = a5;
  v50 = a6;
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
  v51[0] = *(_QWORD *)(v19 + 416);
  *(_QWORD *)(v19 + 416) = v51;
  v51[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v24 = *(_QWORD *)(v11 + 480);
  v52 = *(_OWORD *)(v24 + 64);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v53);
  v54 = (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() != 0;
  UserSessionSwitchLeaveCrit(v27);
  EtwTraceBeginCallback(3LL);
  v28 = KeUserModeCallback(3LL, &v44, 48LL, &v56, &v55);
  EtwTraceEndCallback(3LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v54);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v53);
  if ( a1 )
  {
    v30 = a1[5];
    *(_QWORD *)(v30 + 224) = 0LL;
  }
  ThreadUnlock1(v30, v29, v31);
  v32 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v32 + 64) = v52;
  *(_QWORD *)(v32 + 80) = v43;
  if ( v28 < 0 || v55 != 24 )
    return 0LL;
  v33 = (__int64 *)v56;
  if ( v56 + 8 < v56 || v56 + 8 > MmUserProbeAddress )
    v33 = (__int64 *)MmUserProbeAddress;
  result = *v33;
  v51[3] = *v33;
  return result;
}
