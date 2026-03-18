/*
 * XREFs of xxxMNStartMenuState @ 0x1C022347C
 * Callers:
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C0037938 (_PostTransformableMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C015920C (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E0494 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     NullifyLookasideRef @ 0x1C0222190 (NullifyLookasideRef.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0222234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C0222278 (MNAllocMenuState.c)
 *     MNAllocPopup @ 0x1C0222394 (MNAllocPopup.c)
 *     MNFreePopup @ 0x1C0222788 (MNFreePopup.c)
 *     MNMarkDelayedFreePopup @ 0x1C022295C (MNMarkDelayedFreePopup.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagMENUSTATE *__fastcall xxxMNStartMenuState(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  void *v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rax
  void *v11; // rax
  struct tagMENUSTATE *v12; // rax
  __int64 v13; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v22; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct tagMENUSTATE *v33; // rdi
  struct _KTHREAD *v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 *v43; // rax
  _QWORD *v44; // rcx
  _QWORD *v46[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v47[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v48[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v49[2]; // [rsp+60h] [rbp+7h] BYREF
  void *const *v50[2]; // [rsp+70h] [rbp+17h] BYREF
  __int128 v51; // [rsp+80h] [rbp+27h] BYREF
  __int64 v52; // [rsp+90h] [rbp+37h]
  struct tagMENUSTATE *v53; // [rsp+D8h] [rbp+7Fh] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v46, 0LL);
  v52 = 0LL;
  v51 = 0LL;
  if ( *(_QWORD *)(gptiCurrent + 600LL) )
    goto LABEL_38;
  v6 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 )
  {
    do
    {
      if ( (*(_BYTE *)(v6 + 30) & 8) != 0 )
        break;
      a1 = *(_QWORD *)(a1 + 104);
      v6 = *(_QWORD *)(a1 + 40);
    }
    while ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 );
  }
  else
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
    a1 = *(_QWORD *)(v6 + 120);
  }
  if ( !a1 )
    goto LABEL_38;
  v7 = safe_cast_fnid_to_PMENUWND(a1);
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 8) || *(_QWORD *)(v7 + 16) )
      goto LABEL_38;
  }
  v6 = *(_QWORD *)(a1 + 40);
  if ( ((*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 || !*(_QWORD *)(a1 + 168)) && (*(_BYTE *)(v6 + 30) & 8) == 0 )
    goto LABEL_38;
  v10 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v10 + 600) )
    goto LABEL_38;
  if ( v10 != v9 )
  {
    PostTransformableMessage((struct tagWND *)a1, 0x112u, v3, a3, 1);
LABEL_38:
    v33 = 0LL;
    goto LABEL_39;
  }
  v11 = MNAllocPopup(0, v8);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v46, (__int64)v11);
  if ( !*v46[0] )
    goto LABEL_38;
  v12 = (struct tagMENUSTATE *)MNAllocMenuState(v46);
  if ( !v12 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v50, *v46[0]);
    MNFreePopup(v50);
    if ( *(void *const *)v46[0] == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
    }
    else
    {
      v13 = *v46[0];
      NullifyLookasideRef(*(_QWORD *)(*v46[0] + 88LL));
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v13);
    }
    goto LABEL_38;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v53, v12);
  **(_DWORD **)v46[0] |= 1u;
  **(_DWORD **)v46[0] |= 2u;
  v48[1] = a1;
  v48[0] = *v46[0] + 8LL;
  HMAssignmentLock(v48);
  *(_DWORD *)(*v46[0] + 80LL) = -1;
  v49[1] = a1;
  v49[0] = *v46[0] + 16LL;
  HMAssignmentLock(v49);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v47, 0LL);
  MNMarkDelayedFreePopup(v46, v47);
  CurrentThread = KeGetCurrentThread();
  v15 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v16)
    || (CurrentProcess = PsGetCurrentProcess(v18, v17, v19),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v22),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v15 = *ThreadWin32Thread;
  }
  if ( v47[0] != gSmartObjNullRef && !--*(_DWORD *)(v47[0] + 8) )
  {
    if ( *(_BYTE *)(v47[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v47[0]);
  }
  v25 = *(_QWORD **)(v15 + 1464);
  if ( v25 )
    *(_QWORD *)(v15 + 1464) = *v25;
  *(_QWORD *)(*v46[0] + 64LL) = *v46[0];
  v26 = (_QWORD *)a1;
  v27 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v27 + 31) & 0xC0) == 0x40 )
  {
    do
      v26 = (_QWORD *)v26[13];
    while ( (*(_BYTE *)(v26[5] + 31LL) & 0xC0) == 0x40 );
  }
  v28 = v26[21];
  if ( v28 )
    **(_DWORD **)v46[0] ^= (**(_DWORD **)v46[0] ^ (*(_DWORD *)(*(_QWORD *)(v28 + 40) + 40LL) << 17)) & 0x400000;
  else
    **(_DWORD **)v46[0] = **(_DWORD **)v46[0] & 0xFFBFFFFF | ((*(_BYTE *)(v27 + 25) & 0x20) << 17);
  v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v51 = *(_QWORD *)(v29 + 408);
  *(_QWORD *)(v29 + 408) = &v51;
  *((_QWORD *)&v51 + 1) = a1;
  HMLockObject(a1);
  xxxSendMessage(a1, 0x211u, 0LL, 0LL);
  ThreadUnlock1(v31, v30, v32);
  v33 = v53;
  if ( !v53 || (unsigned int)xxxUnlockMenuStateInternal(v53, 0) )
    goto LABEL_38;
LABEL_39:
  v34 = KeGetCurrentThread();
  v35 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v6)
    || (v39 = PsGetCurrentProcess(v37, v36, v38),
        v40 = PsGetProcessSessionIdEx(v39),
        v42 = PsGetCurrentThreadProcess(v41),
        v40 == (unsigned int)PsGetProcessSessionIdEx(v42)) )
  {
    v43 = (__int64 *)PsGetThreadWin32Thread(v34);
    if ( v43 )
      v35 = *v43;
  }
  if ( v46[0] != (_QWORD *)gSmartObjNullRef && !--*((_DWORD *)v46[0] + 2) )
  {
    if ( *((_BYTE *)v46[0] + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v46[0]);
  }
  v44 = *(_QWORD **)(v35 + 1464);
  if ( v44 )
    *(_QWORD *)(v35 + 1464) = *v44;
  return v33;
}
