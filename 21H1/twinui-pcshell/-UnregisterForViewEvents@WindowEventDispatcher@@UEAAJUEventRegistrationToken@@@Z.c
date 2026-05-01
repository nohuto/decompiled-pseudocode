/*
 * XREFs of ?UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x180298290
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180083704 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800860C4 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RestartManager_25418678@@@details@wil@@QEAA_NXZ @ 0x180093260 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RestartManager_25418678.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$shared_ptr@VUwpAppViewInfo@@@std@@QEAA@XZ @ 0x180178890 (--1-$shared_ptr@VUwpAppViewInfo@@@std@@QEAA@XZ.c)
 *     ?WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180298A34 (-WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::UnregisterForViewEvents(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  __int64 v4; // r15
  _QWORD *v5; // rdx
  __int64 *v6; // r14
  __int64 *v7; // r12
  __int64 *Ptr; // rdi
  std::_Ref_count_base *v9; // rcx
  _QWORD *v10; // r14
  _QWORD *v11; // r12
  __int64 v12; // rdi
  PVOID v13; // rdi
  __int64 (__fastcall *v14)(PVOID, _QWORD, _QWORD); // r13
  unsigned int v15; // eax
  int v16; // eax
  _QWORD *v17; // r14
  _QWORD *v18; // r12
  __int64 v19; // rdi
  PVOID v20; // rdi
  __int64 (__fastcall *v21)(PVOID, _QWORD, _QWORD); // r13
  unsigned int v22; // eax
  int v23; // eax
  unsigned int v24; // ebx
  const char *v25; // r9
  __int64 result; // rax
  int v27[4]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v28[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v29[16]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  ViewManagerInteropTraceLogging::WindowEventDispatcher_UnregisteringForWindowEvents();
  *(_OWORD *)v27 = 0LL;
  AcquireSRWLockExclusive(this + 59);
  v4 = ((char *)this[54].Ptr - (char *)this[53].Ptr) >> 4;
  try
  {
    while ( v4 )
    {
      v5 = (char *)this[53].Ptr + 16 * v4 - 16;
      if ( *(_QWORD *)(*v5 + 32LL) == a2.value )
      {
        std::shared_ptr<ViewEventRegistration>::operator=(v27, v5);
        v6 = (__int64 *)((char *)this[53].Ptr + 16 * v4);
        v7 = v6 - 2;
        Ptr = (__int64 *)this[54].Ptr;
        if ( v6 != Ptr )
        {
          do
          {
            std::shared_ptr<ViewEventRegistration>::operator=(v7, v6);
            v7 += 2;
            v6 += 2;
          }
          while ( v6 != Ptr );
          Ptr = (__int64 *)this[54].Ptr;
        }
        v9 = (std::_Ref_count_base *)*(Ptr - 1);
        if ( v9 )
        {
          std::_Ref_count_base::_Decref(v9);
          Ptr = (__int64 *)this[54].Ptr;
        }
        this[54].Ptr = Ptr - 2;
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_RestartManager_25418678>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_RestartManager_25418678>::GetImpl'::`2'::impl) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)v27 + 16LL) & 0x20) == 0 )
          {
            v10 = this[46].Ptr;
            v11 = this[47].Ptr;
            while ( v10 != v11 )
            {
              v12 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v10 + 264LL))(
                                             *v10,
                                             v28)
                              + 32LL);
              std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>((__int64)v28);
              if ( v12 == a2.value )
              {
                v13 = this[39].Ptr;
                v14 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v13 + 56LL);
                v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 288LL))(*v10);
                v16 = v14(v13, v15, 0LL);
                if ( v16 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x200,
                    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                    (const char *)(unsigned int)v16);
              }
              ++v10;
            }
          }
        }
        else
        {
          v17 = this[46].Ptr;
          v18 = this[47].Ptr;
          while ( v17 != v18 )
          {
            v19 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v17 + 264LL))(
                                           *v17,
                                           v29)
                            + 32LL);
            std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>((__int64)v29);
            if ( v19 == a2.value )
            {
              v20 = this[39].Ptr;
              v21 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v20 + 56LL);
              v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 288LL))(*v17);
              v23 = v21(v20, v22, 0LL);
              if ( v23 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x20D,
                  (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                  (const char *)(unsigned int)v23);
            }
            ++v17;
          }
        }
      }
      --v4;
    }
    v24 = *(_QWORD *)v27 == 0LL ? 0x80070490 : 0;
    if ( this != (RTL_SRWLOCK *)-472LL )
      ReleaseSRWLockExclusive(this + 59);
    std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>((__int64)v27);
    result = v24;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x215,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v25);
  }
  return result;
}
