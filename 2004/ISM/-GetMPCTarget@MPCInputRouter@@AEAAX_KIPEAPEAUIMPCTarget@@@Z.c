/*
 * XREFs of ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x1800B7B00
 * Callers:
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1800B7D90 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B38 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283CC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x180044324 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@_K$$V@?$unordered_map@_KPEAUIMPCTarget@@U?$hash@_K@std@@U?$equal_to@_K@3@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@std@@_N@1@$$QEA_K@Z @ 0x1800B74A4 (--$_Try_emplace@_K$$V@-$unordered_map@_KPEAUIMPCTarget@@U-$hash@_K@std@@U-$equal_to@_K@3@V-$allo.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x1800BA470 (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall MPCInputRouter::GetMPCTarget(MPCInputRouter *this, __int64 a2, unsigned int a3, struct IMPCTarget **a4)
{
  char v6; // di
  char *v7; // rsi
  struct IMPCTarget *v8; // rbx
  void *v9; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF
  struct IMPCTarget *v16; // [rsp+98h] [rbp+48h] BYREF

  v15 = a2;
  v6 = 0;
  v7 = (char *)this + 904;
  std::unordered_map<unsigned __int64,IMPCTarget *>::_Try_emplace<unsigned __int64,>(
    (__int64)this + 904,
    (__int64)v14,
    (const unsigned __int8 *)&v15);
  v16 = *(struct IMPCTarget **)(v14[0] + 24LL);
  v8 = v16;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v16);
  if ( !v8 )
  {
    v9 = RefCountedObject::operator new(0x40uLL);
    v14[0] = v9;
    if ( v9 )
    {
      InputSiteManager = ISMStatics::GetInputSiteManager();
      v11 = InputSiteManager::GetOrCreateInputSiteFromId((__int64)InputSiteManager, &v13, 1, v15, a3);
      v6 = 1;
      v8 = (struct IMPCTarget *)MPCTarget::MPCTarget(v9, *v11, 2LL, a3);
    }
    else
    {
      v8 = 0LL;
    }
    v16 = v8;
    if ( (v6 & 1) != 0 )
    {
      v12 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    std::unordered_map<unsigned __int64,IMPCTarget *>::_Try_emplace<unsigned __int64,>(
      (__int64)v7,
      (__int64)v14,
      (const unsigned __int8 *)&v15);
    *(_QWORD *)(v14[0] + 24LL) = v8;
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v16);
  *a4 = v8;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v16);
}
