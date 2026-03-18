/*
 * XREFs of SfnDWORD @ 0x1C00A3480
 * Callers:
 *     xxxSendMessageCallback @ 0x1C0036784 (xxxSendMessageCallback.c)
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C00425BC (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     xxxReceiveMessage @ 0x1C0097200 (xxxReceiveMessage.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0098440 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x1C009AFE0 (xxxHkCallHook.c)
 *     xxxDispatchMessage @ 0x1C00A54AC (xxxDispatchMessage.c)
 *     xxxDefWindowProc @ 0x1C00AF770 (xxxDefWindowProc.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0151350 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall SfnDWORD(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // edi
  __int64 v10; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rcx
  __int64 v18; // r15
  struct _KTHREAD *v19; // r12
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct _KTHREAD *v28; // r15
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
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
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v53; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v55; // zf
  __int64 v56; // rax
  int v57; // edi
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // ebx
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v66; // rax
  int v67; // edi
  __int64 v68; // rcx
  __int64 v69; // rax
  unsigned int v70; // eax
  tagDomLock *v71; // rax
  unsigned __int64 v72; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v73; // [rsp+50h] [rbp-B8h]
  __int64 v74; // [rsp+60h] [rbp-A8h]
  __int64 v75; // [rsp+68h] [rbp-A0h] BYREF
  int v76; // [rsp+70h] [rbp-98h]
  int v77; // [rsp+74h] [rbp-94h]
  __int64 v78; // [rsp+78h] [rbp-90h]
  __int64 v79; // [rsp+80h] [rbp-88h]
  __int64 v80; // [rsp+88h] [rbp-80h]
  __int64 v81; // [rsp+90h] [rbp-78h]
  _QWORD v82[14]; // [rsp+98h] [rbp-70h] BYREF
  char v84; // [rsp+120h] [rbp+18h]
  int v85; // [rsp+128h] [rbp+20h] BYREF

  v8 = a2;
  v10 = 0LL;
  v77 = 0;
  v72 = 0LL;
  v85 = 0;
  v82[2] = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v53),
        v55 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
        v8 = a2,
        v55) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  if ( a1 )
    v18 = a1[5] - *(_QWORD *)(v12 + 464);
  else
    v18 = 0LL;
  v77 = 0;
  v75 = v18;
  v76 = v8;
  v78 = a3;
  v79 = a4;
  v80 = a5;
  v81 = a6;
  v19 = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v17)
    || (v56 = PsGetCurrentProcess(v22, v21, v23),
        v57 = PsGetProcessSessionIdEx(v56),
        v59 = PsGetCurrentThreadProcess(v58),
        v57 == (unsigned int)PsGetProcessSessionIdEx(v59)) )
  {
    v24 = (__int64 *)PsGetThreadWin32Thread(v19);
    if ( v24 )
      v20 = *v24;
  }
  v82[0] = *(_QWORD *)(v20 + 408);
  *(_QWORD *)(v20 + 408) = v82;
  v82[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v25 = *(_QWORD *)(v12 + 472);
  v73 = *(_OWORD *)(v25 + 64);
  v74 = *(_QWORD *)(v25 + 80);
  *(_QWORD *)(v25 + 72) = v18;
  if ( a1 )
    v26 = *a1;
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v26;
  if ( a1 )
    v27 = *(_QWORD *)(a1[5] + 224);
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v27;
  if ( gdwInAtomicOperation )
  {
    v27 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v28 = KeGetCurrentThread();
  v29 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v27)
    || (v60 = PsGetCurrentProcess(v31, v30, v32),
        v61 = PsGetProcessSessionIdEx(v60),
        v63 = PsGetCurrentThreadProcess(v62),
        v61 == (unsigned int)PsGetProcessSessionIdEx(v63)) )
  {
    v33 = (__int64 *)PsGetThreadWin32Thread(v28);
    if ( v33 )
      v29 = *v33;
  }
  v84 = *(_BYTE *)(v29 + 1472);
  *(_BYTE *)(v29 + 1472) = 0;
  if ( (v84 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v29 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v37 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v35, v34, v36);
  EtwTraceBeginCallback(2LL);
  v38 = KeUserModeCallback(2LL, &v75, 48LL, &v72, &v85);
  EtwTraceEndCallback(2LL);
  if ( v37 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v40 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v39)
    || (v66 = PsGetCurrentProcess(v42, v41, v43),
        v67 = PsGetProcessSessionIdEx(v66),
        v69 = PsGetCurrentThreadProcess(v68),
        v67 == (unsigned int)PsGetProcessSessionIdEx(v69)) )
  {
    v44 = (__int64 *)PsGetThreadWin32Thread(v40);
    if ( v44 )
      v10 = *v44;
  }
  if ( (v84 & 1) != 0 )
  {
    v70 = DLT_THREADINFO::getDLT();
    v71 = (tagDomLock *)GetDomainLockRef(v70);
    tagDomLock::LockShared(v71);
    tagObjLock::LockExclusive((tagObjLock *)(v10 + 384));
  }
  *(_BYTE *)(v10 + 1472) = v84;
  ThreadUnlock1(v46, v45, v47);
  v48 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v48 + 64) = v73;
  *(_QWORD *)(v48 + 80) = v74;
  if ( v38 < 0 || v85 != 24 )
    return 0LL;
  v49 = (__int64 *)v72;
  if ( v72 + 8 < v72 || v72 + 8 > MmUserProbeAddress )
    v49 = (__int64 *)MmUserProbeAddress;
  result = *v49;
  v82[3] = result;
  return result;
}
