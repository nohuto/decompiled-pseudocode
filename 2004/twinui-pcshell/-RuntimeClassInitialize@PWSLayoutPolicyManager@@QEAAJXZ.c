/*
 * XREFs of ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1802268BC
 * Callers:
 *     ??$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18022594C (--$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x18013C854 (-_com_issue_error@@YAXJ@Z.c)
 *     ??0_variant_t@@QEAA@PEBG@Z @ 0x18019C6D8 (--0_variant_t@@QEAA@PEBG@Z.c)
 *     ?make_bstr@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x1801A095C (-make_bstr@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFre.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PWSLayoutPolicyManager::RuntimeClassInitialize(
        PWSLayoutPolicyManager *this,
        const unsigned __int16 *a2)
{
  const VARIANTARG *v3; // rax
  HRESULT v4; // eax
  HRESULT v5; // eax
  PWSLayoutPolicyManager *bstr; // rax
  PWSLayoutPolicyManager *v7; // rsi
  OLECHAR **v8; // rdi
  OLECHAR *v9; // r12
  OLECHAR *v10; // r15
  DWORD LastError; // ebx
  PWSLayoutPolicyManager *v12; // rax
  const char *v13; // r9
  PWSLayoutPolicyManager *v14; // rsi
  OLECHAR **v15; // rdi
  OLECHAR *v16; // r15
  OLECHAR *v17; // r14
  DWORD v18; // ebx
  VARIANTARG pvarg; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  BSTR bstrString; // [rsp+68h] [rbp+10h] BYREF

  try
  {
    v3 = (const VARIANTARG *)_variant_t::_variant_t((_variant_t *)&pvarg, a2);
    v4 = VariantCopy((VARIANTARG *)((char *)this + 80), v3);
    if ( v4 < 0 )
      _com_issue_error((char *)(unsigned int)v4);
    v5 = VariantClear(&pvarg);
    if ( v5 < 0 )
      _com_issue_error((char *)(unsigned int)v5);
    bstr = (PWSLayoutPolicyManager *)wil::make_bstr(&bstrString, L"SelectionNamespaces");
    v7 = bstr;
    v8 = (OLECHAR **)((char *)this + 104);
    if ( (PWSLayoutPolicyManager *)((char *)this + 104) != bstr )
    {
      v9 = *(OLECHAR **)bstr;
      v10 = *v8;
      if ( *v8 )
      {
        LastError = GetLastError();
        SysFreeString(v10);
        SetLastError(LastError);
      }
      *v8 = v9;
      *(_QWORD *)v7 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v12 = (PWSLayoutPolicyManager *)wil::make_bstr(&bstrString, L"/l:LayoutModificationTemplate/l:InkWorkspaceTopApps");
    v14 = v12;
    v15 = (OLECHAR **)((char *)this + 120);
    if ( (PWSLayoutPolicyManager *)((char *)this + 120) != v12 )
    {
      v16 = *(OLECHAR **)v12;
      v17 = *v15;
      if ( *v15 )
      {
        v18 = GetLastError();
        SysFreeString(v17);
        SetLastError(v18);
      }
      *v15 = v16;
      *(_QWORD *)v14 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
  }
  catch ( ... )
  {
    LODWORD(bstrString) = wil::details::in1diag3::Return_CaughtException(
                            retaddr,
                            (void *)0x56,
                            (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
                            v13);
    return (unsigned int)bstrString;
  }
  return 0LL;
}
