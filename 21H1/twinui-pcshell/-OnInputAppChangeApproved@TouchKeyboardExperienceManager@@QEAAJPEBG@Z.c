/*
 * XREFs of ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x18032C550
 * Callers:
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18033DB98 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F1A8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000F6F0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180067DB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UKBViewInfo@@@0@0AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x1801FB064 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18032577C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ??1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803263CC (--1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180327584 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1803277D4 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18032F310 (-StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18032FD1C (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 *     ?TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180332C74 (-TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppChangeApproved(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2)
{
  const char *v4; // r9
  char *v5; // rcx
  struct KBViewInfo **Ptr; // r15
  _BYTE *v7; // rsi
  struct KBViewInfo ***v8; // rax
  struct KBViewInfo **v9; // rbx
  struct KBViewInfo **v10; // r14
  __int64 v11; // r12
  int v12; // eax
  const unsigned __int16 *v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  int ModalExperienceAsync; // eax
  unsigned int v18; // ebx
  RTL_SRWLOCK *v20; // [rsp+20h] [rbp-198h] BYREF
  __int128 v21; // [rsp+28h] [rbp-190h] BYREF
  _BYTE *v22; // [rsp+38h] [rbp-180h]
  _QWORD v23[40]; // [rsp+40h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v23,
    (__int64)"InputAppActivationRequested");
  v23[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::StartActivity((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v23);
  try
  {
    v5 = (char *)&this[62];
    Ptr = 0LL;
    if ( this[64].Ptr )
    {
      v21 = 0LL;
      v7 = 0LL;
      v22 = 0LL;
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v20, this + 52);
      v8 = (struct KBViewInfo ***)&this[53];
      v9 = 0LL;
      if ( &v21 == (__int128 *)&this[53] )
      {
        v11 = *((_QWORD *)&v21 + 1);
        v10 = (struct KBViewInfo **)v21;
      }
      else
      {
        v9 = *v8;
        v10 = *v8;
        *(_QWORD *)&v21 = *v8;
        *v8 = 0LL;
        Ptr = (struct KBViewInfo **)this[54].Ptr;
        v11 = (__int64)Ptr;
        *((_QWORD *)&v21 + 1) = Ptr;
        this[54].Ptr = 0LL;
        v7 = this[55].Ptr;
        v22 = v7;
        this[55].Ptr = 0LL;
      }
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v20);
      while ( v9 != Ptr )
      {
        v12 = TouchKeyboardExperienceManager::DestroyView((TouchKeyboardExperienceManager *)this, *v9);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1BF,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v12);
        v9 += 2;
      }
      v13 = (const unsigned __int16 *)&this[62];
      if ( this[65].Ptr >= (PVOID)8 )
        v13 = *(const unsigned __int16 **)v13;
      v14 = TouchKeyboardExperienceManager::TerminateInputApplication((TouchKeyboardExperienceManager *)this, v13);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1C3,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v14);
      if ( v10 )
      {
        std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>((__int64)v10, v11);
        std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)((v7 - (_BYTE *)v10) & 0xFFFFFFFFFFFFFFF0uLL));
      }
      v5 = (char *)&this[62];
    }
    v15 = -1LL;
    v16 = -1LL;
    do
      ++v16;
    while ( a2[v16] );
  }
  catch ( ... )
  {
    LODWORD(v20) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x1CE,
                     (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                     v4);
    TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v23);
    return (unsigned int)v20;
  }
  if ( !v16 )
    goto LABEL_25;
  do
    ++v15;
  while ( a2[v15] );
  std::wstring::assign(v5, a2, v15);
  ModalExperienceAsync = TouchKeyboardExperienceManager::CreateModalExperienceAsync((TouchKeyboardExperienceManager *)this);
  v18 = ModalExperienceAsync;
  if ( ModalExperienceAsync < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CB,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ModalExperienceAsync);
    TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v23);
    return v18;
  }
  else
  {
LABEL_25:
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v23,
      0LL);
    TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v23);
    return 0LL;
  }
}
