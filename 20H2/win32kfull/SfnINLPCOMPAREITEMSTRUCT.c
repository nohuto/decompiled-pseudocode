/*
 * XREFs of SfnINLPCOMPAREITEMSTRUCT @ 0x1C022A8A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall SfnINLPCOMPAREITEMSTRUCT(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
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
  __int64 v24; // [rsp+58h] [rbp-F0h]
  _QWORD v25[7]; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v26; // [rsp+98h] [rbp-B0h]
  __int64 v27; // [rsp+B0h] [rbp-98h] BYREF
  int v28; // [rsp+B8h] [rbp-90h]
  int v29; // [rsp+BCh] [rbp-8Ch]
  __int64 v30; // [rsp+C0h] [rbp-88h]
  __int128 v31; // [rsp+C8h] [rbp-80h]
  __int128 v32; // [rsp+D8h] [rbp-70h]
  __int128 v33; // [rsp+E8h] [rbp-60h]
  __int64 v34; // [rsp+F8h] [rbp-50h]
  __int64 v35; // [rsp+100h] [rbp-48h]
  __int64 v36; // [rsp+108h] [rbp-40h]
  char v37; // [rsp+150h] [rbp+8h] BYREF
  char v38; // [rsp+158h] [rbp+10h] BYREF
  int v39; // [rsp+160h] [rbp+18h] BYREF
  unsigned __int64 v40; // [rsp+168h] [rbp+20h] BYREF

  v40 = 0LL;
  v39 = 0;
  v25[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  v29 = 0;
  v27 = v12;
  v28 = a2;
  v30 = a3;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 9) = 0;
  *((_DWORD *)a4 + 13) = 0;
  v31 = *a4;
  v32 = a4[1];
  v33 = a4[2];
  v34 = *((_QWORD *)a4 + 6);
  v35 = a5;
  v36 = a6;
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v25[0] = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = v25;
  v25[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v14 = *(_QWORD *)(v11 + 480);
  v26 = *(_OWORD *)(v14 + 64);
  v24 = *(_QWORD *)(v14 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v37);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  EtwTraceBeginCallback(9LL);
  v17 = KeUserModeCallback(9LL, &v27, 96LL, &v40, &v39);
  EtwTraceEndCallback(9LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v37);
  ThreadUnlock1(v19, v18, v20);
  v21 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v21 + 64) = v26;
  *(_QWORD *)(v21 + 80) = v24;
  if ( v17 < 0 || v39 != 24 )
    return 0LL;
  v22 = (__int64 *)v40;
  if ( v40 + 8 < v40 || v40 + 8 > MmUserProbeAddress )
    v22 = (__int64 *)MmUserProbeAddress;
  result = *v22;
  v25[3] = *v22;
  return result;
}
