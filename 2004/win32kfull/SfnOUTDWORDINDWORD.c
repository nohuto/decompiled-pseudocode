/*
 * XREFs of SfnOUTDWORDINDWORD @ 0x1C022F9A0
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

__int64 __fastcall SfnOUTDWORDINDWORD(
        __int64 *a1,
        int a2,
        _DWORD *a3,
        __int64 a4,
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
  _DWORD *v26; // rdx
  __int64 v28; // [rsp+68h] [rbp-C0h]
  _QWORD v29[3]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+88h] [rbp-A0h] BYREF
  int v31; // [rsp+90h] [rbp-98h]
  __int64 v32; // [rsp+94h] [rbp-94h]
  int v33; // [rsp+9Ch] [rbp-8Ch]
  __int64 v34; // [rsp+A0h] [rbp-88h]
  __int64 v35; // [rsp+A8h] [rbp-80h]
  __int64 v36; // [rsp+B0h] [rbp-78h]
  __int64 v37; // [rsp+B8h] [rbp-70h]
  __int128 v38; // [rsp+E0h] [rbp-48h]
  char v39; // [rsp+130h] [rbp+8h] BYREF
  char v40; // [rsp+138h] [rbp+10h] BYREF
  int v41; // [rsp+140h] [rbp+18h] BYREF
  unsigned __int64 v42; // [rsp+148h] [rbp+20h] BYREF

  v42 = 0LL;
  v41 = 0;
  v29[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v32 = 0LL;
  v33 = 0;
  v30 = v14;
  v31 = a2;
  v34 = a4;
  v35 = a5;
  v36 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v29[0] = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = v29;
  v29[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 472);
  v38 = *(_OWORD *)(v16 + 64);
  v28 = *(_QWORD *)(v16 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v39);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  EtwTraceBeginCallback(33LL);
  v19 = KeUserModeCallback(33LL, &v30, 48LL, &v42, &v41);
  EtwTraceEndCallback(33LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v39);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v23 + 64) = v38;
  *(_QWORD *)(v23 + 80) = v28;
  if ( v19 < 0 || v41 != 24 )
    return 0LL;
  v24 = (__int64 *)v42;
  if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
    v24 = (__int64 *)MmUserProbeAddress;
  v25 = *v24;
  v37 = *v24;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v26 = *(_DWORD **)(v42 + 16);
    if ( (unsigned __int64)v26 >= MmUserProbeAddress )
      v26 = (_DWORD *)MmUserProbeAddress;
    *a3 = *v26;
  }
  return v25;
}
