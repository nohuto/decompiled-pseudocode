/*
 * XREFs of ?SetWindowOwner@ViewWrapperBase@@UEAAJPEAUHWND__@@@Z @ 0x1802D1C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?PushDesiredZbidToWindow@ViewWrapperBase@@AEAAXXZ @ 0x1802D0620 (-PushDesiredZbidToWindow@ViewWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall ViewWrapperBase::SetWindowOwner(ViewWrapperBase *this, HWND a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v5; // rbp
  int v6; // ebx
  __int64 v7; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (RTL_SRWLOCK *)(*((_QWORD *)this + 21) + 280LL);
  AcquireSRWLockShared(v3);
  v5 = *((_QWORD *)this + 34);
  if ( v3 )
    ReleaseSRWLockShared(v3);
  if ( !v5 )
  {
    v6 = -2147023728;
    v7 = 1014LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, HWND))(**(_QWORD **)(*((_QWORD *)this + 21) + 464LL) + 24LL))(
         *(_QWORD *)(*((_QWORD *)this + 21) + 464LL),
         v5,
         a2);
  result = 2147943800LL;
  if ( v6 != -2147023496 )
  {
    if ( v6 < 0 )
    {
      v7 = 1028LL;
      goto LABEL_5;
    }
    if ( !a2 )
      ViewWrapperBase::PushDesiredZbidToWindow(this);
    return 0LL;
  }
  return result;
}
