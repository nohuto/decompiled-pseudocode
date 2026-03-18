/*
 * XREFs of SfnINOUTLPSIZE @ 0x1C022DA40
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SfnINOUTLPSIZE(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 *a4,
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
  __int64 *v27; // rcx
  __int64 v29; // [rsp+58h] [rbp-C0h]
  _QWORD v30[3]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+78h] [rbp-A0h] BYREF
  int v32; // [rsp+80h] [rbp-98h]
  int v33; // [rsp+84h] [rbp-94h]
  __int64 v34; // [rsp+88h] [rbp-90h]
  __int64 v35; // [rsp+90h] [rbp-88h]
  __int64 v36; // [rsp+98h] [rbp-80h]
  __int64 v37; // [rsp+A0h] [rbp-78h]
  __int64 v38; // [rsp+A8h] [rbp-70h]
  __int128 v39; // [rsp+D0h] [rbp-48h]
  char v40; // [rsp+120h] [rbp+8h] BYREF
  char v41; // [rsp+128h] [rbp+10h] BYREF
  int v42; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v43; // [rsp+138h] [rbp+20h] BYREF

  v43 = 0LL;
  v42 = 0;
  v30[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v33 = 0;
  v31 = v14;
  v32 = a2;
  v34 = a3;
  v35 = *a4;
  v36 = a5;
  v37 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v30[0] = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = v30;
  v30[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 472);
  v39 = *(_OWORD *)(v16 + 64);
  v29 = *(_QWORD *)(v16 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v40);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(126LL);
  v19 = KeUserModeCallback(126LL, &v31, 48LL, &v43, &v42);
  EtwTraceEndCallback(126LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v40);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v23 + 64) = v39;
  *(_QWORD *)(v23 + 80) = v29;
  if ( v19 >= 0 && v42 == 24 )
  {
    v24 = (__int64 *)v43;
    if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v38 = *v24;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v25;
    v26 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v26 || (*(_DWORD *)(v26 + 84) & 1) == 0 || *(__int64 **)(v26 + 96) != a4 )
    {
      v27 = *(__int64 **)(v43 + 16);
      if ( v27 + 1 < v27 || (unsigned __int64)(v27 + 1) > MmUserProbeAddress )
        v27 = (__int64 *)MmUserProbeAddress;
      *a4 = *v27;
      return v25;
    }
  }
  return 0LL;
}
