/*
 * XREFs of wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___ @ 0x180029D80
 * Callers:
 *     _lambda_7a5168388c52e35df9f99ba32a5252ab_::operator() @ 0x180029C98 (_lambda_7a5168388c52e35df9f99ba32a5252ab_--operator().c)
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x18002B904 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1803D11E8 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1803D0770 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_T_ea_1803D0770.c)
 *     ?EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z @ 0x1803D123C (-EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___(struct IImmersiveMonitor ***a1)
{
  struct IImmersiveMonitor **v1; // rdi
  int v3; // eax
  struct IImmersiveMonitor *v4; // rdx
  struct IImmersiveMonitor *v5; // rcx
  __int64 *v6; // rax
  struct IImmersiveMonitor *v8; // rdi
  __int64 (__fastcall *v9)(struct IImmersiveMonitor *, struct IApplicationFrame **); // rbx
  int v10; // eax
  WindowSizeConverter *v11; // rcx
  int v12; // eax
  int v13; // r9d
  __int64 v14; // rcx
  __int64 *v15; // rbx
  __int64 *v16; // rax
  struct IApplicationFrame *v17; // rdi
  int v18; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF
  struct IApplicationFrame *v21; // [rsp+78h] [rbp+10h] BYREF
  struct IApplicationFrame *v22; // [rsp+80h] [rbp+18h] BYREF
  char v23; // [rsp+88h] [rbp+20h] BYREF

  v3 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *))(*(_QWORD *)**a1 + 24LL))(**a1, &v20);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1E7,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v3,
      v18);
LABEL_13:
    v21 = 0LL;
    v8 = v1[16];
    v9 = *(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct IApplicationFrame **))(*(_QWORD *)v8 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v10 = v9(v8, &v21);
    v11 = retaddr;
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1EE,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v10,
        v18);
    v12 = WindowSizeConverter::EnsurePosition(v11, **a1, v21);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1F6,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v12,
        v18);
    v14 = (__int64)(a1[1] + 17);
    v15 = *(__int64 **)v14;
    v16 = *(__int64 **)(*(_QWORD *)v14 + 8LL);
    if ( *((_BYTE *)v16 + 25) )
      goto LABEL_24;
    do
    {
      if ( *((_DWORD *)v16 + 8) >= v20 )
      {
        v15 = v16;
        v16 = (__int64 *)*v16;
      }
      else
      {
        v16 = (__int64 *)v16[2];
      }
    }
    while ( !*((_BYTE *)v16 + 25) );
    if ( v15 == *(__int64 **)v14 || v20 < *((_DWORD *)v15 + 8) )
    {
LABEL_24:
      v22 = (struct IApplicationFrame *)&v20;
      v15 = *(__int64 **)std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                           v14,
                           (unsigned int)&v23,
                           (_DWORD)v15,
                           v13,
                           (__int64)&v22);
    }
    v17 = v21;
    if ( (struct IApplicationFrame *)v15[5] != v21 )
    {
      v22 = v21;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
      v22 = (struct IApplicationFrame *)v15[5];
      v15[5] = (__int64)v17;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    return 0LL;
  }
  v1 = a1[1];
  v4 = v1[17];
  v5 = v4;
  v6 = (__int64 *)*((_QWORD *)v4 + 1);
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_11;
  do
  {
    if ( *((_DWORD *)v6 + 8) < v20 )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v5 = (struct IImmersiveMonitor *)v6;
      v6 = (__int64 *)*v6;
    }
  }
  while ( !*((_BYTE *)v6 + 25) );
  if ( v5 == v4 || v20 < *((_DWORD *)v5 + 8) )
LABEL_11:
    v5 = v1[17];
  if ( v5 == v4 )
    goto LABEL_13;
  return 0LL;
}
