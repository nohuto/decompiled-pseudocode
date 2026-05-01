/*
 * XREFs of ?RuntimeClassInitialize@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAJPEAUITaskDataArbiter@23456@@Z @ 0x180239DB0
 * Callers:
 *     ??$MakeAndInitialize@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x18023847C (--$MakeAndInitialize@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@UIAppViewExecutionDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIAppViewExecutionDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1802383AC (--$GetActivationFactory@UIAppViewExecutionDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::RuntimeClassInitialize(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter *a2,
        unsigned int a3)
{
  const WCHAR *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter **)this + 11) != a2 )
  {
    v11 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v11 = (struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter *)*((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
  try
  {
    v5 = wil::GetActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewExecutionDataFactory>(
           (const WCHAR *)&v11,
           (__int64)a2,
           a3);
    v6 = *(_QWORD *)v5;
    *(_QWORD *)v5 = 0LL;
    v7 = *((_QWORD *)this + 34);
    *((_QWORD *)this + 34) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2B,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                           v8);
  }
  return result;
}
