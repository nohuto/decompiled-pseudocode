/*
 * XREFs of SfnINOUTSTYLECHANGE @ 0x1C00EC5F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
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
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  bool v39; // di
  int v40; // r12d
  __int64 v41; // rcx
  struct _KTHREAD *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 *v54; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v58; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v60; // zf
  __int64 v61; // rax
  int v62; // edi
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // ebx
  __int64 v67; // rcx
  __int64 v68; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v71; // rax
  int v72; // edi
  __int64 v73; // rcx
  __int64 v74; // rax
  unsigned int v75; // eax
  tagDomLock *v76; // rax
  _DWORD v77[6]; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v78; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v79; // [rsp+58h] [rbp-C0h]
  __int64 v80; // [rsp+68h] [rbp-B0h]
  __int64 v81; // [rsp+70h] [rbp-A8h] BYREF
  int v82; // [rsp+78h] [rbp-A0h]
  int v83; // [rsp+7Ch] [rbp-9Ch]
  __int64 v84; // [rsp+80h] [rbp-98h]
  __int64 v85; // [rsp+88h] [rbp-90h]
  __int64 v86; // [rsp+90h] [rbp-88h]
  __int64 v87; // [rsp+98h] [rbp-80h]
  _QWORD v88[15]; // [rsp+A0h] [rbp-78h] BYREF
  char v90; // [rsp+130h] [rbp+18h]

  v10 = a2;
  v12 = 0LL;
  v83 = 0;
  v78 = 0LL;
  v77[0] = 0;
  v88[2] = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v16, v15, v17),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v58),
        v60 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
        v10 = a2,
        v60) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
  }
  if ( a1 )
    v20 = a1[5] - *(_QWORD *)(v14 + 464);
  else
    v20 = 0LL;
  v83 = 0;
  v81 = v20;
  v82 = v10;
  v84 = a3;
  v86 = a5;
  v87 = a6;
  v85 = *a4;
  v21 = KeGetCurrentThread();
  v22 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v19)
    || (v61 = PsGetCurrentProcess(v24, v23, v25),
        v62 = PsGetProcessSessionIdEx(v61),
        v64 = PsGetCurrentThreadProcess(v63),
        v62 == (unsigned int)PsGetProcessSessionIdEx(v64)) )
  {
    v26 = (__int64 *)PsGetThreadWin32Thread(v21);
    if ( v26 )
      v22 = *v26;
  }
  v88[0] = *(_QWORD *)(v22 + 408);
  *(_QWORD *)(v22 + 408) = v88;
  v88[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v27 = *(_QWORD *)(v14 + 472);
  v79 = *(_OWORD *)(v27 + 64);
  v80 = *(_QWORD *)(v27 + 80);
  *(_QWORD *)(v27 + 72) = v20;
  if ( a1 )
    v28 = *a1;
  else
    v28 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 64LL) = v28;
  if ( a1 )
    v29 = *(_QWORD *)(a1[5] + 224);
  else
    v29 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 80LL) = v29;
  if ( gdwInAtomicOperation )
  {
    v29 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v30 = KeGetCurrentThread();
  v31 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v29)
    || (v65 = PsGetCurrentProcess(v33, v32, v34),
        v66 = PsGetProcessSessionIdEx(v65),
        v68 = PsGetCurrentThreadProcess(v67),
        v66 == (unsigned int)PsGetProcessSessionIdEx(v68)) )
  {
    v35 = (__int64 *)PsGetThreadWin32Thread(v30);
    if ( v35 )
      v31 = *v35;
  }
  v90 = *(_BYTE *)(v31 + 1472);
  *(_BYTE *)(v31 + 1472) = 0;
  if ( (v90 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v31 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v39 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v37, v36, v38);
  EtwTraceBeginCallback(39LL);
  v40 = KeUserModeCallback(39LL, &v81, 48LL, &v78, v77);
  EtwTraceEndCallback(39LL);
  if ( v39 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v42 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v41)
    || (v71 = PsGetCurrentProcess(v44, v43, v45),
        v72 = PsGetProcessSessionIdEx(v71),
        v74 = PsGetCurrentThreadProcess(v73),
        v72 == (unsigned int)PsGetProcessSessionIdEx(v74)) )
  {
    v46 = (__int64 *)PsGetThreadWin32Thread(v42);
    if ( v46 )
      v12 = *v46;
  }
  if ( (v90 & 1) != 0 )
  {
    v75 = DLT_THREADINFO::getDLT();
    v76 = (tagDomLock *)GetDomainLockRef(v75);
    tagDomLock::LockShared(v76);
    tagObjLock::LockExclusive((tagObjLock *)(v12 + 384));
  }
  *(_BYTE *)(v12 + 1472) = v90;
  ThreadUnlock1(v48, v47, v49);
  v50 = *(_QWORD *)(v14 + 472);
  *(_OWORD *)(v50 + 64) = v79;
  *(_QWORD *)(v50 + 80) = v80;
  if ( v40 >= 0 && v77[0] == 24 )
  {
    v51 = (__int64 *)v78;
    if ( v78 + 8 < v78 || v78 + 8 > MmUserProbeAddress )
      v51 = (__int64 *)MmUserProbeAddress;
    v52 = *v51;
    v88[3] = *v51;
    if ( a2 != 124 || a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v52;
    v53 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v53 || (*(_DWORD *)(v53 + 84) & 1) == 0 || *(__int64 **)(v53 + 96) != a4 )
    {
      v54 = *(__int64 **)(v78 + 16);
      if ( v54 + 1 < v54 || (unsigned __int64)(v54 + 1) > MmUserProbeAddress )
        v54 = (__int64 *)MmUserProbeAddress;
      *a4 = *v54;
      return v52;
    }
  }
  return 0LL;
}
