/*
 * XREFs of ?GetForCurrentThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x180108490
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002828C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VMPCManagerClient@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x1801065A0 (--$MakeAndInitialize@VMPCManagerClient@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@$$.c)
 *     ??$com_weak_copy_failfast@AEAV?$com_ptr_t@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAV?$com_ptr_t@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@Uerr_exception_policy@wil@@@0@@Z @ 0x1801066E8 (--$com_weak_copy_failfast@AEAV-$com_ptr_t@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCManagerClientFactory::GetForCurrentThread(
        MPCManagerClientFactory *this,
        struct Windows::Internal::Input::MPCManager::IMPCManagerClient **a2)
{
  HRESULT ApartmentType; // eax
  int v4; // eax
  bool v5; // bl
  struct Windows::Internal::Input::MPCManager::IMPCManagerClient *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 (__fastcall ***v15[2])(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 pAptType; // [rsp+60h] [rbp+30h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+68h] [rbp+38h] BYREF

  ApartmentType = CoGetApartmentType((APTTYPE *)&pAptType, &pAptQualifier);
  if ( ApartmentType < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      63LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\precomp.h",
      (const char *)(unsigned int)ApartmentType);
    __debugbreak();
  }
  if ( !(_DWORD)pAptType || (_DWORD)pAptType == 3 )
    goto LABEL_9;
  pAptType = 0LL;
  v4 = CoreUIOpenExisting(&pAptType);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      70LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\precomp.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = pAptType != 0;
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&pAptType);
  if ( v5 )
  {
LABEL_9:
    v7 = 0LL;
    v8 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
    v9 = *(_QWORD *)(v8 + 312);
    if ( !v9 )
      goto LABEL_14;
    v15[0] = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)v9 + 24LL))(
            v9,
            &GUID_14d766a1_12f3_404c_ae87_c566719dbe22,
            v15);
    v7 = (struct Windows::Internal::Input::MPCManager::IMPCManagerClient *)v15[0];
    if ( v10 >= 0 && !v15[0] )
      v10 = -2147023728;
    if ( v10 >= 0 )
    {
LABEL_14:
      v15[0] = 0LL;
      if ( v7 )
        (*(void (__fastcall **)(struct Windows::Internal::Input::MPCManager::IMPCManagerClient *))(*(_QWORD *)v7 + 16LL))(v7);
      v11 = Microsoft::WRL::Details::MakeAndInitialize<MPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerClient,>(v15);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          406LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
          (const char *)(unsigned int)v11);
        __debugbreak();
      }
      v12 = wil::com_weak_copy_failfast<wil::com_ptr_t<Windows::Internal::Input::MPCManager::IMPCManagerClient,wil::err_exception_policy> &>(
              &pAptType,
              v15);
      v13 = *v12;
      *v12 = 0LL;
      v14 = *(_QWORD *)(v8 + 312);
      *(_QWORD *)(v8 + 312) = v13;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      if ( pAptType )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)pAptType + 16LL))(pAptType);
      v7 = (struct Windows::Internal::Input::MPCManager::IMPCManagerClient *)v15[0];
    }
    v15[0] = 0LL;
    *a2 = v7;
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)v15);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x191,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)0x8001010ELL);
    return 2147549454LL;
  }
}
