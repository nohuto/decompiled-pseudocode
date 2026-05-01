/*
 * XREFs of _lambda_6f7d8edcc79332d2588e530a2e25d22f_::operator() @ 0x1802DD32C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6f7d8edcc79332d2588e530a2e25d22f___::Run @ 0x1802DF160 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_6f7d8edcc79332d2588e530a2e25d22f___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800ADC64 (--$query@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_p.c)
 *     ??$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800AE6C8 (--$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_6f7d8edcc79332d2588e530a2e25d22f_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+20h]

  ***(_QWORD ***)a1 = 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 288LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelPreview>(
      (_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL),
      (__int64)&v10);
    v8 = 0;
    v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 48LL))(v10, &v8);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1094LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3);
    if ( !v8 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1095LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80004001LL);
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
      (_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL),
      (__int64)&v9);
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 296LL))(v9, **(_QWORD **)a1);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1098LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v4);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x44C,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
