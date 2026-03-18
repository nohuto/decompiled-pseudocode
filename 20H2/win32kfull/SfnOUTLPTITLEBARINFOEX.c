/*
 * XREFs of SfnOUTLPTITLEBARINFOEX @ 0x1C011AA40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnOUTLPTITLEBARINFOEX(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
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
  ULONG64 v27; // rdx
  char v29; // [rsp+30h] [rbp-218h] BYREF
  _BYTE v30[3]; // [rsp+31h] [rbp-217h] BYREF
  _DWORD v31[5]; // [rsp+34h] [rbp-214h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-200h] BYREF
  __int128 v33; // [rsp+58h] [rbp-1F0h]
  __int64 v34; // [rsp+68h] [rbp-1E0h]
  _QWORD v35[8]; // [rsp+70h] [rbp-1D8h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-198h]
  __int128 v37; // [rsp+C0h] [rbp-188h]
  __int128 v38; // [rsp+D0h] [rbp-178h]
  __int128 v39; // [rsp+E0h] [rbp-168h]
  __int128 v40; // [rsp+F0h] [rbp-158h]
  __int128 v41; // [rsp+100h] [rbp-148h]
  __int128 v42; // [rsp+110h] [rbp-138h]
  __int128 v43; // [rsp+120h] [rbp-128h]
  __int128 v44; // [rsp+130h] [rbp-118h]
  __int64 v45; // [rsp+140h] [rbp-108h]
  int v46; // [rsp+148h] [rbp-100h]
  __int64 v47; // [rsp+150h] [rbp-F8h] BYREF
  int v48; // [rsp+158h] [rbp-F0h]
  int v49; // [rsp+15Ch] [rbp-ECh]
  __int64 v50; // [rsp+160h] [rbp-E8h]
  __int128 v51; // [rsp+168h] [rbp-E0h]
  __int128 v52; // [rsp+178h] [rbp-D0h]
  __int128 v53; // [rsp+188h] [rbp-C0h]
  __int128 v54; // [rsp+198h] [rbp-B0h]
  __int128 v55; // [rsp+1A8h] [rbp-A0h]
  __int128 v56; // [rsp+1B8h] [rbp-90h]
  __int128 v57; // [rsp+1C8h] [rbp-80h]
  __int128 v58; // [rsp+1D8h] [rbp-70h]
  __int64 v59; // [rsp+1E8h] [rbp-60h]
  int v60; // [rsp+1F0h] [rbp-58h]
  int v61; // [rsp+1F4h] [rbp-54h]
  __int64 v62; // [rsp+1F8h] [rbp-50h]
  __int64 v63; // [rsp+200h] [rbp-48h]

  v32 = 0LL;
  v31[0] = 0;
  v35[2] = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v49 = 0;
  v61 = 0;
  v47 = v14;
  v48 = a2;
  v50 = a3;
  v51 = *a4;
  v52 = a4[1];
  v53 = a4[2];
  v54 = a4[3];
  v55 = a4[4];
  v56 = a4[5];
  v57 = a4[6];
  v58 = a4[7];
  v59 = *((_QWORD *)a4 + 16);
  v60 = *((_DWORD *)a4 + 34);
  v62 = a5;
  v63 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v35[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v35;
  v35[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v36 = *(_OWORD *)(v16 + 64);
  v33 = v36;
  v34 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(111LL);
  v19 = KeUserModeCallback(111LL, &v47, 184LL, &v32, v31);
  EtwTraceEndCallback(111LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v23 + 64) = v36;
  *(_QWORD *)(v23 + 80) = v34;
  if ( v19 >= 0 && v31[0] == 24 )
  {
    v24 = (__int64 *)v32;
    if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v35[3] = *v24;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v25;
    v26 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v26 || (*(_DWORD *)(v26 + 84) & 1) == 0 || *(__int128 **)(v26 + 96) != a4 )
    {
      v27 = *(_QWORD *)(v32 + 16);
      if ( v27 + 140 < v27 || v27 + 140 > MmUserProbeAddress )
        v27 = MmUserProbeAddress;
      v37 = *(_OWORD *)v27;
      v38 = *(_OWORD *)(v27 + 16);
      v39 = *(_OWORD *)(v27 + 32);
      v40 = *(_OWORD *)(v27 + 48);
      v41 = *(_OWORD *)(v27 + 64);
      v42 = *(_OWORD *)(v27 + 80);
      v43 = *(_OWORD *)(v27 + 96);
      v44 = *(_OWORD *)(v27 + 112);
      v45 = *(_QWORD *)(v27 + 128);
      v46 = *(_DWORD *)(v27 + 136);
      *a4 = v37;
      a4[1] = v38;
      a4[2] = v39;
      a4[3] = v40;
      a4[4] = v41;
      a4[5] = v42;
      a4[6] = v43;
      a4[7] = v44;
      *((_QWORD *)a4 + 16) = v45;
      *((_DWORD *)a4 + 34) = v46;
      return v25;
    }
  }
  return 0LL;
}
