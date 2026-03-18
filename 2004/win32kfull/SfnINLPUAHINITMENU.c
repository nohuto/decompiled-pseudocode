/*
 * XREFs of SfnINLPUAHINITMENU @ 0x1C0100F90
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     _ServerFixupMenuDC @ 0x1C01015A0 (_ServerFixupMenuDC.c)
 */

__int64 __fastcall SfnINLPUAHINITMENU(
        __int64 *a1,
        int a2,
        __int64 a3,
        HDC *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  HDC v14; // r13
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rbx
  unsigned __int64 v29; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v30; // [rsp+50h] [rbp-D8h]
  __int64 v31; // [rsp+60h] [rbp-C8h]
  _QWORD v32[3]; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+80h] [rbp-A8h] BYREF
  int v34; // [rsp+88h] [rbp-A0h]
  int v35; // [rsp+8Ch] [rbp-9Ch]
  __int64 v36; // [rsp+90h] [rbp-98h]
  __int128 v37; // [rsp+98h] [rbp-90h]
  HDC v38; // [rsp+A8h] [rbp-80h]
  __int64 v39; // [rsp+B0h] [rbp-78h]
  __int64 v40; // [rsp+B8h] [rbp-70h]
  __int64 v41; // [rsp+C0h] [rbp-68h]
  __int128 v42; // [rsp+E0h] [rbp-48h]
  char v43; // [rsp+130h] [rbp+8h] BYREF
  char v44; // [rsp+138h] [rbp+10h] BYREF
  __int64 v45; // [rsp+140h] [rbp+18h]
  int v46; // [rsp+148h] [rbp+20h] BYREF

  v45 = a3;
  v29 = 0LL;
  v46 = 0;
  v32[2] = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  v35 = 0;
  v14 = 0LL;
  v15 = ServerFixupMenuDC(a4[1]);
  v16 = v15;
  if ( v15 )
  {
    v14 = a4[1];
    a4[1] = (HDC)v15;
  }
  v33 = v13;
  v34 = a2 & 0x1FFFF;
  v36 = v45;
  *((_DWORD *)a4 + 5) = 0;
  v37 = *(_OWORD *)a4;
  v38 = a4[2];
  v39 = a5;
  v40 = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v32[0] = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = v32;
  v32[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v18 = *(_QWORD *)(v12 + 472);
  v42 = *(_OWORD *)(v18 + 64);
  v30 = v42;
  v31 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v13;
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v43);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  EtwTraceBeginCallback(108LL);
  v21 = KeUserModeCallback(108LL, &v33, 64LL, &v29, &v46);
  EtwTraceEndCallback(108LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v43);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v25 + 64) = v42;
  *(_QWORD *)(v25 + 80) = v31;
  if ( v21 < 0 || v46 != 24 )
    return 0LL;
  v26 = (__int64 *)v29;
  if ( v29 + 8 < v29 || v29 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  v27 = *v26;
  v41 = *v26;
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      a4[1] = v14;
  }
  return v27;
}
