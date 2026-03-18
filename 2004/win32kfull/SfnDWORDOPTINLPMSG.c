/*
 * XREFs of SfnDWORDOPTINLPMSG @ 0x1C012DCE0
 * Callers:
 *     <none>
 * Callees:
 *     _W32ExceptionHandler @ 0x1C025E554 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnDWORDOPTINLPMSG(
        __int64 *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int128 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v17; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // r15
  struct _KTHREAD *v22; // r12
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  struct _KTHREAD *v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 *v44; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  bool v50; // di
  int v51; // r15d
  __int64 v52; // rcx
  struct _KTHREAD *v53; // r14
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  int v58; // edi
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 *v64; // rax
  unsigned int v65; // eax
  tagDomLock *v66; // rax
  __int64 v67; // rax
  __int64 *v68; // rax
  __int64 result; // rax
  _QWORD v70[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v71; // [rsp+48h] [rbp-C0h]
  __int64 v72; // [rsp+58h] [rbp-B0h]
  _QWORD v73[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v74; // [rsp+70h] [rbp-98h]
  unsigned __int128 v75; // [rsp+80h] [rbp-88h]
  __int128 v76; // [rsp+90h] [rbp-78h]
  __int128 v77; // [rsp+A0h] [rbp-68h]
  __int128 v78; // [rsp+B0h] [rbp-58h]
  __int64 v79; // [rsp+C0h] [rbp-48h]
  char v80; // [rsp+110h] [rbp+8h]
  int v82; // [rsp+120h] [rbp+18h] BYREF
  unsigned __int64 v83; // [rsp+128h] [rbp+20h] BYREF

  v9 = 0LL;
  v83 = 0LL;
  v82 = 0;
  v70[2] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v13, v12, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v17),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  if ( a1 )
    v21 = a1[5] - *(_QWORD *)(v11 + 464);
  else
    v21 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v73[0] = v21;
  v73[1] = a2;
  v74 = a3;
  if ( a4 )
  {
    *((_DWORD *)a4 + 3) = 0;
    *((_DWORD *)a4 + 11) = 0;
  }
  DWORD2(v74) = a4 != 0LL;
  if ( a4 )
  {
    v76 = *a4;
    v77 = a4[1];
    v78 = a4[2];
  }
  v75 = __PAIR128__(a6, a5);
  v22 = KeGetCurrentThread();
  v23 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v19)
    || (v27 = PsGetCurrentProcess(v25, v24, v26),
        v28 = PsGetProcessSessionIdEx(v27),
        v30 = PsGetCurrentThreadProcess(v29),
        v28 == (unsigned int)PsGetProcessSessionIdEx(v30)) )
  {
    v31 = (__int64 *)PsGetThreadWin32Thread(v22);
    if ( v31 )
      v23 = *v31;
  }
  v70[0] = *(_QWORD *)(v23 + 408);
  *(_QWORD *)(v23 + 408) = v70;
  v70[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v32 = *(_QWORD *)(v11 + 472);
  v71 = *(_OWORD *)(v32 + 64);
  v72 = *(_QWORD *)(v32 + 80);
  *(_QWORD *)(v32 + 72) = v21;
  v33 = 0LL;
  if ( a1 )
    v33 = *a1;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v33;
  if ( a1 )
    v34 = *(_QWORD *)(a1[5] + 224);
  else
    v34 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v34;
  if ( gdwInAtomicOperation )
  {
    v34 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v35 = KeGetCurrentThread();
  v36 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v34)
    || (v40 = PsGetCurrentProcess(v38, v37, v39),
        v41 = PsGetProcessSessionIdEx(v40),
        v43 = PsGetCurrentThreadProcess(v42),
        v41 == (unsigned int)PsGetProcessSessionIdEx(v43)) )
  {
    v44 = (__int64 *)PsGetThreadWin32Thread(v35);
    if ( v44 )
      v36 = *v44;
  }
  v80 = *(_BYTE *)(v36 + 1472);
  *(_BYTE *)(v36 + 1472) = 0;
  if ( (v80 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v36 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v50 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v48, v47, v49);
  EtwTraceBeginCallback(4LL);
  v51 = KeUserModeCallback(4LL, v73, 96LL, &v83, &v82);
  EtwTraceEndCallback(4LL);
  if ( v50 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v53 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v52)
    || (v57 = PsGetCurrentProcess(v55, v54, v56),
        v58 = PsGetProcessSessionIdEx(v57),
        v60 = PsGetCurrentThreadProcess(v59),
        v58 == (unsigned int)PsGetProcessSessionIdEx(v60)) )
  {
    v64 = (__int64 *)PsGetThreadWin32Thread(v53);
    if ( v64 )
      v9 = *v64;
  }
  if ( (v80 & 1) != 0 )
  {
    v65 = DLT_THREADINFO::getDLT();
    v66 = (tagDomLock *)GetDomainLockRef(v65);
    tagDomLock::LockShared(v66);
    tagObjLock::LockExclusive((tagObjLock *)(v9 + 384));
  }
  *(_BYTE *)(v9 + 1472) = v80;
  ThreadUnlock1(v62, v61, v63);
  v67 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v67 + 64) = v71;
  *(_QWORD *)(v67 + 80) = v72;
  if ( v51 < 0 || v82 != 24 )
    return 0LL;
  v68 = (__int64 *)v83;
  if ( v83 + 8 < v83 || v83 + 8 > MmUserProbeAddress )
    v68 = (__int64 *)MmUserProbeAddress;
  result = *v68;
  v79 = result;
  return result;
}
