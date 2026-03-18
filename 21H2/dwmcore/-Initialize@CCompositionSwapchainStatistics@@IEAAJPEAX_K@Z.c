/*
 * XREFs of ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z @ 0x18025E120
 * Callers:
 *     ?Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z @ 0x18025E02C (-Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSwapchainStatistics::Initialize(
        CCompositionSwapchainStatistics *this,
        void *a2,
        __int64 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  void *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v11,
    0LL);
  v6 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = OpenFlipConsumer(a2, (char *)this + 64, &v11);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x2Fu);
  else
    *((_QWORD *)this + 9) = a3;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v11);
  return v9;
}
