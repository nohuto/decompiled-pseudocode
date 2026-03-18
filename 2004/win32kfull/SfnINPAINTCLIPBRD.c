/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1C022E630
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     _WindowFromDC @ 0x1C00FC03C (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINPAINTCLIPBRD(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 *v25; // rcx
  char v27; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v28[3]; // [rsp+31h] [rbp-137h] BYREF
  _DWORD v29[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-120h] BYREF
  __int64 v31; // [rsp+50h] [rbp-118h]
  __int128 v32; // [rsp+60h] [rbp-108h]
  __int64 v33; // [rsp+70h] [rbp-F8h]
  _QWORD v34[6]; // [rsp+78h] [rbp-F0h] BYREF
  __int128 v35; // [rsp+A8h] [rbp-C0h]
  __int64 v36; // [rsp+C0h] [rbp-A8h] BYREF
  int v37; // [rsp+C8h] [rbp-A0h]
  int v38; // [rsp+CCh] [rbp-9Ch]
  __int64 v39; // [rsp+D0h] [rbp-98h]
  __int128 v40; // [rsp+D8h] [rbp-90h]
  __int128 v41; // [rsp+E8h] [rbp-80h]
  __int128 v42; // [rsp+F8h] [rbp-70h]
  __int128 v43; // [rsp+108h] [rbp-60h]
  __int64 v44; // [rsp+118h] [rbp-50h]
  __int64 v45; // [rsp+120h] [rbp-48h]
  __int64 v46; // [rsp+128h] [rbp-40h]

  v30 = 0LL;
  v29[0] = 0;
  v31 = 0LL;
  v34[2] = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  v38 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 4u) )
    return v31;
  v36 = v13;
  v37 = a2;
  v39 = a3;
  *((_DWORD *)a4 + 17) = 0;
  v40 = *a4;
  v41 = a4[1];
  v42 = a4[2];
  v43 = a4[3];
  v44 = *((_QWORD *)a4 + 8);
  v45 = a5;
  v46 = a6;
  v15 = WindowFromDC(*(HDC *)a4);
  *(_QWORD *)&v40 = _GetDC(v15);
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v34[0] = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = v34;
  v34[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v12 + 472);
  v35 = *(_OWORD *)(v17 + 64);
  v32 = v35;
  v33 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v13;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v28);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v27);
  EtwTraceBeginCallback(23LL);
  v20 = KeUserModeCallback(23LL, &v36, 112LL, &v30, v29);
  EtwTraceEndCallback(23LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v27);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v28);
  ThreadUnlock1(v22, v21, v23);
  v24 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v24 + 64) = v35;
  *(_QWORD *)(v24 + 80) = v33;
  if ( v20 >= 0 && v29[0] == 24 )
  {
    v25 = (__int64 *)v30;
    if ( v30 + 8 < v30 || v30 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v31 = *v25;
    _ReleaseDC(v40);
    return v31;
  }
  return 0LL;
}
