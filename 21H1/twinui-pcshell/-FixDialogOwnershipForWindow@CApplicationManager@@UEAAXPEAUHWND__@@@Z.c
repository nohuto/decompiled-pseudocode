/*
 * XREFs of ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x18007B7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0a90169e8d33af7484c28adc304f7de6___ @ 0x1800920F8 (Windows--Internal--ComTaskPool--QueueTask__lambda_0a90169e8d33af7484c28adc304f7de6___.c)
 *     ?destroy@?$__func@V_lambda_99ba3b9c33d985ca735a1a650d7db78e_@@$$A6AJK@Z@__function@wistd@@UEAAXXZ @ 0x180092750 (-destroy@-$__func@V_lambda_99ba3b9c33d985ca735a1a650d7db78e_@@$$A6AJK@Z@__function@wistd@@UEAAXX.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplicationManager::FixDialogOwnershipForWindow(CApplicationManager *this, HWND a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)*((_QWORD *)this + 68);
  if ( v2 )
  {
    v3 = *v2;
    *(_QWORD *)v6 = a2;
    v7 = v2;
    (*(void (__fastcall **)(_QWORD *, HWND))(v3 + 8))(v2, a2);
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_0a90169e8d33af7484c28adc304f7de6___(v4, v6);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1003,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v5);
    wistd::__function::__func<_lambda_99ba3b9c33d985ca735a1a650d7db78e_,long (unsigned long)>::destroy(v6);
  }
}
