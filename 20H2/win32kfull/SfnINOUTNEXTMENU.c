/*
 * XREFs of SfnINOUTNEXTMENU @ 0x1C022D3B0
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

__int64 __fastcall SfnINOUTNEXTMENU(
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
  ULONG64 v27; // rcx
  __int64 v28; // xmm0_8
  __int64 v30; // [rsp+58h] [rbp-E0h]
  _QWORD v31[4]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+80h] [rbp-B8h] BYREF
  int v33; // [rsp+88h] [rbp-B0h]
  int v34; // [rsp+8Ch] [rbp-ACh]
  __int64 v35; // [rsp+90h] [rbp-A8h]
  __int128 v36; // [rsp+98h] [rbp-A0h]
  __int64 v37; // [rsp+A8h] [rbp-90h]
  __int64 v38; // [rsp+B0h] [rbp-88h]
  __int64 v39; // [rsp+B8h] [rbp-80h]
  __int64 v40; // [rsp+C0h] [rbp-78h]
  __int128 v41; // [rsp+E8h] [rbp-50h]
  char v42; // [rsp+140h] [rbp+8h] BYREF
  char v43; // [rsp+148h] [rbp+10h] BYREF
  int v44; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v45; // [rsp+158h] [rbp+20h] BYREF

  v45 = 0LL;
  v44 = 0;
  v31[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v34 = 0;
  v32 = v14;
  v33 = a2;
  v35 = a3;
  v38 = a5;
  v39 = a6;
  v36 = *a4;
  v37 = *((_QWORD *)a4 + 2);
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v31[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v31;
  v31[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v41 = *(_OWORD *)(v16 + 64);
  v30 = *(_QWORD *)(v16 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v42);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  EtwTraceBeginCallback(30LL);
  v19 = KeUserModeCallback(30LL, &v32, 64LL, &v45, &v44);
  EtwTraceEndCallback(30LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v42);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v23 + 64) = v41;
  *(_QWORD *)(v23 + 80) = v30;
  if ( v19 >= 0 && v44 == 24 )
  {
    v24 = (__int64 *)v45;
    if ( v45 + 8 < v45 || v45 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v40 = *v24;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v25;
    v26 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v26 || (*(_DWORD *)(v26 + 84) & 1) == 0 || *(__int128 **)(v26 + 96) != a4 )
    {
      v27 = *(_QWORD *)(v45 + 16);
      if ( v27 + 24 < v27 || v27 + 24 > MmUserProbeAddress )
        v27 = MmUserProbeAddress;
      v28 = *(_QWORD *)(v27 + 16);
      *a4 = *(_OWORD *)v27;
      *((_QWORD *)a4 + 2) = v28;
      return v25;
    }
  }
  return 0LL;
}
