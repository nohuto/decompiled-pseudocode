/*
 * XREFs of SfnOUTLPSCROLLBARINFO @ 0x1C022EED0
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

__int64 __fastcall SfnOUTLPSCROLLBARINFO(
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
  __int128 v28; // xmm3
  __int128 v29; // xmm4
  __int64 v30; // xmm0_8
  int v31; // eax
  char v33; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v34[3]; // [rsp+31h] [rbp-137h] BYREF
  _DWORD v35[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-120h] BYREF
  __int128 v37; // [rsp+58h] [rbp-110h]
  __int64 v38; // [rsp+68h] [rbp-100h]
  _QWORD v39[8]; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-B8h]
  __int64 v41; // [rsp+C0h] [rbp-A8h] BYREF
  int v42; // [rsp+C8h] [rbp-A0h]
  int v43; // [rsp+CCh] [rbp-9Ch]
  __int64 v44; // [rsp+D0h] [rbp-98h]
  __int128 v45; // [rsp+D8h] [rbp-90h]
  __int128 v46; // [rsp+E8h] [rbp-80h]
  __int128 v47; // [rsp+F8h] [rbp-70h]
  __int64 v48; // [rsp+108h] [rbp-60h]
  int v49; // [rsp+110h] [rbp-58h]
  int v50; // [rsp+114h] [rbp-54h]
  __int64 v51; // [rsp+118h] [rbp-50h]
  __int64 v52; // [rsp+120h] [rbp-48h]

  v36 = 0LL;
  v35[0] = 0;
  v39[2] = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v43 = 0;
  v50 = 0;
  v41 = v14;
  v42 = a2;
  v44 = a3;
  v45 = *a4;
  v46 = a4[1];
  v47 = a4[2];
  v48 = *((_QWORD *)a4 + 6);
  v49 = *((_DWORD *)a4 + 14);
  v51 = a5;
  v52 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v39[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v39;
  v39[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v40 = *(_OWORD *)(v16 + 64);
  v37 = v40;
  v38 = *(_QWORD *)(v16 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v34);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  EtwTraceBeginCallback(105LL);
  v19 = KeUserModeCallback(105LL, &v41, 104LL, &v36, v35);
  EtwTraceEndCallback(105LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v34);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v23 + 64) = v40;
  *(_QWORD *)(v23 + 80) = v38;
  if ( v19 >= 0 && v35[0] == 24 )
  {
    v24 = (__int64 *)v36;
    if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v39[3] = *v24;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v25;
    v26 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v26 || (*(_DWORD *)(v26 + 84) & 1) == 0 || *(__int128 **)(v26 + 96) != a4 )
    {
      v27 = *(_QWORD *)(v36 + 16);
      if ( v27 + 60 < v27 || v27 + 60 > MmUserProbeAddress )
        v27 = MmUserProbeAddress;
      v28 = *(_OWORD *)(v27 + 16);
      v29 = *(_OWORD *)(v27 + 32);
      v30 = *(_QWORD *)(v27 + 48);
      v31 = *(_DWORD *)(v27 + 56);
      *a4 = *(_OWORD *)v27;
      a4[1] = v28;
      a4[2] = v29;
      *((_QWORD *)a4 + 6) = v30;
      *((_DWORD *)a4 + 14) = v31;
      return v25;
    }
  }
  return 0LL;
}
