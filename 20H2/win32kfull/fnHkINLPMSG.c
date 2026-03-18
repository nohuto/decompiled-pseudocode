/*
 * XREFs of fnHkINLPMSG @ 0x1C0057310
 * Callers:
 *     xxxCallCtfHook @ 0x1C004D454 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C0056CC0 (xxxHkCallHook.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C0123DC0 (RtlWCSMessageWParamCharToMB.c)
 *     _FreeTouchInputInfo @ 0x1C01DC3E0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0227790 (_FreeGestureInfo.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C025D4C0 (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall fnHkINLPMSG(__int64 a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5, int a6, _DWORD *a7)
{
  __int64 v9; // rsi
  unsigned int v10; // r14d
  struct _KTHREAD *CurrentThread; // r15
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rcx
  bool v18; // di
  int v19; // r12d
  __int64 v20; // rcx
  struct _KTHREAD *v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // rax
  __int64 *v26; // rax
  __int64 v27; // rdi
  ULONG64 v28; // rax
  __int128 *v29; // xmm0_8
  __int64 v30; // r9
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // r8
  __int64 v35; // r15
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v41; // rcx
  __int64 CurrentThreadProcess; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v45; // rax
  int v46; // edi
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned int v49; // eax
  tagDomLock *v50; // rax
  _QWORD *v51; // rdx
  __int64 v52; // [rsp+30h] [rbp-128h]
  __int64 v53; // [rsp+38h] [rbp-120h]
  unsigned __int64 v54; // [rsp+48h] [rbp-110h] BYREF
  __int64 v55; // [rsp+50h] [rbp-108h]
  __int64 v56; // [rsp+58h] [rbp-100h]
  _DWORD v57[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v58; // [rsp+78h] [rbp-E0h]
  __int128 v59; // [rsp+80h] [rbp-D8h]
  __int128 v60; // [rsp+90h] [rbp-C8h]
  _OWORD v61[2]; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-98h]
  __int64 v63; // [rsp+D0h] [rbp-88h]
  __int128 v64; // [rsp+E8h] [rbp-70h]
  volatile void *Address; // [rsp+F8h] [rbp-60h]
  __int128 v66; // [rsp+100h] [rbp-58h]
  __int128 *v67; // [rsp+110h] [rbp-48h]
  char v68; // [rsp+168h] [rbp+10h]
  int v69; // [rsp+170h] [rbp+18h] BYREF

  v9 = 0LL;
  v54 = 0LL;
  v69 = 0;
  v52 = 0LL;
  v53 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57[1] = 0;
  v59 = 0LL;
  v62 = 0LL;
  v57[0] = a1;
  v58 = a2;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 11) = 0;
  v60 = *a3;
  v61[0] = a3[1];
  v61[1] = a3[2];
  v10 = *((_DWORD *)a3 + 2);
  if ( ((v10 - 258) & 0xFFFFFFFB) != 0 || !a6 )
  {
    if ( v10 == 576 || ((v10 - 281) & 0xFFFFFFFD) == 0 )
    {
      v35 = *((_QWORD *)a3 + 2);
      v52 = v35;
      v36 = *((_QWORD *)a3 + 3);
      v53 = v36;
      LOBYTE(a2) = -1;
      v37 = HMValidateHandle(v36, a2);
      v38 = v37;
      if ( !v37
        || *((_DWORD *)a3 + 2) == 576 && *(_BYTE *)(_HMPheFromObject(v37) + 24) != 20
        || ((*((_DWORD *)a3 + 2) - 281) & 0xFFFFFFFD) == 0 && *(_BYTE *)(_HMPheFromObject(v38) + 24) != 21 )
      {
        return 0LL;
      }
      v55 = *(_QWORD *)(gptiCurrent + 704LL);
      v56 = *(_QWORD *)(gptiCurrent + 712LL);
      *(_QWORD *)(gptiCurrent + 704LL) = v36;
      a1 = gptiCurrent;
      *(_QWORD *)(gptiCurrent + 712LL) = v35;
    }
  }
  else
  {
    v52 = *((_QWORD *)a3 + 2);
    RtlWCSMessageWParamCharToMB(v10, v61);
  }
  *(_QWORD *)&v59 = a4;
  *((_QWORD *)&v59 + 1) = a5;
  LODWORD(v62) = *a7;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v41),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  v68 = *(_BYTE *)(v12 + 1480);
  *(_BYTE *)(v12 + 1480) = 0;
  if ( (v68 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v12 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v18 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v17);
  EtwTraceBeginCallback(47LL);
  v19 = KeUserModeCallback(47LL, v57, 88LL, &v54, &v69);
  EtwTraceEndCallback(47LL);
  if ( v18 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v21 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v20)
    || (v45 = PsGetCurrentProcess(v23, v22, v24),
        v46 = PsGetProcessSessionIdEx(v45),
        v48 = PsGetCurrentThreadProcess(v47),
        v46 == (unsigned int)PsGetProcessSessionIdEx(v48)) )
  {
    v25 = (__int64 *)PsGetThreadWin32Thread(v21);
    if ( v25 )
      v9 = *v25;
  }
  if ( (v68 & 1) != 0 )
  {
    v49 = DLT_THREADINFO::getDLT();
    v50 = (tagDomLock *)GetDomainLockRef(v49);
    tagDomLock::LockShared(v50);
    tagObjLock::LockExclusive((tagObjLock *)(v9 + 392));
  }
  *(_BYTE *)(v9 + 1480) = v68;
  if ( v10 == 576 || v10 == 281 || v10 == 283 )
  {
    *(_QWORD *)(gptiCurrent + 704LL) = v55;
    *(_QWORD *)(gptiCurrent + 712LL) = v56;
  }
  if ( v19 < 0 || v69 != 24 )
    return 0LL;
  v26 = (__int64 *)v54;
  if ( v54 + 8 < v54 || v54 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  v27 = *v26;
  v63 = *v26;
  v28 = v54;
  if ( v54 + 24 < v54 || v54 + 24 > MmUserProbeAddress )
    v28 = MmUserProbeAddress;
  v64 = *(_OWORD *)v28;
  v29 = *(__int128 **)(v28 + 16);
  Address = v29;
  v66 = v64;
  v67 = v29;
  ProbeForRead(v29, 0x38uLL, 4u);
  *a3 = *v29;
  a3[1] = v29[1];
  a3[2] = v29[2];
  *a7 ^= ((unsigned __int8)*a7 ^ (unsigned __int8)*((_DWORD *)v29 + 12)) & 0x10;
  v31 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v31 != 258 )
  {
    v32 = *((_DWORD *)a3 + 2);
    if ( (_DWORD)v31 != 262 )
      goto LABEL_32;
  }
  v32 = *((_DWORD *)a3 + 2);
  if ( !a6 )
    goto LABEL_32;
  v51 = a3 + 1;
  if ( *(_QWORD *)&v61[0] != *((_QWORD *)a3 + 2) )
  {
    RtlMBMessageWParamCharToWCS(v31, v51);
    v32 = *((_DWORD *)a3 + 2);
LABEL_32:
    v33 = v52;
    goto LABEL_33;
  }
  v33 = v52;
  *v51 = v52;
  v32 = v31;
LABEL_33:
  if ( v32 == 576 || v32 == 281 || v32 == 283 )
  {
    *((_DWORD *)a3 + 2) = v10;
    *((_QWORD *)a3 + 2) = v33;
    *((_QWORD *)a3 + 3) = v53;
  }
  else if ( v33 == 1 )
  {
    if ( v10 == 576 )
      FreeTouchInputInfo(v53, v10 - 576 + 1);
    if ( ((v10 - 281) & 0xFFFFFFFD) == 0 )
      FreeGestureInfo(v53, 1LL, v33, v30);
  }
  return v27;
}
