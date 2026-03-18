/*
 * XREFs of SfnSENTDDEMSG @ 0x1C022FD90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021C8A4 (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall SfnSENTDDEMSG(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  __int64 v13; // rdi
  signed int v14; // esi
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
  __int64 result; // rax
  _DWORD v26[6]; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-100h] BYREF
  __int128 v28; // [rsp+58h] [rbp-F0h] BYREF
  __int128 v29; // [rsp+68h] [rbp-E0h]
  __int128 v30; // [rsp+78h] [rbp-D0h]
  __int64 v31; // [rsp+88h] [rbp-C0h] BYREF
  signed int v32; // [rsp+90h] [rbp-B8h]
  int v33; // [rsp+94h] [rbp-B4h]
  __int128 v34; // [rsp+98h] [rbp-B0h]
  __int64 v35; // [rsp+A8h] [rbp-A0h]
  __int64 v36; // [rsp+B0h] [rbp-98h]
  BOOL v37; // [rsp+B8h] [rbp-90h]
  int v38; // [rsp+BCh] [rbp-8Ch]
  __int128 v39; // [rsp+C0h] [rbp-88h]
  __int64 v40; // [rsp+D0h] [rbp-78h]
  _QWORD v41[7]; // [rsp+D8h] [rbp-70h] BYREF
  __int128 v42; // [rsp+110h] [rbp-38h]
  char v43; // [rsp+150h] [rbp+8h] BYREF
  char v44; // [rsp+158h] [rbp+10h] BYREF

  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v27 = 0LL;
  v26[0] = 0;
  v41[2] = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v33 = 0;
  v38 = 0;
  v14 = a2 & 0xBFFFFFFF;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v41[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v41;
  v41[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v12 + 480);
  v42 = *(_OWORD *)(v16 + 64);
  v39 = v42;
  v40 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v13;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v18;
  if ( v14 >= 0 )
  {
    v31 = v13;
    v32 = v14;
    *(_QWORD *)&v34 = a3;
    *((_QWORD *)&v34 + 1) = a4;
  }
  else
  {
    if ( a1 )
      *(_QWORD *)&v28 = *a1;
    DWORD2(v28) = v14 & 0x7FFFFFFF;
    *(_QWORD *)&v29 = a3;
    *((_QWORD *)&v29 + 1) = a4;
    xxxDDETrackGetMessageHook((__int64)&v28);
    v31 = _HMObjectFromHandle(v28) - *(_QWORD *)(v12 + 472);
    v32 = DWORD2(v28);
    v34 = v29;
  }
  v35 = a5;
  v36 = a6;
  v37 = (a7 & 1) == 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v43);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  EtwTraceBeginCallback(38LL);
  v19 = KeUserModeCallback(38LL, &v31, 56LL, &v27, v26);
  EtwTraceEndCallback(38LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v43);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v23 + 64) = v42;
  *(_QWORD *)(v23 + 80) = v40;
  if ( v19 < 0 || v26[0] != 24 )
    return 0LL;
  v24 = (__int64 *)v27;
  if ( v27 + 8 < v27 || v27 + 8 > MmUserProbeAddress )
    v24 = (__int64 *)MmUserProbeAddress;
  result = *v24;
  v41[3] = *v24;
  return result;
}
