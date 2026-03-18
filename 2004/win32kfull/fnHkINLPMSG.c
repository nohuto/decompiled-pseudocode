/*
 * XREFs of fnHkINLPMSG @ 0x1C009B630
 * Callers:
 *     xxxCallCtfHook @ 0x1C0091874 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C009AFE0 (xxxHkCallHook.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C0122AD0 (RtlWCSMessageWParamCharToMB.c)
 *     _FreeTouchInputInfo @ 0x1C01DD0A0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0228620 (_FreeGestureInfo.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C025EAD4 (RtlMBMessageWParamCharToWCS.c)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // di
  int v21; // r12d
  __int64 v22; // rcx
  struct _KTHREAD *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 *v27; // rax
  __int64 *v28; // rax
  __int64 v29; // rdi
  ULONG64 v30; // rax
  __int128 *v31; // xmm0_8
  __int64 v32; // r9
  int v33; // ecx
  int v34; // eax
  __int64 v35; // r8
  __int64 v37; // r15
  unsigned __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v43; // rcx
  __int64 CurrentThreadProcess; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v47; // rax
  int v48; // edi
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int v51; // eax
  tagDomLock *v52; // rax
  __int64 v53; // [rsp+30h] [rbp-128h]
  unsigned __int64 v54; // [rsp+38h] [rbp-120h]
  unsigned __int64 v55; // [rsp+48h] [rbp-110h] BYREF
  __int64 v56; // [rsp+50h] [rbp-108h]
  __int64 v57; // [rsp+58h] [rbp-100h]
  _DWORD v58[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v59; // [rsp+78h] [rbp-E0h]
  __int128 v60; // [rsp+80h] [rbp-D8h]
  __int128 v61; // [rsp+90h] [rbp-C8h]
  _OWORD v62[2]; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-98h]
  __int64 v64; // [rsp+D0h] [rbp-88h]
  __int128 v65; // [rsp+E8h] [rbp-70h]
  volatile void *Address; // [rsp+F8h] [rbp-60h]
  __int128 v67; // [rsp+100h] [rbp-58h]
  __int128 *v68; // [rsp+110h] [rbp-48h]
  char v69; // [rsp+168h] [rbp+10h]
  int v70; // [rsp+170h] [rbp+18h] BYREF

  v9 = 0LL;
  v55 = 0LL;
  v70 = 0;
  v53 = 0LL;
  v54 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58[1] = 0;
  v60 = 0LL;
  v63 = 0LL;
  v58[0] = a1;
  v59 = a2;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 11) = 0;
  v61 = *a3;
  v62[0] = a3[1];
  v62[1] = a3[2];
  v10 = *((_DWORD *)a3 + 2);
  if ( ((v10 - 258) & 0xFFFFFFFB) != 0 || !a6 )
  {
    if ( v10 == 576 || ((v10 - 281) & 0xFFFFFFFD) == 0 )
    {
      v37 = *((_QWORD *)a3 + 2);
      v53 = v37;
      v38 = *((_QWORD *)a3 + 3);
      v54 = v38;
      v39 = HMValidateHandle(v38, 0xFFu);
      v40 = v39;
      if ( !v39
        || *((_DWORD *)a3 + 2) == 576 && *(_BYTE *)(_HMPheFromObject(v39) + 24) != 20
        || ((*((_DWORD *)a3 + 2) - 281) & 0xFFFFFFFD) == 0 && *(_BYTE *)(_HMPheFromObject(v40) + 24) != 21 )
      {
        return 0LL;
      }
      v56 = *(_QWORD *)(gptiCurrent + 696LL);
      v57 = *(_QWORD *)(gptiCurrent + 704LL);
      *(_QWORD *)(gptiCurrent + 696LL) = v38;
      a1 = gptiCurrent;
      *(_QWORD *)(gptiCurrent + 704LL) = v37;
    }
  }
  else
  {
    v53 = *((_QWORD *)a3 + 2);
    RtlWCSMessageWParamCharToMB(v10, v62);
  }
  *(_QWORD *)&v60 = a4;
  *((_QWORD *)&v60 + 1) = a5;
  LODWORD(v63) = *a7;
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
        CurrentThreadProcess = PsGetCurrentThreadProcess(v43),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  v69 = *(_BYTE *)(v12 + 1472);
  *(_BYTE *)(v12 + 1472) = 0;
  if ( (v69 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v12 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v20 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v18, v17, v19);
  EtwTraceBeginCallback(47LL);
  v21 = KeUserModeCallback(47LL, v58, 88LL, &v55, &v70);
  EtwTraceEndCallback(47LL);
  if ( v20 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v23 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v22)
    || (v47 = PsGetCurrentProcess(v25, v24, v26),
        v48 = PsGetProcessSessionIdEx(v47),
        v50 = PsGetCurrentThreadProcess(v49),
        v48 == (unsigned int)PsGetProcessSessionIdEx(v50)) )
  {
    v27 = (__int64 *)PsGetThreadWin32Thread(v23);
    if ( v27 )
      v9 = *v27;
  }
  if ( (v69 & 1) != 0 )
  {
    v51 = DLT_THREADINFO::getDLT();
    v52 = (tagDomLock *)GetDomainLockRef(v51);
    tagDomLock::LockShared(v52);
    tagObjLock::LockExclusive((tagObjLock *)(v9 + 384));
  }
  *(_BYTE *)(v9 + 1472) = v69;
  if ( v10 == 576 || v10 == 281 || v10 == 283 )
  {
    *(_QWORD *)(gptiCurrent + 696LL) = v56;
    *(_QWORD *)(gptiCurrent + 704LL) = v57;
  }
  if ( v21 < 0 || v70 != 24 )
    return 0LL;
  v28 = (__int64 *)v55;
  if ( v55 + 8 < v55 || v55 + 8 > MmUserProbeAddress )
    v28 = (__int64 *)MmUserProbeAddress;
  v29 = *v28;
  v64 = *v28;
  v30 = v55;
  if ( v55 + 24 < v55 || v55 + 24 > MmUserProbeAddress )
    v30 = MmUserProbeAddress;
  v65 = *(_OWORD *)v30;
  v31 = *(__int128 **)(v30 + 16);
  Address = v31;
  v67 = v65;
  v68 = v31;
  ProbeForRead(v31, 0x38uLL, 4u);
  *a3 = *v31;
  a3[1] = v31[1];
  a3[2] = v31[2];
  *a7 ^= ((unsigned __int8)*a7 ^ (unsigned __int8)*((_DWORD *)v31 + 12)) & 0x10;
  v33 = *((_DWORD *)a3 + 2);
  if ( v33 != 258 )
  {
    v34 = *((_DWORD *)a3 + 2);
    if ( v33 != 262 )
      goto LABEL_32;
  }
  v34 = *((_DWORD *)a3 + 2);
  if ( !a6 )
    goto LABEL_32;
  if ( *(_QWORD *)&v62[0] != *((_QWORD *)a3 + 2) )
  {
    RtlMBMessageWParamCharToWCS();
    v34 = *((_DWORD *)a3 + 2);
LABEL_32:
    v35 = v53;
    goto LABEL_33;
  }
  v35 = v53;
  *((_QWORD *)a3 + 2) = v53;
  v34 = v33;
LABEL_33:
  if ( v34 == 576 || v34 == 281 || v34 == 283 )
  {
    *((_DWORD *)a3 + 2) = v10;
    *((_QWORD *)a3 + 2) = v35;
    *((_QWORD *)a3 + 3) = v54;
  }
  else if ( v35 == 1 )
  {
    if ( v10 == 576 )
      FreeTouchInputInfo(v54, v10 - 576 + 1, 1LL, v32);
    if ( ((v10 - 281) & 0xFFFFFFFD) == 0 )
      FreeGestureInfo(v54, 1LL, v35, v32);
  }
  return v29;
}
