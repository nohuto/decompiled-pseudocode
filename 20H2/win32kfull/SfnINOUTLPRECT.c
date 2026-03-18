/*
 * XREFs of SfnINOUTLPRECT @ 0x1C01113B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINOUTLPRECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
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
  char v31; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v32[3]; // [rsp+31h] [rbp-117h] BYREF
  _DWORD v33[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-100h] BYREF
  _QWORD v35[3]; // [rsp+58h] [rbp-F0h] BYREF
  __int128 v36; // [rsp+70h] [rbp-D8h]
  __int64 v37; // [rsp+80h] [rbp-C8h]
  __int64 v38; // [rsp+88h] [rbp-C0h]
  __int128 v39; // [rsp+B0h] [rbp-98h]
  __int64 v40; // [rsp+C0h] [rbp-88h] BYREF
  int v41; // [rsp+C8h] [rbp-80h]
  int v42; // [rsp+CCh] [rbp-7Ch]
  __int64 v43; // [rsp+D0h] [rbp-78h]
  __int128 v44; // [rsp+D8h] [rbp-70h]
  __int64 v45; // [rsp+E8h] [rbp-60h]
  __int64 v46; // [rsp+F0h] [rbp-58h]

  v34 = 0LL;
  v33[0] = 0;
  v35[2] = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v42 = 0;
  v40 = v14;
  v41 = a2;
  v43 = a3;
  v44 = *a4;
  v45 = a5;
  v46 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v35[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v35;
  v35[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v17 = *(_OWORD *)(v16 + 64);
  v36 = v17;
  v18 = *(_QWORD *)(v16 + 80);
  v37 = v18;
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v32);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  EtwTraceBeginCallback(20LL);
  v21 = KeUserModeCallback(20LL, &v40, 56LL, &v34, v33);
  EtwTraceEndCallback(20LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v32);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v25 + 64) = v17;
  *(_QWORD *)(v25 + 80) = v18;
  if ( v21 >= 0 && v33[0] == 24 )
  {
    v26 = (__int64 *)v34;
    if ( v34 + 8 < v34 || v34 + 8 > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v27 = *v26;
    v38 = *v26;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v27;
    v28 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v28 || (*(_DWORD *)(v28 + 84) & 1) == 0 || *(__int128 **)(v28 + 96) != a4 )
    {
      v29 = *(__int128 **)(v34 + 16);
      if ( v29 + 1 < v29 || (unsigned __int64)(v29 + 1) > MmUserProbeAddress )
        v29 = (__int128 *)MmUserProbeAddress;
      v39 = *v29;
      *a4 = v39;
      return v27;
    }
  }
  return 0LL;
}
