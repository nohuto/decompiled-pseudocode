/*
 * XREFs of SfnOUTLPRECT @ 0x1C0145930
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

__int64 __fastcall SfnOUTLPRECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int128 v17; // xmm6
  __int64 v18; // xmm7_8
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int128 *v29; // rcx
  __int64 v31; // [rsp+48h] [rbp-F0h] BYREF
  int v32; // [rsp+50h] [rbp-E8h]
  int v33; // [rsp+54h] [rbp-E4h]
  __int64 v34; // [rsp+58h] [rbp-E0h]
  __int64 v35; // [rsp+60h] [rbp-D8h]
  __int64 v36; // [rsp+68h] [rbp-D0h]
  _QWORD v37[3]; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+88h] [rbp-B0h]
  __int64 v39; // [rsp+98h] [rbp-A0h]
  __int64 v40; // [rsp+A0h] [rbp-98h]
  __int128 v41; // [rsp+C8h] [rbp-70h]
  char v42; // [rsp+140h] [rbp+8h] BYREF
  char v43; // [rsp+148h] [rbp+10h] BYREF
  int v44; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v45; // [rsp+158h] [rbp+20h] BYREF

  v45 = 0LL;
  v44 = 0;
  v37[2] = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v33 = 0;
  v31 = v14;
  v32 = a2;
  v34 = a3;
  v35 = a5;
  v36 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v37[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v37;
  v37[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v17 = *(_OWORD *)(v16 + 64);
  v38 = v17;
  v18 = *(_QWORD *)(v16 + 80);
  v39 = v18;
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v42);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  EtwTraceBeginCallback(34LL);
  v21 = KeUserModeCallback(34LL, &v31, 40LL, &v45, &v44);
  EtwTraceEndCallback(34LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v42);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v25 + 64) = v17;
  *(_QWORD *)(v25 + 80) = v18;
  if ( v21 >= 0 && v44 == 24 )
  {
    v26 = (__int64 *)v45;
    if ( v45 + 8 < v45 || v45 + 8 > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v27 = *v26;
    v40 = *v26;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v27;
    v28 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v28 || (*(_DWORD *)(v28 + 84) & 1) == 0 || *(_OWORD **)(v28 + 96) != a4 )
    {
      v29 = *(__int128 **)(v45 + 16);
      if ( v29 + 1 < v29 || (unsigned __int64)(v29 + 1) > MmUserProbeAddress )
        v29 = (__int128 *)MmUserProbeAddress;
      v41 = *v29;
      *a4 = v41;
      return v27;
    }
  }
  return 0LL;
}
