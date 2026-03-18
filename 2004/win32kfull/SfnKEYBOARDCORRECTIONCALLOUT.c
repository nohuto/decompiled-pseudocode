/*
 * XREFs of SfnKEYBOARDCORRECTIONCALLOUT @ 0x1C022F5C0
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

__int64 __fastcall SfnKEYBOARDCORRECTIONCALLOUT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // r14
  char *v15; // rcx
  __int64 v16; // rax
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
  __int64 result; // rax
  char v28; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v29[3]; // [rsp+31h] [rbp-237h] BYREF
  _DWORD v30[5]; // [rsp+34h] [rbp-234h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-220h] BYREF
  __int128 v32; // [rsp+58h] [rbp-210h]
  __int64 v33; // [rsp+68h] [rbp-200h]
  _QWORD v34[7]; // [rsp+70h] [rbp-1F8h] BYREF
  __int128 v35; // [rsp+A8h] [rbp-1C0h]
  __int64 v36; // [rsp+C0h] [rbp-1A8h] BYREF
  int v37; // [rsp+C8h] [rbp-1A0h]
  int v38; // [rsp+CCh] [rbp-19Ch]
  __int64 v39; // [rsp+D0h] [rbp-198h]
  char v40; // [rsp+D8h] [rbp-190h] BYREF
  __int64 v41; // [rsp+220h] [rbp-48h]
  __int64 v42; // [rsp+228h] [rbp-40h]

  v31 = 0LL;
  v30[0] = 0;
  v34[2] = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  if ( ThreadWin32Thread == *(_QWORD *)(a8 + 32) )
    return 0LL;
  v38 = 0;
  v36 = v14;
  v37 = a2 & 0x1FFFF;
  v39 = a3;
  *(_DWORD *)(a4 + 12) = 0;
  v15 = &v40;
  v16 = 2LL;
  do
  {
    *(_OWORD *)v15 = *(_OWORD *)a4;
    *((_OWORD *)v15 + 1) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)v15 + 2) = *(_OWORD *)(a4 + 32);
    *((_OWORD *)v15 + 3) = *(_OWORD *)(a4 + 48);
    *((_OWORD *)v15 + 4) = *(_OWORD *)(a4 + 64);
    *((_OWORD *)v15 + 5) = *(_OWORD *)(a4 + 80);
    *((_OWORD *)v15 + 6) = *(_OWORD *)(a4 + 96);
    v15 += 128;
    *((_OWORD *)v15 - 1) = *(_OWORD *)(a4 + 112);
    a4 += 128LL;
    --v16;
  }
  while ( v16 );
  *(_OWORD *)v15 = *(_OWORD *)a4;
  *((_OWORD *)v15 + 1) = *(_OWORD *)(a4 + 16);
  *((_OWORD *)v15 + 2) = *(_OWORD *)(a4 + 32);
  *((_OWORD *)v15 + 3) = *(_OWORD *)(a4 + 48);
  *((_QWORD *)v15 + 8) = *(_QWORD *)(a4 + 64);
  v41 = a5;
  v42 = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v34[0] = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = v34;
  v34[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v18 = *(_QWORD *)(v13 + 472);
  v35 = *(_OWORD *)(v18 + 64);
  v32 = v35;
  v33 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v14;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v29);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
  EtwTraceBeginCallback(52LL);
  v21 = KeUserModeCallback(52LL, &v36, 368LL, &v31, v30);
  EtwTraceEndCallback(52LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v29);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v25 + 64) = v35;
  *(_QWORD *)(v25 + 80) = v33;
  if ( v21 < 0 || v30[0] != 24 )
    return 0LL;
  v26 = (__int64 *)v31;
  if ( v31 + 8 < v31 || v31 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  result = *v26;
  v34[3] = *v26;
  return result;
}
