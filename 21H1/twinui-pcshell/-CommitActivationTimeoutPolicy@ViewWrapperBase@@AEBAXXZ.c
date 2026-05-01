/*
 * XREFs of ?CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ @ 0x1802ACDC4
 * Callers:
 *     ?SetActivationTimeoutPolicy@ViewWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802AF390 (-SetActivationTimeoutPolicy@ViewWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInterop@S.c)
 *     ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x1802B0F10 (-ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$CommitActivationTimeoutPolicy@AEBIAEBW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802A9B34 (--$CommitActivationTimeoutPolicy@AEBIAEBW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Inter.c)
 */

void __fastcall ViewWrapperBase::CommitActivationTimeoutPolicy(ViewWrapperBase *this)
{
  __int64 v2; // r9
  int *v3; // rdi
  __int64 v4; // r8

  v2 = *((_QWORD *)this + 24);
  if ( v2 )
  {
    v3 = (int *)((char *)this + 352);
    v4 = *((unsigned int *)this + 88);
    LOBYTE(v4) = (_DWORD)v4 == 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 21) + 504LL) + 96LL))(
      *(_QWORD *)(*((_QWORD *)this + 21) + 504LL),
      v2,
      v4);
    ViewManagerInteropTraceLogging::CommitActivationTimeoutPolicy<unsigned int const &,enum Windows::Internal::Shell::ViewManagerInterop::ActivationTimeoutPolicy const &>(
      (int *)this + 37,
      v3);
  }
}
