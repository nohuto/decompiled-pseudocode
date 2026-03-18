/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1C022E000
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

__int64 __fastcall SfnINSIZECLIPBRD(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int128 v19; // xmm6
  __int64 v20; // xmm7_8
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  ULONG64 v28; // rcx
  char v30; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v31[3]; // [rsp+31h] [rbp-F7h] BYREF
  _DWORD v32[5]; // [rsp+34h] [rbp-F4h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-D8h]
  _QWORD v35[3]; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v36; // [rsp+78h] [rbp-B0h]
  __int64 v37; // [rsp+88h] [rbp-A0h]
  __int64 v38; // [rsp+A8h] [rbp-80h] BYREF
  int v39; // [rsp+B0h] [rbp-78h]
  int v40; // [rsp+B4h] [rbp-74h]
  __int64 v41; // [rsp+B8h] [rbp-70h]
  __int128 v42; // [rsp+C0h] [rbp-68h]
  __int64 v43; // [rsp+D0h] [rbp-58h]
  __int64 v44; // [rsp+D8h] [rbp-50h]

  v33 = 0LL;
  v32[0] = 0;
  v34 = 0LL;
  v35[2] = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v15 = 0LL;
  v40 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12, v11, v13);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 4u) )
  {
    v38 = v15;
    v39 = a2;
    v41 = a3;
    v42 = *a4;
    v43 = a5;
    v44 = a6;
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v35[0] = *(_QWORD *)(v17 + 416);
    *(_QWORD *)(v17 + 416) = v35;
    v35[1] = a1;
    if ( a1 )
      HMLockObject(a1);
    v18 = *(_QWORD *)(v14 + 480);
    v19 = *(_OWORD *)(v18 + 64);
    v36 = v19;
    v20 = *(_QWORD *)(v18 + 80);
    v37 = v20;
    *(_QWORD *)(v18 + 72) = v15;
    if ( a1 )
      v21 = *a1;
    else
      v21 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v14 + 480) + 64LL) = v21;
    if ( a1 )
      v22 = *(_QWORD *)(a1[5] + 224);
    else
      v22 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v14 + 480) + 80LL) = v22;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v31);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
    EtwTraceBeginCallback(24LL);
    v23 = KeUserModeCallback(24LL, &v38, 56LL, &v33, v32);
    EtwTraceEndCallback(24LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v31);
    ThreadUnlock1(v25, v24, v26);
    v27 = *(_QWORD *)(v14 + 480);
    *(_OWORD *)(v27 + 64) = v19;
    *(_QWORD *)(v27 + 80) = v20;
    if ( v23 < 0 || v32[0] != 24 )
      return 0LL;
    v28 = v33;
    if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
      v28 = MmUserProbeAddress;
    return *(_QWORD *)v28;
  }
  return v34;
}
