/*
 * XREFs of ?TryFindMatchingAppInGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAU2@@Z @ 0x18027DDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BD778 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?GetAumid@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18026EB44 (-GetAumid@@YA-AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall TabViewManager::TryFindMatchingAppInGroup(
        TabViewManager *this,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        struct IApplicationView **a4)
{
  __int64 *v7; // rdi
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rax
  int (__fastcall *v12)(struct IApplicationView *, PCWSTR, int *); // rsi
  PCWSTR StringRawBuffer; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rdx
  HSTRING string; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+28h] [rbp-38h] BYREF
  int v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 i; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  *a4 = 0LL;
  v7 = (__int64 *)*((_QWORD *)this + 144);
  v8 = *v7;
  for ( i = *v7; ; v8 = i )
  {
    if ( (__int64 *)v8 == v7 )
      return 0LL;
    v20 = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v8 + 32) + 168LL))(*(_QWORD *)(v8 + 32), &v20);
    v10 = v9;
    if ( v9 < 0 )
      break;
    if ( v20 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 48LL))(v20, v23);
      v10 = v9;
      if ( v9 < 0 )
      {
        v18 = 3242LL;
        goto LABEL_18;
      }
      v11 = v23[0] - *(_QWORD *)&a3->Data1;
      if ( v23[0] == *(_QWORD *)&a3->Data1 )
        v11 = v23[1] - *(_QWORD *)a3->Data4;
      if ( !v11 )
      {
        GetAumid(&string, *(_QWORD *)(v8 + 40));
        v12 = *(int (__fastcall **)(struct IApplicationView *, PCWSTR, int *))(*(_QWORD *)a2 + 152LL);
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        if ( v12(a2, StringRawBuffer, &v21) >= 0 && v21 )
        {
          *a4 = *(struct IApplicationView **)(v8 + 40);
          WindowsDeleteString(string);
          string = 0LL;
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
          return 0LL;
        }
        WindowsDeleteString(string);
        string = 0LL;
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
      &i,
      v14,
      v15,
      v16);
  }
  v18 = 3236LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  return v10;
}
