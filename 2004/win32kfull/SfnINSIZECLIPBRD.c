/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1C022EE90
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

__int64 __fastcall SfnINSIZECLIPBRD(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 CurrentProcessWin32Process; // rax
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
  ULONG64 v26; // rcx
  char v28; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v29[3]; // [rsp+31h] [rbp-F7h] BYREF
  _DWORD v30[5]; // [rsp+34h] [rbp-F4h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-D8h]
  _QWORD v33[3]; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+78h] [rbp-B0h]
  __int64 v35; // [rsp+88h] [rbp-A0h]
  __int64 v36; // [rsp+A8h] [rbp-80h] BYREF
  int v37; // [rsp+B0h] [rbp-78h]
  int v38; // [rsp+B4h] [rbp-74h]
  __int64 v39; // [rsp+B8h] [rbp-70h]
  __int128 v40; // [rsp+C0h] [rbp-68h]
  __int64 v41; // [rsp+D0h] [rbp-58h]
  __int64 v42; // [rsp+D8h] [rbp-50h]

  v31 = 0LL;
  v30[0] = 0;
  v32 = 0LL;
  v33[2] = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  v38 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 4u) )
  {
    v36 = v13;
    v37 = a2;
    v39 = a3;
    v40 = *a4;
    v41 = a5;
    v42 = a6;
    v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v33[0] = *(_QWORD *)(v15 + 408);
    *(_QWORD *)(v15 + 408) = v33;
    v33[1] = a1;
    if ( a1 )
      HMLockObject(a1);
    v16 = *(_QWORD *)(v12 + 472);
    v17 = *(_OWORD *)(v16 + 64);
    v34 = v17;
    v18 = *(_QWORD *)(v16 + 80);
    v35 = v18;
    *(_QWORD *)(v16 + 72) = v13;
    if ( a1 )
      v19 = *a1;
    else
      v19 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v19;
    if ( a1 )
      v20 = *(_QWORD *)(a1[5] + 224);
    else
      v20 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v20;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v29);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
    EtwTraceBeginCallback(24LL);
    v21 = KeUserModeCallback(24LL, &v36, 56LL, &v31, v30);
    EtwTraceEndCallback(24LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v29);
    ThreadUnlock1(v23, v22, v24);
    v25 = *(_QWORD *)(v12 + 472);
    *(_OWORD *)(v25 + 64) = v17;
    *(_QWORD *)(v25 + 80) = v18;
    if ( v21 < 0 || v30[0] != 24 )
      return 0LL;
    v26 = v31;
    if ( v31 + 8 < v31 || v31 + 8 > MmUserProbeAddress )
      v26 = MmUserProbeAddress;
    return *(_QWORD *)v26;
  }
  return v32;
}
