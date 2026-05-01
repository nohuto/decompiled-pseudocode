/*
 * XREFs of ??$DoInvokeVoid@V?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@V_lambda_ded30c34a5b946bc18cf9caf8a4ec53d_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_ded30c34a5b946bc18cf9caf8a4ec53d_@@@Z @ 0x1802F6EA0
 * Callers:
 *     ??$InvokeVoid@V?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@3@PE$AAUIEvaluateItemEventArgs@5673@@EventSource@Platform@@QEAAXPEAUEventLock@Details@1@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@5678@@Z @ 0x1802F777C (--$InvokeVoid@V-$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Intern.c)
 * Callees:
 *     __Platform_ReleaseSRWLockShared @ 0x18008DD32 (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x18008DD6E (__Platform_AcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall Platform::EventSource::DoInvokeVoid<Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>,_lambda_ded30c34a5b946bc18cf9caf8a4ec53d_>(
        Platform::Details **a1,
        RTL_SRWLOCK *a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  struct Platform::Details::EventLock *v6; // r8
  Platform::Details *TargetArray; // rsi
  void *v8; // rdx
  unsigned int TargetArraySize; // r15d
  unsigned int i; // ebx
  _QWORD **TargetArrayEvent; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  __int64 *v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+28h] [rbp-60h] BYREF
  Platform::Details *v18; // [rsp+30h] [rbp-58h]
  _QWORD **v19; // [rsp+38h] [rbp-50h]
  _OWORD v20[3]; // [rsp+50h] [rbp-38h] BYREF

  v3 = a3;
  v18 = 0LL;
  v20[0] = 0LL;
  _Platform_AcquireSRWLockShared(a2);
  TargetArray = (Platform::Details *)Platform::Details::EventSourceGetTargetArray(*a1, v20, v6);
  _Platform_ReleaseSRWLockShared(a2);
  v18 = TargetArray;
  if ( TargetArray )
  {
    TargetArraySize = Platform::Details::EventSourceGetTargetArraySize(TargetArray, v8);
    LODWORD(v16) = TargetArraySize;
    for ( i = 0; ; ++i )
    {
      if ( i >= TargetArraySize )
        goto LABEL_10;
      v17 = 0LL;
      v19 = 0LL;
      TargetArrayEvent = (_QWORD **)Platform::Details::EventSourceGetTargetArrayEvent(
                                      TargetArray,
                                      (void *)i,
                                      (unsigned int)&_uuidof__AV__TypedEventHandler_PE_AAUISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__PE_AAUIEvaluateItemEventArgs_2345__Foundation_Windows__,
                                      &v17,
                                      v16);
      v19 = TargetArrayEvent;
      v12 = v3[1];
      v13 = *v3;
      if ( *TargetArrayEvent == &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable'{for `__abi_IUnknown'} )
        break;
      v14 = ((__int64 (__fastcall *)(_QWORD **, __int64, __int64))(*TargetArrayEvent)[3])(TargetArrayEvent, v13, v12);
      if ( v14 >= 0 )
        goto LABEL_6;
      __abi_WinRTraiseException(v14);
      v3 = a3;
      TargetArray = v18;
      TargetArraySize = (unsigned int)v16;
LABEL_9:
      ;
    }
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*TargetArrayEvent[37] + 8LL))(TargetArrayEvent[37], v13, v12);
LABEL_6:
    ((void (__fastcall *)(_QWORD **))(*TargetArrayEvent)[2])(TargetArrayEvent);
    goto LABEL_9;
  }
LABEL_10:
  if ( TargetArray )
    (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)TargetArray + 16LL))(TargetArray);
  v15 = v3[1];
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( *v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
}
