/*
 * XREFs of SfnINWPARAMDBCSCHAR @ 0x1C0154700
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C0123DC0 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall SfnINWPARAMDBCSCHAR(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
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
  unsigned __int64 v24; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v25; // [rsp+50h] [rbp-C8h]
  __int64 v26; // [rsp+60h] [rbp-B8h]
  __int64 v27; // [rsp+68h] [rbp-B0h] BYREF
  unsigned int v28; // [rsp+70h] [rbp-A8h]
  int v29; // [rsp+74h] [rbp-A4h]
  __int64 v30; // [rsp+78h] [rbp-A0h]
  __int64 v31; // [rsp+80h] [rbp-98h]
  __int64 v32; // [rsp+88h] [rbp-90h]
  __int64 v33; // [rsp+90h] [rbp-88h]
  int v34; // [rsp+98h] [rbp-80h]
  int v35; // [rsp+9Ch] [rbp-7Ch]
  _QWORD v36[7]; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v37; // [rsp+D8h] [rbp-40h]
  char v38; // [rsp+120h] [rbp+8h] BYREF
  char v39; // [rsp+128h] [rbp+10h] BYREF
  __int64 v40; // [rsp+130h] [rbp+18h] BYREF
  int v41; // [rsp+138h] [rbp+20h] BYREF

  v40 = a3;
  v24 = 0LL;
  v41 = 0;
  v36[2] = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  v29 = 0;
  v35 = 0;
  v27 = v12;
  v28 = a2;
  v34 = a7 & 1;
  if ( (a7 & 1) != 0 )
    RtlWCSMessageWParamCharToMB(a2, (WCHAR *)&v40);
  v30 = v40;
  v31 = a4;
  v32 = a5;
  v33 = a6;
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v36[0] = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = v36;
  v36[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v14 = *(_QWORD *)(v11 + 480);
  v37 = *(_OWORD *)(v14 + 64);
  v25 = v37;
  v26 = *(_QWORD *)(v14 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v38);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(95LL);
  v17 = KeUserModeCallback(95LL, &v27, 56LL, &v24, &v41);
  EtwTraceEndCallback(95LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v38);
  ThreadUnlock1(v19, v18, v20);
  v21 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v21 + 64) = v37;
  *(_QWORD *)(v21 + 80) = v26;
  if ( v17 < 0 || v41 != 24 )
    return 0LL;
  v22 = (__int64 *)v24;
  if ( v24 + 8 < v24 || v24 + 8 > MmUserProbeAddress )
    v22 = (__int64 *)MmUserProbeAddress;
  result = *v22;
  v36[3] = *v22;
  return result;
}
