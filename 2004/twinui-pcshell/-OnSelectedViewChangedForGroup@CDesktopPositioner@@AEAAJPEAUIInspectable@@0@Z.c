/*
 * XREFs of ?OnSelectedViewChangedForGroup@CDesktopPositioner@@AEAAJPEAUIInspectable@@0@Z @ 0x1803EC7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C8B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BB8A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::OnSelectedViewChangedForGroup(
        CDesktopPositioner *this,
        struct IInspectable *a2,
        struct IInspectable *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // r14
  int v6; // r15d
  unsigned int v7; // ebx
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rbx
  int v9; // eax
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  struct IUnknown *v16; // rbx
  HRESULT (__stdcall *v17)(IUnknown *, const IID *const, void **); // rdi
  int v18; // eax
  __int64 v19; // rdx
  struct IUnknown *v20; // rbx
  ULONG (__stdcall *AddRef)(IUnknown *); // rdi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v25; // [rsp+20h] [rbp-40h] BYREF
  struct IUnknown *v26; // [rsp+28h] [rbp-38h] BYREF
  __int64 v27[2]; // [rsp+30h] [rbp-30h] BYREF
  int v28; // [rsp+40h] [rbp-20h]
  __int128 v29; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v5 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 184) & -(__int64)(this != 0LL));
  v27[1] = (__int64)v5;
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v5, 1);
  v28 = v6;
  if ( !*((_QWORD *)this + 39) )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB2D,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_30;
  }
  v26 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
  v9 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, struct IUnknown **))QueryInterface)(
         a2,
         &GUID_c8708459_3036_4e1a_8555_56cebb48e438,
         &v26);
  v7 = v9;
  if ( v9 >= 0 )
  {
    v29 = 0LL;
    v10 = (__int64 *)*((_QWORD *)this + 42);
    v11 = *v10;
    v25 = *v10;
    while ( (__int64 *)v11 != v10 )
    {
      if ( (unsigned int)SHIsSameObject(v26, *(struct IUnknown **)(v11 + 48)) )
      {
        v29 = *(_OWORD *)(v11 + 32);
        break;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
        &v25,
        v12,
        v13,
        v14);
      v11 = v25;
    }
    v15 = v29 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)v29 == *(_QWORD *)&GUID_NULL.Data1 )
      v15 = *((_QWORD *)&v29 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( !v15 )
    {
      v7 = 0;
      goto LABEL_29;
    }
    v27[0] = 0LL;
    v16 = v26;
    v17 = v26->lpVtbl[2].QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v27);
    v18 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v17)(v16, v27);
    v7 = v18;
    if ( v18 < 0 )
    {
      v19 = 2884LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v18);
LABEL_28:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v27);
      goto LABEL_29;
    }
    if ( v27[0] )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(**((_QWORD **)this + 39) + 96LL))(
              *((_QWORD *)this + 39),
              v27[0],
              &v29);
      v7 = v18;
      if ( v18 < 0 )
      {
        v19 = 2888LL;
        goto LABEL_19;
      }
LABEL_27:
      v7 = 0;
      goto LABEL_28;
    }
    v25 = 0LL;
    v20 = v26;
    AddRef = v26->lpVtbl[2].AddRef;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v22 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))AddRef)(v20, &v25);
    v7 = v22;
    if ( v22 >= 0 )
    {
      if ( v25
        || (v22 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 39) + 112LL))(
                    *((_QWORD *)this + 39),
                    &v29),
            v7 = v22,
            v22 >= 0) )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        goto LABEL_27;
      }
      v23 = 2902LL;
    }
    else
    {
      v23 = 2896LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB30,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v9);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
LABEL_30:
  if ( v6 >= 0 )
    LeaveCriticalSection(v5);
  return v7;
}
