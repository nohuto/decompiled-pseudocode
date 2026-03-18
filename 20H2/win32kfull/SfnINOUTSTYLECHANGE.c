/*
 * XREFs of SfnINOUTSTYLECHANGE @ 0x1C00E8C60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall SfnINOUTSTYLECHANGE(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // edi
  __int64 v12; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // rcx
  __int64 v20; // r15
  struct _KTHREAD *v21; // r12
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  struct _KTHREAD *v30; // r15
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 *v35; // rax
  __int64 v36; // rcx
  bool v37; // di
  int v38; // r12d
  __int64 v39; // rcx
  struct _KTHREAD *v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 *v52; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v56; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v58; // zf
  __int64 v59; // rax
  int v60; // edi
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // ebx
  __int64 v65; // rcx
  __int64 v66; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v69; // rax
  int v70; // edi
  __int64 v71; // rcx
  __int64 v72; // rax
  unsigned int v73; // eax
  tagDomLock *v74; // rax
  _DWORD v75[6]; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v76; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v77; // [rsp+58h] [rbp-C0h]
  __int64 v78; // [rsp+68h] [rbp-B0h]
  __int64 v79; // [rsp+70h] [rbp-A8h] BYREF
  int v80; // [rsp+78h] [rbp-A0h]
  int v81; // [rsp+7Ch] [rbp-9Ch]
  __int64 v82; // [rsp+80h] [rbp-98h]
  __int64 v83; // [rsp+88h] [rbp-90h]
  __int64 v84; // [rsp+90h] [rbp-88h]
  __int64 v85; // [rsp+98h] [rbp-80h]
  _QWORD v86[15]; // [rsp+A0h] [rbp-78h] BYREF
  char v88; // [rsp+130h] [rbp+18h]

  v10 = a2;
  v12 = 0LL;
  v81 = 0;
  v76 = 0LL;
  v75[0] = 0;
  v86[2] = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v16, v15, v17),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v56),
        v58 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
        v10 = a2,
        v58) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
  }
  if ( a1 )
    v20 = a1[5] - *(_QWORD *)(v14 + 472);
  else
    v20 = 0LL;
  v81 = 0;
  v79 = v20;
  v80 = v10;
  v82 = a3;
  v84 = a5;
  v85 = a6;
  v83 = *a4;
  v21 = KeGetCurrentThread();
  v22 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v19)
    || (v59 = PsGetCurrentProcess(v24, v23, v25),
        v60 = PsGetProcessSessionIdEx(v59),
        v62 = PsGetCurrentThreadProcess(v61),
        v60 == (unsigned int)PsGetProcessSessionIdEx(v62)) )
  {
    v26 = (__int64 *)PsGetThreadWin32Thread(v21);
    if ( v26 )
      v22 = *v26;
  }
  v86[0] = *(_QWORD *)(v22 + 416);
  *(_QWORD *)(v22 + 416) = v86;
  v86[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v27 = *(_QWORD *)(v14 + 480);
  v77 = *(_OWORD *)(v27 + 64);
  v78 = *(_QWORD *)(v27 + 80);
  *(_QWORD *)(v27 + 72) = v20;
  if ( a1 )
    v28 = *a1;
  else
    v28 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 64LL) = v28;
  if ( a1 )
    v29 = *(_QWORD *)(a1[5] + 224);
  else
    v29 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 80LL) = v29;
  if ( gdwInAtomicOperation )
  {
    v29 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v30 = KeGetCurrentThread();
  v31 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v29)
    || (v63 = PsGetCurrentProcess(v33, v32, v34),
        v64 = PsGetProcessSessionIdEx(v63),
        v66 = PsGetCurrentThreadProcess(v65),
        v64 == (unsigned int)PsGetProcessSessionIdEx(v66)) )
  {
    v35 = (__int64 *)PsGetThreadWin32Thread(v30);
    if ( v35 )
      v31 = *v35;
  }
  v88 = *(_BYTE *)(v31 + 1480);
  *(_BYTE *)(v31 + 1480) = 0;
  if ( (v88 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v31 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v37 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v36);
  EtwTraceBeginCallback(39LL);
  v38 = KeUserModeCallback(39LL, &v79, 48LL, &v76, v75);
  EtwTraceEndCallback(39LL);
  if ( v37 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v40 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v39)
    || (v69 = PsGetCurrentProcess(v42, v41, v43),
        v70 = PsGetProcessSessionIdEx(v69),
        v72 = PsGetCurrentThreadProcess(v71),
        v70 == (unsigned int)PsGetProcessSessionIdEx(v72)) )
  {
    v44 = (__int64 *)PsGetThreadWin32Thread(v40);
    if ( v44 )
      v12 = *v44;
  }
  if ( (v88 & 1) != 0 )
  {
    v73 = DLT_THREADINFO::getDLT();
    v74 = (tagDomLock *)GetDomainLockRef(v73);
    tagDomLock::LockShared(v74);
    tagObjLock::LockExclusive((tagObjLock *)(v12 + 392));
  }
  *(_BYTE *)(v12 + 1480) = v88;
  ThreadUnlock1(v46, v45, v47);
  v48 = *(_QWORD *)(v14 + 480);
  *(_OWORD *)(v48 + 64) = v77;
  *(_QWORD *)(v48 + 80) = v78;
  if ( v38 >= 0 && v75[0] == 24 )
  {
    v49 = (__int64 *)v76;
    if ( v76 + 8 < v76 || v76 + 8 > MmUserProbeAddress )
      v49 = (__int64 *)MmUserProbeAddress;
    v50 = *v49;
    v86[3] = *v49;
    if ( a2 != 124 || a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v50;
    v51 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v51 || (*(_DWORD *)(v51 + 84) & 1) == 0 || *(__int64 **)(v51 + 96) != a4 )
    {
      v52 = *(__int64 **)(v76 + 16);
      if ( v52 + 1 < v52 || (unsigned __int64)(v52 + 1) > MmUserProbeAddress )
        v52 = (__int64 *)MmUserProbeAddress;
      *a4 = *v52;
      return v50;
    }
  }
  return 0LL;
}
