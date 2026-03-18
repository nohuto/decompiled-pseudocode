/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1C022D7A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _WindowFromDC @ 0x1C00F652C (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINPAINTCLIPBRD(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // rcx
  char v29; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v30[3]; // [rsp+31h] [rbp-137h] BYREF
  _DWORD v31[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-120h] BYREF
  __int64 v33; // [rsp+50h] [rbp-118h]
  __int128 v34; // [rsp+60h] [rbp-108h]
  __int64 v35; // [rsp+70h] [rbp-F8h]
  _QWORD v36[6]; // [rsp+78h] [rbp-F0h] BYREF
  __int128 v37; // [rsp+A8h] [rbp-C0h]
  __int64 v38; // [rsp+C0h] [rbp-A8h] BYREF
  int v39; // [rsp+C8h] [rbp-A0h]
  int v40; // [rsp+CCh] [rbp-9Ch]
  __int64 v41; // [rsp+D0h] [rbp-98h]
  __int128 v42; // [rsp+D8h] [rbp-90h]
  __int128 v43; // [rsp+E8h] [rbp-80h]
  __int128 v44; // [rsp+F8h] [rbp-70h]
  __int128 v45; // [rsp+108h] [rbp-60h]
  __int64 v46; // [rsp+118h] [rbp-50h]
  __int64 v47; // [rsp+120h] [rbp-48h]
  __int64 v48; // [rsp+128h] [rbp-40h]

  v32 = 0LL;
  v31[0] = 0;
  v33 = 0LL;
  v36[2] = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v15 = 0LL;
  v40 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12, v11, v13);
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 4u) )
    return v33;
  v38 = v15;
  v39 = a2;
  v41 = a3;
  *((_DWORD *)a4 + 17) = 0;
  v42 = *a4;
  v43 = a4[1];
  v44 = a4[2];
  v45 = a4[3];
  v46 = *((_QWORD *)a4 + 8);
  v47 = a5;
  v48 = a6;
  v17 = WindowFromDC(*(HDC *)a4);
  *(_QWORD *)&v42 = _GetDC(v17);
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v36[0] = *(_QWORD *)(v18 + 416);
  *(_QWORD *)(v18 + 416) = v36;
  v36[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v14 + 480);
  v37 = *(_OWORD *)(v19 + 64);
  v34 = v37;
  v35 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v15;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(23LL);
  v22 = KeUserModeCallback(23LL, &v38, 112LL, &v32, v31);
  EtwTraceEndCallback(23LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v14 + 480);
  *(_OWORD *)(v26 + 64) = v37;
  *(_QWORD *)(v26 + 80) = v35;
  if ( v22 >= 0 && v31[0] == 24 )
  {
    v27 = (__int64 *)v32;
    if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
      v27 = (__int64 *)MmUserProbeAddress;
    v33 = *v27;
    _ReleaseDC(v42);
    return v33;
  }
  return 0LL;
}
