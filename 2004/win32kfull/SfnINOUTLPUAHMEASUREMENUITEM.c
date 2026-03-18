/*
 * XREFs of SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C01008C0
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
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINOUTLPUAHMEASUREMENUITEM(
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
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // r15
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
  __int64 v26; // rsi
  __int64 v27; // rdx
  _OWORD *v28; // rcx
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int128 v31; // xmm3
  __int128 v32; // xmm4
  __int128 v33; // xmm5
  __int128 v34; // xmm6
  char v36; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v37[3]; // [rsp+31h] [rbp-187h] BYREF
  _DWORD v38[5]; // [rsp+34h] [rbp-184h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-170h] BYREF
  HDC v40; // [rsp+50h] [rbp-168h]
  __int128 v41; // [rsp+60h] [rbp-158h]
  __int64 v42; // [rsp+70h] [rbp-148h]
  _QWORD v43[8]; // [rsp+78h] [rbp-140h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-100h]
  __int64 v45; // [rsp+D0h] [rbp-E8h] BYREF
  int v46; // [rsp+D8h] [rbp-E0h]
  int v47; // [rsp+DCh] [rbp-DCh]
  __int64 v48; // [rsp+E0h] [rbp-D8h]
  __int128 v49; // [rsp+E8h] [rbp-D0h]
  __int128 v50; // [rsp+F8h] [rbp-C0h]
  __int128 v51; // [rsp+108h] [rbp-B0h]
  __int128 v52; // [rsp+118h] [rbp-A0h]
  __int128 v53; // [rsp+128h] [rbp-90h]
  __int128 v54; // [rsp+138h] [rbp-80h]
  __int128 v55; // [rsp+148h] [rbp-70h]
  __int64 v56; // [rsp+158h] [rbp-60h]
  __int64 v57; // [rsp+160h] [rbp-58h]

  v39 = 0LL;
  v38[0] = 0;
  v43[2] = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v47 = 0;
  v40 = 0LL;
  v15 = ServerFixupMenuDC(a4[5]);
  if ( v15 )
  {
    v40 = a4[5];
    a4[5] = (HDC)v15;
  }
  v45 = v14;
  v46 = a2 & 0x1FFFF;
  v48 = a3;
  v49 = *(_OWORD *)a4;
  v50 = *((_OWORD *)a4 + 1);
  v51 = *((_OWORD *)a4 + 2);
  v52 = *((_OWORD *)a4 + 3);
  v53 = *((_OWORD *)a4 + 4);
  v54 = *((_OWORD *)a4 + 5);
  v55 = *((_OWORD *)a4 + 6);
  DWORD1(v50) = 0;
  DWORD1(v52) = 0;
  v56 = a5;
  v57 = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v43[0] = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = v43;
  v43[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v13 + 472);
  v44 = *(_OWORD *)(v17 + 64);
  v41 = v44;
  v42 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v37);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(109LL);
  v20 = KeUserModeCallback(109LL, &v45, 152LL, &v39, v38);
  EtwTraceEndCallback(109LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v37);
  ThreadUnlock1(v22, v21, v23);
  v24 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v24 + 64) = v44;
  *(_QWORD *)(v24 + 80) = v42;
  if ( v20 < 0 || v38[0] != 24 )
    return 0LL;
  v25 = (__int64 *)v39;
  if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
    v25 = (__int64 *)MmUserProbeAddress;
  v26 = *v25;
  v43[3] = *v25;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_26;
  v27 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v27 )
  {
    if ( (*(_DWORD *)(v27 + 84) & 1) != 0 && *(HDC **)(v27 + 96) == a4 )
      return 0LL;
  }
  v28 = *(_OWORD **)(v39 + 16);
  if ( v28 + 7 < v28 || (unsigned __int64)(v28 + 7) > MmUserProbeAddress )
    v28 = (_OWORD *)MmUserProbeAddress;
  v29 = v28[1];
  v30 = v28[2];
  v31 = v28[3];
  v32 = v28[4];
  v33 = v28[5];
  v34 = v28[6];
  *(_OWORD *)a4 = *v28;
  *((_OWORD *)a4 + 1) = v29;
  *((_OWORD *)a4 + 2) = v30;
  *((_OWORD *)a4 + 3) = v31;
  *((_OWORD *)a4 + 4) = v32;
  *((_OWORD *)a4 + 5) = v33;
  *((_OWORD *)a4 + 6) = v34;
LABEL_26:
  if ( v15 )
  {
    _ReleaseDC(v15);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      a4[5] = v40;
  }
  return v26;
}
