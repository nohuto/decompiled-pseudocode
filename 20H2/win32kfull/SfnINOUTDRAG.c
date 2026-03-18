/*
 * XREFs of SfnINOUTDRAG @ 0x1C022C7B0
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

__int64 __fastcall SfnINOUTDRAG(
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
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int128 *v27; // rcx
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int64 v31; // [rsp+58h] [rbp-F0h]
  _QWORD v32[8]; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-A8h]
  __int64 v34; // [rsp+B0h] [rbp-98h] BYREF
  int v35; // [rsp+B8h] [rbp-90h]
  int v36; // [rsp+BCh] [rbp-8Ch]
  __int64 v37; // [rsp+C0h] [rbp-88h]
  __int64 v38; // [rsp+C8h] [rbp-80h]
  __int64 v39; // [rsp+D0h] [rbp-78h]
  __int128 v40; // [rsp+D8h] [rbp-70h]
  __int128 v41; // [rsp+E8h] [rbp-60h]
  __int128 v42; // [rsp+F8h] [rbp-50h]
  char v43; // [rsp+150h] [rbp+8h] BYREF
  char v44; // [rsp+158h] [rbp+10h] BYREF
  int v45; // [rsp+160h] [rbp+18h] BYREF
  unsigned __int64 v46; // [rsp+168h] [rbp+20h] BYREF

  v46 = 0LL;
  v45 = 0;
  v32[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v36 = 0;
  v34 = v14;
  v35 = a2;
  v37 = a3;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 11) = 0;
  v40 = *a4;
  v41 = a4[1];
  v42 = a4[2];
  v38 = a5;
  v39 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v32[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v32;
  v32[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v33 = *(_OWORD *)(v16 + 64);
  v31 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v43);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  EtwTraceBeginCallback(5LL);
  v19 = KeUserModeCallback(5LL, &v34, 88LL, &v46, &v45);
  EtwTraceEndCallback(5LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v43);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v23 + 64) = v33;
  *(_QWORD *)(v23 + 80) = v31;
  if ( v19 >= 0 && v45 == 24 )
  {
    v24 = (__int64 *)v46;
    if ( v46 + 8 < v46 || v46 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v32[3] = *v24;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v25;
    v26 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v26 || (*(_DWORD *)(v26 + 84) & 1) == 0 || *(__int128 **)(v26 + 96) != a4 )
    {
      v27 = *(__int128 **)(v46 + 16);
      if ( v27 + 3 < v27 || (unsigned __int64)(v27 + 3) > MmUserProbeAddress )
        v27 = (__int128 *)MmUserProbeAddress;
      v28 = v27[1];
      v29 = v27[2];
      *a4 = *v27;
      a4[1] = v28;
      a4[2] = v29;
      return v25;
    }
  }
  return 0LL;
}
