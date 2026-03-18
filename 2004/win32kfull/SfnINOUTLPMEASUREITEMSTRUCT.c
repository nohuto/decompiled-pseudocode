/*
 * XREFs of SfnINOUTLPMEASUREITEMSTRUCT @ 0x1C014A990
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINOUTLPMEASUREITEMSTRUCT(
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
  char v30; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v31[3]; // [rsp+31h] [rbp-117h] BYREF
  _DWORD v32[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-100h] BYREF
  __int128 v34; // [rsp+58h] [rbp-F0h]
  __int64 v35; // [rsp+68h] [rbp-E0h]
  _QWORD v36[8]; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v37; // [rsp+B0h] [rbp-98h]
  __int64 v38; // [rsp+C0h] [rbp-88h] BYREF
  int v39; // [rsp+C8h] [rbp-80h]
  int v40; // [rsp+CCh] [rbp-7Ch]
  __int64 v41; // [rsp+D0h] [rbp-78h]
  __int128 v42; // [rsp+D8h] [rbp-70h]
  __int128 v43; // [rsp+E8h] [rbp-60h]
  __int64 v44; // [rsp+F8h] [rbp-50h]
  __int64 v45; // [rsp+100h] [rbp-48h]

  v33 = 0LL;
  v32[0] = 0;
  v36[2] = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v40 = 0;
  v38 = v14;
  v39 = a2 & 0x1FFFF;
  v41 = a3;
  *((_DWORD *)a4 + 5) = 0;
  v42 = *a4;
  v43 = a4[1];
  v44 = a5;
  v45 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v36[0] = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = v36;
  v36[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 472);
  v37 = *(_OWORD *)(v16 + 64);
  v34 = v37;
  v35 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v31);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  EtwTraceBeginCallback(16LL);
  v19 = KeUserModeCallback(16LL, &v38, 72LL, &v33, v32);
  EtwTraceEndCallback(16LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v31);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v23 + 64) = v37;
  *(_QWORD *)(v23 + 80) = v35;
  if ( v19 >= 0 && v32[0] == 24 )
  {
    v24 = (__int64 *)v33;
    if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v36[3] = *v24;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v25;
    v26 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v26 || (*(_DWORD *)(v26 + 84) & 1) == 0 || *(__int128 **)(v26 + 96) != a4 )
    {
      v27 = *(__int128 **)(v33 + 16);
      if ( v27 + 2 < v27 || (unsigned __int64)(v27 + 2) > MmUserProbeAddress )
        v27 = (__int128 *)MmUserProbeAddress;
      v28 = v27[1];
      *a4 = *v27;
      a4[1] = v28;
      return v25;
    }
  }
  return 0LL;
}
