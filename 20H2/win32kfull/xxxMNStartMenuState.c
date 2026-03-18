/*
 * XREFs of xxxMNStartMenuState @ 0x1C02225EC
 * Callers:
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C001A3A8 (_PostTransformableMessage.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C015CBE4 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DF7D4 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     NullifyLookasideRef @ 0x1C0221300 (NullifyLookasideRef.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C02213A4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C02213E8 (MNAllocMenuState.c)
 *     MNAllocPopup @ 0x1C0221504 (MNAllocPopup.c)
 *     MNFreePopup @ 0x1C02218F8 (MNFreePopup.c)
 *     MNMarkDelayedFreePopup @ 0x1C0221ACC (MNMarkDelayedFreePopup.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagMENUSTATE *__fastcall xxxMNStartMenuState(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  void *v11; // rdx
  __int64 v12; // rax
  void *v13; // rax
  struct tagMENUSTATE *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v27; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct tagMENUSTATE *v38; // rdi
  struct _KTHREAD *v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  int v45; // ebx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 *v48; // rax
  _QWORD *v49; // rcx
  _QWORD *v51[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v52[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v53[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v54[2]; // [rsp+60h] [rbp+7h] BYREF
  void **v55[2]; // [rsp+70h] [rbp+17h] BYREF
  __int128 v56; // [rsp+80h] [rbp+27h] BYREF
  __int64 v57; // [rsp+90h] [rbp+37h]
  struct tagMENUSTATE *v58; // [rsp+D8h] [rbp+7Fh] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v51, 0LL);
  v57 = 0LL;
  v56 = 0LL;
  if ( *(_QWORD *)(gptiCurrent + 608LL) )
    goto LABEL_38;
  v7 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v7 + 31) & 0xC0) == 0x40 )
  {
    do
    {
      if ( (*(_BYTE *)(v7 + 30) & 8) != 0 )
        break;
      a1 = *(_QWORD *)(a1 + 104);
      v7 = *(_QWORD *)(a1 + 40);
    }
    while ( (*(_BYTE *)(v7 + 31) & 0xC0) == 0x40 );
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL);
    a1 = *(_QWORD *)(v7 + 120);
  }
  if ( !a1 )
    goto LABEL_38;
  v10 = safe_cast_fnid_to_PMENUWND(a1, v6, v8, v9);
  if ( v10 )
  {
    if ( *(_QWORD *)(v10 + 8) || *(_QWORD *)(v10 + 16) )
      goto LABEL_38;
  }
  v7 = *(_QWORD *)(a1 + 40);
  if ( ((*(_BYTE *)(v7 + 31) & 0xC0) == 0x40 || !*(_QWORD *)(a1 + 168)) && (*(_BYTE *)(v7 + 30) & 8) == 0 )
    goto LABEL_38;
  v12 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v12 + 608) )
    goto LABEL_38;
  if ( v12 != gptiCurrent )
  {
    PostTransformableMessage((struct tagWND *)a1, 0x112u, v3, a3, 1);
LABEL_38:
    v38 = 0LL;
    goto LABEL_39;
  }
  v13 = MNAllocPopup(0, v11);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v51, (__int64)v13);
  if ( !*v51[0] )
    goto LABEL_38;
  v14 = (struct tagMENUSTATE *)MNAllocMenuState(v51);
  if ( !v14 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v55, *v51[0]);
    MNFreePopup(v55, v15, v16, v17);
    if ( *(void *const *)v51[0] == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
    }
    else
    {
      v18 = *v51[0];
      NullifyLookasideRef(*(_QWORD *)(*v51[0] + 88LL));
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v18);
    }
    goto LABEL_38;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v58, v14);
  **(_DWORD **)v51[0] |= 1u;
  **(_DWORD **)v51[0] |= 2u;
  v53[1] = a1;
  v53[0] = *v51[0] + 8LL;
  HMAssignmentLock(v53);
  *(_DWORD *)(*v51[0] + 80LL) = -1;
  v54[1] = a1;
  v54[0] = *v51[0] + 16LL;
  HMAssignmentLock(v54);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v52, 0LL);
  MNMarkDelayedFreePopup(v51, v52);
  CurrentThread = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v21)
    || (CurrentProcess = PsGetCurrentProcess(v23, v22, v24),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v27),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v20 = *ThreadWin32Thread;
  }
  if ( v52[0] != gSmartObjNullRef && !--*(_DWORD *)(v52[0] + 8) )
  {
    if ( *(_BYTE *)(v52[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v52[0]);
  }
  v30 = *(_QWORD **)(v20 + 1472);
  if ( v30 )
    *(_QWORD *)(v20 + 1472) = *v30;
  *(_QWORD *)(*v51[0] + 64LL) = *v51[0];
  v31 = (_QWORD *)a1;
  v32 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v32 + 31) & 0xC0) == 0x40 )
  {
    do
      v31 = (_QWORD *)v31[13];
    while ( (*(_BYTE *)(v31[5] + 31LL) & 0xC0) == 0x40 );
  }
  v33 = v31[21];
  if ( v33 )
    **(_DWORD **)v51[0] ^= (**(_DWORD **)v51[0] ^ (*(_DWORD *)(*(_QWORD *)(v33 + 40) + 40LL) << 17)) & 0x400000;
  else
    **(_DWORD **)v51[0] = **(_DWORD **)v51[0] & 0xFFBFFFFF | ((*(_BYTE *)(v32 + 25) & 0x20) << 17);
  v34 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v56 = *(_QWORD *)(v34 + 416);
  *(_QWORD *)(v34 + 416) = &v56;
  *((_QWORD *)&v56 + 1) = a1;
  HMLockObject(a1);
  xxxSendMessage(a1, 0x211u, 0LL, 0LL);
  ThreadUnlock1(v36, v35, v37);
  v38 = v58;
  if ( !v58 || (unsigned int)xxxUnlockMenuStateInternal(v58, 0) )
    goto LABEL_38;
LABEL_39:
  v39 = KeGetCurrentThread();
  v40 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v7)
    || (v44 = PsGetCurrentProcess(v42, v41, v43),
        v45 = PsGetProcessSessionIdEx(v44),
        v47 = PsGetCurrentThreadProcess(v46),
        v45 == (unsigned int)PsGetProcessSessionIdEx(v47)) )
  {
    v48 = (__int64 *)PsGetThreadWin32Thread(v39);
    if ( v48 )
      v40 = *v48;
  }
  if ( v51[0] != (_QWORD *)gSmartObjNullRef && !--*((_DWORD *)v51[0] + 2) )
  {
    if ( *((_BYTE *)v51[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v51[0]);
  }
  v49 = *(_QWORD **)(v40 + 1472);
  if ( v49 )
    *(_QWORD *)(v40 + 1472) = *v49;
  return v38;
}
