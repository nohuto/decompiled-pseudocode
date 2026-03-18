/*
 * XREFs of ?SetBootstrapProxy@DiagnosticCallbacksManager@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180168A60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180167244 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap_.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DiagnosticCallbacksManager::SetBootstrapProxy(
        DiagnosticCallbacksManager *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  void (__fastcall **v4)(_QWORD); // rax
  int (__fastcall *v5)(struct Microsoft::Bamo::BamoProxy *, GUID *, int **); // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // rax
  int *v13; // rax
  __int64 v14; // rdi
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v19; // [rsp+68h] [rbp+28h] BYREF
  int *v20; // [rsp+70h] [rbp+30h] BYREF
  int *v21; // [rsp+78h] [rbp+38h] BYREF

  if ( a2 )
    (**(void (__fastcall ***)(struct Microsoft::Bamo::BamoProxy *))a2)(a2);
  v4 = *(void (__fastcall ***)(_QWORD))a2;
  v20 = 0LL;
  v5 = (int (__fastcall *)(struct Microsoft::Bamo::BamoProxy *, GUID *, int **))v4[2];
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  if ( v5(a2, &GUID_04ee6573_94fb_9d69_ad96_7b14cfe9246a, &v20) < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
      (const char *)0x87B2080CLL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    (*(void (__fastcall **)(struct Microsoft::Bamo::BamoProxy *))(*(_QWORD *)a2 + 8LL))(a2);
    return 2276591628LL;
  }
  else
  {
    v6 = (__int64)(v20 + 6);
    if ( !v20 )
      v6 = 32LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v6 + 16LL) + 8LL))(*(_QWORD *)(*(_QWORD *)v6 + 16LL));
    v8 = (__int64 *)((char *)this + 192);
    v9 = *((_QWORD *)this + 24);
    v10 = v9;
    v11 = *(_DWORD *)(v7 + 36);
    v19 = v11;
    v12 = *(_QWORD *)(v9 + 8);
    if ( !*(_BYTE *)(v12 + 25) )
    {
      do
      {
        if ( *(_DWORD *)(v12 + 32) >= v11 )
        {
          v9 = v12;
          v12 = *(_QWORD *)v12;
        }
        else
        {
          v12 = *(_QWORD *)(v12 + 16);
        }
      }
      while ( !*(_BYTE *)(v12 + 25) );
      v10 = *v8;
    }
    if ( v9 == v10 || v11 < *(_DWORD *)(v9 + 32) )
    {
      v21 = (int *)&v19;
      v9 = *std::_Tree<std::_Tmap_traits<unsigned int,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
              (__int64 *)this + 24,
              &v17,
              (_QWORD *)v9,
              (__int64)v8,
              &v21);
    }
    v13 = *(int **)(v9 + 40);
    v14 = (__int64)v20;
    if ( v13 != v20 )
    {
      if ( v20 )
      {
        (*(void (__fastcall **)(int *))(*(_QWORD *)v20 + 8LL))(v20);
        v13 = *(int **)(v9 + 40);
      }
      v21 = v13;
      *(_QWORD *)(v9 + 40) = v14;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
      v14 = (__int64)v20;
    }
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
    if ( v15 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v15, retaddr);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    (*(void (__fastcall **)(struct Microsoft::Bamo::BamoProxy *))(*(_QWORD *)a2 + 8LL))(a2);
    return 0LL;
  }
}
