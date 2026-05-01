/*
 * XREFs of ?ApplyPresenter@WindowWrapperBase@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x1802BD030
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C3A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a9f8b7cab6996de0caad01e4a93420c3___ @ 0x1802BB5F4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_a9f8b7cab6996de0caad01e4a93420c3.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::ApplyPresenter(__int64 a1, int a2)
{
  __int64 v3; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *(_QWORD *)(a1 + 272);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 200LL))(v3);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
      1u);
    *(_QWORD *)v9 = a1 - 16;
    *(_QWORD *)&v9[2] = &v12;
    CurrentThreadId = GetCurrentThreadId();
    v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a9f8b7cab6996de0caad01e4a93420c3___(
           v5,
           CurrentThreadId,
           (__int128 *)v9);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1455LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5B4,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return result;
}
