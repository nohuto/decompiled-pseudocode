/*
 * XREFs of SfnEMPTY @ 0x1C00F7B90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall SfnEMPTY(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 result; // rax
  __int64 v24; // [rsp+58h] [rbp-C0h]
  _QWORD v25[3]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+78h] [rbp-A0h] BYREF
  int v27; // [rsp+80h] [rbp-98h]
  int v28; // [rsp+84h] [rbp-94h]
  __int64 v29; // [rsp+88h] [rbp-90h]
  __int64 v30; // [rsp+90h] [rbp-88h]
  __int64 v31; // [rsp+98h] [rbp-80h]
  __int64 v32; // [rsp+A0h] [rbp-78h]
  __int64 v33; // [rsp+A8h] [rbp-70h]
  __int128 v34; // [rsp+C8h] [rbp-50h]
  char v35; // [rsp+120h] [rbp+8h] BYREF
  char v36; // [rsp+128h] [rbp+10h] BYREF
  int v37; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v38; // [rsp+138h] [rbp+20h] BYREF

  v38 = 0LL;
  v37 = 0;
  v25[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  v28 = 0;
  v26 = v12;
  v27 = a2;
  v29 = a3;
  v30 = a4;
  v31 = a5;
  v32 = a6;
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v25[0] = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = v25;
  v25[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v14 = *(_QWORD *)(v11 + 480);
  v34 = *(_OWORD *)(v14 + 64);
  v24 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v12;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v15;
  if ( a1 )
    v16 = *(_QWORD *)(a1[5] + 224);
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v16;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v35);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(117LL);
  v17 = KeUserModeCallback(117LL, &v26, 48LL, &v38, &v37);
  EtwTraceEndCallback(117LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v35);
  ThreadUnlock1(v19, v18, v20);
  v21 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v21 + 64) = v34;
  *(_QWORD *)(v21 + 80) = v24;
  if ( v17 < 0 || v37 != 24 )
    return 0LL;
  v22 = (__int64 *)v38;
  if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
    v22 = (__int64 *)MmUserProbeAddress;
  result = *v22;
  v33 = *v22;
  return result;
}
