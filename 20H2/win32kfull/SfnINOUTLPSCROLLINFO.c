/*
 * XREFs of SfnINOUTLPSCROLLINFO @ 0x1C01060F0
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

__int64 __fastcall SfnINOUTLPSCROLLINFO(
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
  int v29; // eax
  char v31; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v32[3]; // [rsp+31h] [rbp-117h] BYREF
  _DWORD v33[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-100h] BYREF
  __int128 v35; // [rsp+58h] [rbp-F0h]
  __int64 v36; // [rsp+68h] [rbp-E0h]
  _QWORD v37[8]; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-98h]
  __int64 v39; // [rsp+C0h] [rbp-88h] BYREF
  int v40; // [rsp+C8h] [rbp-80h]
  int v41; // [rsp+CCh] [rbp-7Ch]
  __int64 v42; // [rsp+D0h] [rbp-78h]
  __int128 v43; // [rsp+D8h] [rbp-70h]
  __int64 v44; // [rsp+E8h] [rbp-60h]
  int v45; // [rsp+F0h] [rbp-58h]
  int v46; // [rsp+F4h] [rbp-54h]
  __int64 v47; // [rsp+F8h] [rbp-50h]
  __int64 v48; // [rsp+100h] [rbp-48h]

  v34 = 0LL;
  v33[0] = 0;
  v37[2] = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v41 = 0;
  v46 = 0;
  v39 = v14;
  v40 = a2;
  v42 = a3;
  v43 = *a4;
  v44 = *((_QWORD *)a4 + 2);
  v45 = *((_DWORD *)a4 + 6);
  v47 = a5;
  v48 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v37[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v37;
  v37[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v38 = *(_OWORD *)(v16 + 64);
  v35 = v38;
  v36 = *(_QWORD *)(v16 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v32);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  EtwTraceBeginCallback(19LL);
  v19 = KeUserModeCallback(19LL, &v39, 72LL, &v34, v33);
  EtwTraceEndCallback(19LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v32);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v23 + 64) = v38;
  *(_QWORD *)(v23 + 80) = v36;
  if ( v19 >= 0 && v33[0] == 24 )
  {
    v24 = (__int64 *)v34;
    if ( v34 + 8 < v34 || v34 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v37[3] = *v24;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v25;
    v26 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v26 || (*(_DWORD *)(v26 + 84) & 1) == 0 || *(__int128 **)(v26 + 96) != a4 )
    {
      v27 = *(_QWORD *)(v34 + 16);
      if ( v27 + 28 < v27 || v27 + 28 > MmUserProbeAddress )
        v27 = MmUserProbeAddress;
      v28 = *(_QWORD *)(v27 + 16);
      v29 = *(_DWORD *)(v27 + 24);
      *a4 = *(_OWORD *)v27;
      *((_QWORD *)a4 + 2) = v28;
      *((_DWORD *)a4 + 6) = v29;
      return v25;
    }
  }
  return 0LL;
}
