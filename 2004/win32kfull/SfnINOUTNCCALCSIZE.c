/*
 * XREFs of SfnINOUTNCCALCSIZE @ 0x1C00A5000
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0157E84 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0157EAC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall SfnINOUTNCCALCSIZE(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  struct _KTHREAD *v20; // r12
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // rax
  __int64 v26; // rax
  __int128 v27; // xmm6
  __int64 v28; // xmm7_8
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ebx
  LeaveEnterCrit *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 *v37; // rcx
  __int64 v38; // rdi
  ULONG64 v39; // rcx
  __int128 *v40; // xmm0_8
  __int128 *v41; // rbx
  __int128 v42; // xmm0
  __int64 v43; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v47; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v49; // rax
  int v50; // ebx
  __int64 v51; // rcx
  __int64 v52; // rax
  _BYTE v53[4]; // [rsp+30h] [rbp-1C8h] BYREF
  _DWORD v54[7]; // [rsp+34h] [rbp-1C4h] BYREF
  unsigned __int64 v55; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v56; // [rsp+58h] [rbp-1A0h]
  __int64 v57; // [rsp+70h] [rbp-188h]
  _QWORD v58[3]; // [rsp+78h] [rbp-180h] BYREF
  __int128 v59; // [rsp+90h] [rbp-168h]
  __int64 v60; // [rsp+A0h] [rbp-158h]
  __int64 v61; // [rsp+A8h] [rbp-150h]
  __int64 v62; // [rsp+B0h] [rbp-148h]
  __int128 v63; // [rsp+D8h] [rbp-120h]
  volatile void *Address; // [rsp+E8h] [rbp-110h]
  __int128 v65; // [rsp+F0h] [rbp-108h]
  __int128 *v66; // [rsp+100h] [rbp-F8h]
  _OWORD v67[9]; // [rsp+110h] [rbp-E8h] BYREF

  v57 = a3;
  v55 = 0LL;
  v54[0] = 0;
  v58[2] = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v47),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( a1 )
    v18 = a1[5] - *(_QWORD *)(v13 + 464);
  else
    v18 = 0LL;
  v56 = 136LL;
  memset(v67, 0, 0x88uLL);
  *(_QWORD *)&v67[0] = v18;
  DWORD2(v67[0]) = a2;
  *(_QWORD *)&v67[1] = a3;
  *((_QWORD *)&v67[1] + 1) = a5;
  *(_QWORD *)&v67[2] = a6;
  *(_OWORD *)((char *)&v67[2] + 8) = *(_OWORD *)a4;
  if ( a3 )
  {
    *(_OWORD *)((char *)&v67[3] + 8) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)((char *)&v67[4] + 8) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)&v67[5] + 1) = *(_QWORD *)(a4 + 48);
    v19 = 0LL;
    *(_DWORD *)(*((_QWORD *)&v67[5] + 1) + 36LL) = 0;
    v67[6] = **((_OWORD **)&v67[5] + 1);
    v67[7] = *(_OWORD *)(*((_QWORD *)&v67[5] + 1) + 16LL);
    *(_QWORD *)&v67[8] = *(_QWORD *)(*((_QWORD *)&v67[5] + 1) + 32LL);
    *((_QWORD *)&v67[5] + 1) = 0LL;
  }
  else
  {
    LODWORD(v56) = 56;
  }
  v20 = KeGetCurrentThread();
  v21 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v19)
    || (v49 = PsGetCurrentProcess(v23, v22, v24),
        v50 = PsGetProcessSessionIdEx(v49),
        v52 = PsGetCurrentThreadProcess(v51),
        v50 == (unsigned int)PsGetProcessSessionIdEx(v52)) )
  {
    v25 = (__int64 *)PsGetThreadWin32Thread(v20);
    if ( v25 )
      v21 = *v25;
  }
  v58[0] = *(_QWORD *)(v21 + 408);
  *(_QWORD *)(v21 + 408) = v58;
  v58[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v26 = *(_QWORD *)(v13 + 472);
  v27 = *(_OWORD *)(v26 + 64);
  v59 = v27;
  v28 = *(_QWORD *)(v26 + 80);
  v60 = v28;
  *(_QWORD *)(v26 + 72) = v18;
  if ( a1 )
    v29 = *a1;
  else
    v29 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v29;
  if ( a1 )
    v30 = *(_QWORD *)(a1[5] + 224);
  else
    v30 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v30;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v53);
  EtwTraceBeginCallback(21LL);
  v31 = KeUserModeCallback(21LL, v67, (unsigned int)v56, &v55, v54);
  EtwTraceEndCallback(21LL);
  LeaveEnterCrit::~LeaveEnterCrit(v32);
  ThreadUnlock1(v34, v33, v35);
  v36 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v36 + 64) = v27;
  *(_QWORD *)(v36 + 80) = v28;
  if ( v31 < 0 || v54[0] != 24 )
    return 0LL;
  v37 = (__int64 *)v55;
  if ( v55 + 8 < v55 || v55 + 8 > MmUserProbeAddress )
    v37 = (__int64 *)MmUserProbeAddress;
  v38 = *v37;
  v61 = *v37;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v39 = v55;
    if ( v55 + 24 < v55 || v55 + 24 > MmUserProbeAddress )
      v39 = MmUserProbeAddress;
    v63 = *(_OWORD *)v39;
    v40 = *(__int128 **)(v39 + 16);
    Address = v40;
    v65 = v63;
    v66 = v40;
    v41 = v40;
    ProbeForRead(v40, 0x60uLL, 4u);
    v42 = *v40;
    if ( v57 )
    {
      v62 = *(_QWORD *)(a4 + 48);
      v43 = v62;
      *(_OWORD *)a4 = v42;
      *(_OWORD *)(a4 + 16) = v41[1];
      *(_OWORD *)(a4 + 32) = v41[2];
      *(_QWORD *)(a4 + 48) = *((_QWORD *)v41 + 6);
      *(_OWORD *)v43 = *(__int128 *)((char *)v41 + 56);
      *(_OWORD *)(v43 + 16) = *(__int128 *)((char *)v41 + 72);
      *(_QWORD *)(v43 + 32) = *((_QWORD *)v41 + 11);
      *(_QWORD *)(a4 + 48) = v43;
    }
    else
    {
      *(_OWORD *)a4 = v42;
    }
  }
  return v38;
}
