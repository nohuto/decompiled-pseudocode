/*
 * XREFs of SfnDWORD @ 0x1C004CB10
 * Callers:
 *     xxxSendMessageCallback @ 0x1C0039C44 (xxxSendMessageCallback.c)
 *     xxxDispatchMessage @ 0x1C004CFF0 (xxxDispatchMessage.c)
 *     xxxReceiveMessage @ 0x1C0052EE0 (xxxReceiveMessage.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0054120 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x1C0056CC0 (xxxHkCallHook.c)
 *     xxxDefWindowProc @ 0x1C00743E0 (xxxDefWindowProc.c)
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C007A5CC (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0153C80 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
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
  __int64 v34; // rcx
  bool v35; // di
  int v36; // r12d
  __int64 v37; // rcx
  struct _KTHREAD *v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 *v47; // rax
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v51; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v53; // zf
  __int64 v54; // rax
  int v55; // edi
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // ebx
  __int64 v60; // rcx
  __int64 v61; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v64; // rax
  int v65; // edi
  __int64 v66; // rcx
  __int64 v67; // rax
  unsigned int v68; // eax
  tagDomLock *v69; // rax
  unsigned __int64 v70; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v71; // [rsp+50h] [rbp-B8h]
  __int64 v72; // [rsp+60h] [rbp-A8h]
  __int64 v73; // [rsp+68h] [rbp-A0h] BYREF
  int v74; // [rsp+70h] [rbp-98h]
  int v75; // [rsp+74h] [rbp-94h]
  __int64 v76; // [rsp+78h] [rbp-90h]
  __int64 v77; // [rsp+80h] [rbp-88h]
  __int64 v78; // [rsp+88h] [rbp-80h]
  __int64 v79; // [rsp+90h] [rbp-78h]
  _QWORD v80[14]; // [rsp+98h] [rbp-70h] BYREF
  char v82; // [rsp+120h] [rbp+18h]
  int v83; // [rsp+128h] [rbp+20h] BYREF

  v8 = a2;
  v10 = 0LL;
  v75 = 0;
  v70 = 0LL;
  v83 = 0;
  v80[2] = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v51),
        v53 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
        v8 = a2,
        v53) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  if ( a1 )
    v18 = a1[5] - *(_QWORD *)(v12 + 472);
  else
    v18 = 0LL;
  v75 = 0;
  v73 = v18;
  v74 = v8;
  v76 = a3;
  v77 = a4;
  v78 = a5;
  v79 = a6;
  v19 = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v17)
    || (v54 = PsGetCurrentProcess(v22, v21, v23),
        v55 = PsGetProcessSessionIdEx(v54),
        v57 = PsGetCurrentThreadProcess(v56),
        v55 == (unsigned int)PsGetProcessSessionIdEx(v57)) )
  {
    v24 = (__int64 *)PsGetThreadWin32Thread(v19);
    if ( v24 )
      v20 = *v24;
  }
  v80[0] = *(_QWORD *)(v20 + 416);
  *(_QWORD *)(v20 + 416) = v80;
  v80[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v25 = *(_QWORD *)(v12 + 480);
  v71 = *(_OWORD *)(v25 + 64);
  v72 = *(_QWORD *)(v25 + 80);
  *(_QWORD *)(v25 + 72) = v18;
  if ( a1 )
    v26 = *a1;
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v26;
  if ( a1 )
    v27 = *(_QWORD *)(a1[5] + 224);
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v27;
  if ( gdwInAtomicOperation )
  {
    v27 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v28 = KeGetCurrentThread();
  v29 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v27)
    || (v58 = PsGetCurrentProcess(v31, v30, v32),
        v59 = PsGetProcessSessionIdEx(v58),
        v61 = PsGetCurrentThreadProcess(v60),
        v59 == (unsigned int)PsGetProcessSessionIdEx(v61)) )
  {
    v33 = (__int64 *)PsGetThreadWin32Thread(v28);
    if ( v33 )
      v29 = *v33;
  }
  v82 = *(_BYTE *)(v29 + 1480);
  *(_BYTE *)(v29 + 1480) = 0;
  if ( (v82 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v29 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v35 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v34);
  EtwTraceBeginCallback(2LL);
  v36 = KeUserModeCallback(2LL, &v73, 48LL, &v70, &v83);
  EtwTraceEndCallback(2LL);
  if ( v35 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v38 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v37)
    || (v64 = PsGetCurrentProcess(v40, v39, v41),
        v65 = PsGetProcessSessionIdEx(v64),
        v67 = PsGetCurrentThreadProcess(v66),
        v65 == (unsigned int)PsGetProcessSessionIdEx(v67)) )
  {
    v42 = (__int64 *)PsGetThreadWin32Thread(v38);
    if ( v42 )
      v10 = *v42;
  }
  if ( (v82 & 1) != 0 )
  {
    v68 = DLT_THREADINFO::getDLT();
    v69 = (tagDomLock *)GetDomainLockRef(v68);
    tagDomLock::LockShared(v69);
    tagObjLock::LockExclusive((tagObjLock *)(v10 + 392));
  }
  *(_BYTE *)(v10 + 1480) = v82;
  ThreadUnlock1(v44, v43, v45);
  v46 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v46 + 64) = v71;
  *(_QWORD *)(v46 + 80) = v72;
  if ( v36 < 0 || v83 != 24 )
    return 0LL;
  v47 = (__int64 *)v70;
  if ( v70 + 8 < v70 || v70 + 8 > MmUserProbeAddress )
    v47 = (__int64 *)MmUserProbeAddress;
  result = *v47;
  v80[3] = result;
  return result;
}
