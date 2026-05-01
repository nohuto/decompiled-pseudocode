/*
 * XREFs of _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x180057880
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___::Invoke @ 0x18007FF50 (CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___--Invoke.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180062A50 (-Stop@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18009509C (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18014DC88 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall lambda_4181134c5161f261fff3e61f273c9fd8_::operator()(__int64 a1)
{
  unsigned int i; // ebx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  int v9; // [rsp+20h] [rbp-78h]
  _BYTE v10[16]; // [rsp+30h] [rbp-68h] BYREF
  LPVOID lpMem; // [rsp+40h] [rbp-58h]
  char v12; // [rsp+48h] [rbp-50h]
  _QWORD **v13; // [rsp+50h] [rbp-48h] BYREF
  __int64 v14; // [rsp+60h] [rbp-38h]
  int v15; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v17; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+10h] BYREF

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 32),
    (wil::ActivityThreadWatcher *)v10);
  if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24), &v17) >= 0 )
  {
    for ( i = 0; i < v17; ++i )
    {
      v18 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 24) + 32LL))(
             *(_QWORD *)(a1 + 24),
             i,
             &GUID_727f9e97_76ee_497b_a942_b6371328485c,
             &v18) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v18 + 24LL))(
          v18,
          *(_QWORD *)a1,
          *(unsigned int *)(a1 + 8),
          *(_QWORD *)(a1 + 16));
      v3 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
    }
  }
  LODWORD(v4) = wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 32);
  if ( v15 )
  {
    if ( v15 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B0,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        v9);
    v15 = 0;
    v5 = v13;
    v4 = *v13;
    if ( *v13 )
    {
      while ( v4 != &v13 )
      {
        v5 = v4 + 2;
        v13 = (_QWORD **)(v4 + 2);
        v4 = (_QWORD *)v4[2];
        if ( !v4 )
          goto LABEL_14;
      }
      LODWORD(v4) = v14;
      *v5 = v14;
    }
LABEL_14:
    v13 = 0LL;
  }
  if ( v12 )
  {
    v6 = lpMem;
    ProcessHeap = GetProcessHeap();
    LODWORD(v4) = HeapFree(ProcessHeap, 0, v6);
  }
  return (int)v4;
}
