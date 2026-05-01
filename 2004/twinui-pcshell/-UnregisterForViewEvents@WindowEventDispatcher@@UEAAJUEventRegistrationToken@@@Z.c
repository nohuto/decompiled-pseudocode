/*
 * XREFs of ?UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x1802B9ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180083EA4 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800867B4 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802BA5D4 (-WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::UnregisterForViewEvents(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  const char *v4; // r9
  __int64 v5; // r14
  std::_Ref_count_base *v6; // r15
  _QWORD *v7; // rdx
  __int64 *v8; // r15
  __int64 *v9; // r12
  __int64 *Ptr; // rsi
  std::_Ref_count_base *v11; // rcx
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // r12
  PVOID v15; // r12
  unsigned int v16; // eax
  int v17; // eax
  __int64 result; // rax
  std::_Ref_count_base *v19[2]; // [rsp+20h] [rbp-58h] BYREF
  char v20[8]; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v21; // [rsp+38h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 (__fastcall *v23)(PVOID, _QWORD, _QWORD); // [rsp+80h] [rbp+8h]
  _QWORD *v24; // [rsp+90h] [rbp+18h]

  ViewManagerInteropTraceLogging::WindowEventDispatcher_UnregisteringForWindowEvents();
  *(_OWORD *)v19 = 0LL;
  AcquireSRWLockExclusive(this + 59);
  v5 = ((char *)this[54].Ptr - (char *)this[53].Ptr) >> 4;
  v6 = 0LL;
  try
  {
    while ( v5 )
    {
      v7 = (char *)this[53].Ptr + 16 * v5 - 16;
      if ( *(_QWORD *)(*v7 + 32LL) == a2.value )
      {
        std::shared_ptr<ViewEventRegistration>::operator=(v19, v7);
        v8 = (__int64 *)((char *)this[53].Ptr + 16 * v5);
        v9 = v8 - 2;
        Ptr = (__int64 *)this[54].Ptr;
        if ( v8 != Ptr )
        {
          do
          {
            std::shared_ptr<ViewEventRegistration>::operator=(v9, v8);
            v9 += 2;
            v8 += 2;
          }
          while ( v8 != Ptr );
          Ptr = (__int64 *)this[54].Ptr;
        }
        v11 = (std::_Ref_count_base *)*(Ptr - 1);
        if ( v11 )
        {
          std::_Ref_count_base::_Decref(v11);
          Ptr = (__int64 *)this[54].Ptr;
        }
        this[54].Ptr = Ptr - 2;
        v6 = v19[0];
        if ( (*((_BYTE *)v19[0] + 16) & 0x20) == 0 )
        {
          v12 = this[46].Ptr;
          v13 = this[47].Ptr;
          v24 = v13;
          while ( v12 != v13 )
          {
            v14 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v12 + 264LL))(
                                           *v12,
                                           v20)
                            + 32LL);
            if ( v21 )
              std::_Ref_count_base::_Decref(v21);
            if ( v14 == a2.value )
            {
              v15 = this[39].Ptr;
              v23 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v15 + 56LL);
              v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 288LL))(*v12);
              v17 = v23(v15, v16, 0LL);
              if ( v17 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x1FD,
                  (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                  (const char *)(unsigned int)v17);
            }
            ++v12;
            v13 = v24;
          }
        }
      }
      --v5;
    }
    if ( this != (RTL_SRWLOCK *)-472LL )
      ReleaseSRWLockExclusive(this + 59);
    if ( v19[1] )
      std::_Ref_count_base::_Decref(v19[1]);
    result = v6 == 0LL ? 0x80070490 : 0;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x205,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v4);
  }
  return result;
}
