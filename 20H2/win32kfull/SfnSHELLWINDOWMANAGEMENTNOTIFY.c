/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1C010C7D0
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

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTNOTIFY(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6)
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
  char v24; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v25[3]; // [rsp+31h] [rbp-127h] BYREF
  _DWORD v26[5]; // [rsp+34h] [rbp-124h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-110h] BYREF
  __int128 v28; // [rsp+58h] [rbp-100h]
  __int64 v29; // [rsp+68h] [rbp-F0h]
  _QWORD v30[7]; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v31; // [rsp+A8h] [rbp-B0h]
  __int64 v32; // [rsp+C0h] [rbp-98h] BYREF
  int v33; // [rsp+C8h] [rbp-90h]
  int v34; // [rsp+CCh] [rbp-8Ch]
  __int64 v35; // [rsp+D0h] [rbp-88h]
  __int128 v36; // [rsp+D8h] [rbp-80h]
  __int128 v37; // [rsp+E8h] [rbp-70h]
  __int128 v38; // [rsp+F8h] [rbp-60h]
  __int64 v39; // [rsp+108h] [rbp-50h]
  __int64 v40; // [rsp+110h] [rbp-48h]
  __int64 v41; // [rsp+118h] [rbp-40h]

  v27 = 0LL;
  v26[0] = 0;
  v30[2] = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  v34 = 0;
  v32 = v12;
  v33 = a2 & 0x1FFFF;
  v35 = a3;
  *((_DWORD *)a4 + 3) = 0;
  v36 = *a4;
  v37 = a4[1];
  v38 = a4[2];
  v39 = *((_QWORD *)a4 + 6);
  v40 = a5;
  v41 = a6;
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v30[0] = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = v30;
  v30[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v14 = *(_QWORD *)(v11 + 480);
  v31 = *(_OWORD *)(v14 + 64);
  v28 = v31;
  v29 = *(_QWORD *)(v14 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v25);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v24);
  EtwTraceBeginCallback(54LL);
  v17 = KeUserModeCallback(54LL, &v32, 96LL, &v27, v26);
  EtwTraceEndCallback(54LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v24);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v25);
  ThreadUnlock1(v19, v18, v20);
  v21 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v21 + 64) = v31;
  *(_QWORD *)(v21 + 80) = v29;
  if ( v17 < 0 || v26[0] != 24 )
    return 0LL;
  v22 = (__int64 *)v27;
  if ( v27 + 8 < v27 || v27 + 8 > MmUserProbeAddress )
    v22 = (__int64 *)MmUserProbeAddress;
  result = *v22;
  v30[3] = *v22;
  return result;
}
