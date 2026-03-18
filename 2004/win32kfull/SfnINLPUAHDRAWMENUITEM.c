/*
 * XREFs of SfnINLPUAHDRAWMENUITEM @ 0x1C0101270
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

__int64 __fastcall SfnINLPUAHDRAWMENUITEM(
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
  __int64 v12; // r14
  __int64 v13; // rsi
  HDC v14; // r12
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
  char v29; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v30[3]; // [rsp+31h] [rbp-187h] BYREF
  int v31; // [rsp+34h] [rbp-184h] BYREF
  int v32; // [rsp+38h] [rbp-180h]
  unsigned __int64 v33; // [rsp+50h] [rbp-168h] BYREF
  __int128 v34; // [rsp+60h] [rbp-158h]
  __int64 v35; // [rsp+70h] [rbp-148h]
  _QWORD v36[7]; // [rsp+78h] [rbp-140h] BYREF
  __int128 v37; // [rsp+B0h] [rbp-108h]
  __int64 v38; // [rsp+C0h] [rbp-F8h] BYREF
  int v39; // [rsp+C8h] [rbp-F0h]
  int v40; // [rsp+CCh] [rbp-ECh]
  __int64 v41; // [rsp+D0h] [rbp-E8h]
  __int128 v42; // [rsp+D8h] [rbp-E0h]
  __int128 v43; // [rsp+E8h] [rbp-D0h]
  __int128 v44; // [rsp+F8h] [rbp-C0h]
  __int128 v45; // [rsp+108h] [rbp-B0h]
  __int128 v46; // [rsp+118h] [rbp-A0h]
  __int128 v47; // [rsp+128h] [rbp-90h]
  __int128 v48; // [rsp+138h] [rbp-80h]
  __int128 v49; // [rsp+148h] [rbp-70h]
  __int128 v50; // [rsp+158h] [rbp-60h]
  __int64 v51; // [rsp+168h] [rbp-50h]
  __int64 v52; // [rsp+170h] [rbp-48h]

  v32 = a2;
  v33 = 0LL;
  v31 = 0;
  v36[2] = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  v40 = 0;
  v14 = 0LL;
  v15 = ServerFixupMenuDC(a4[4]);
  v16 = v15;
  if ( v15 )
  {
    v14 = a4[4];
    a4[4] = (HDC)v15;
    a4[9] = (HDC)v15;
  }
  v38 = v13;
  v39 = v32;
  v41 = a3;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 21) = 0;
  v42 = *(_OWORD *)a4;
  v43 = *((_OWORD *)a4 + 1);
  v44 = *((_OWORD *)a4 + 2);
  v45 = *((_OWORD *)a4 + 3);
  v46 = *((_OWORD *)a4 + 4);
  v47 = *((_OWORD *)a4 + 5);
  v48 = *((_OWORD *)a4 + 6);
  v49 = *((_OWORD *)a4 + 7);
  v50 = *((_OWORD *)a4 + 8);
  v51 = a5;
  v52 = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v36[0] = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = v36;
  v36[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v18 = *(_QWORD *)(v12 + 472);
  v37 = *(_OWORD *)(v18 + 64);
  v34 = v37;
  v35 = *(_QWORD *)(v18 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(107LL);
  v21 = KeUserModeCallback(107LL, &v38, 184LL, &v33, &v31);
  EtwTraceEndCallback(107LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v25 + 64) = v37;
  *(_QWORD *)(v25 + 80) = v35;
  if ( v21 < 0 || v31 != 24 )
    return 0LL;
  v26 = (__int64 *)v33;
  if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  v27 = *v26;
  v36[3] = *v26;
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      a4[4] = v14;
      a4[9] = v14;
    }
  }
  return v27;
}
