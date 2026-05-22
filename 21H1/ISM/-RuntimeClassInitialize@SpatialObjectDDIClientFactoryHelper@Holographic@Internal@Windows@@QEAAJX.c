/*
 * XREFs of ?RuntimeClassInitialize@SpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@QEAAJXZ @ 0x1800D8B9C
 * Callers:
 *     ??$MakeAndInitialize@VSpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UISpatialObjectDDIClientFactory@234@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialObjectDDIClientFactory@Holographic@Internal@Windows@@@Z @ 0x1800D4ED8 (--$MakeAndInitialize@VSpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UISpatia.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180067514 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x18007CC1C (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::RuntimeClassInitialize(
        Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper *this)
{
  HMODULE LibraryW; // rax
  const char *v3; // r9
  HMODULE v4; // rcx
  __int64 v5; // rdx
  FARPROC ProcAddress; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LibraryW = LoadLibraryW(L"PerceptionDevice.dll");
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
    (HMODULE *)this + 9,
    LibraryW);
  v4 = (HMODULE)*((_QWORD *)this + 9);
  if ( !v4 )
  {
    v5 = 544LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (__int64)"onecoreuap\\internal\\analog\\inc\\SpatialObjectDDIClient.h",
             v3);
  }
  ProcAddress = GetProcAddress(v4, "CreateSpatialObjectDDIClientFactory");
  if ( !ProcAddress )
  {
    v5 = 547LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (__int64)"onecoreuap\\internal\\analog\\inc\\SpatialObjectDDIClient.h",
             v3);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 10);
  v8 = ((__int64 (__fastcall *)(__int64, char *))ProcAddress)(3LL, (char *)this + 80);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x225,
    (__int64)"onecoreuap\\internal\\analog\\inc\\SpatialObjectDDIClient.h",
    (const char *)(unsigned int)v8);
  return v9;
}
