/*
 * XREFs of ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x18013E99C
 * Callers:
 *     ?OnStubDisconnected@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z @ 0x1800050A0 (-OnStubDisconnected@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D2C (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180031394 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180098EB4 (-clear@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$.c)
 *     ?CustomShapeExists@SystemCursorService@@QEBA_N_K@Z @ 0x18013C08C (-CustomShapeExists@SystemCursorService@@QEBA_N_K@Z.c)
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x18013CDB0 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x18013D3F4 (-erase@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K_ea_18013D3F4.c)
 *     ?lock@?$weak_ptr@VSystemCursor@@@std@@QEBA?AV?$shared_ptr@VSystemCursor@@@2@XZ @ 0x18013D4E4 (-lock@-$weak_ptr@VSystemCursor@@@std@@QEBA-AV-$shared_ptr@VSystemCursor@@@2@XZ.c)
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x180140240 (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 *     ?lock@?$weak_ptr@VSystemCursorService@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService@@@2@XZ @ 0x180140B70 (-lock@-$weak_ptr@VSystemCursorService@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService@@@2@XZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CustomCursorApplication::Cleanup(CustomCursorApplication *this)
{
  SystemCursorService *v2; // r15
  __int64 *v3; // r14
  _QWORD *v4; // r12
  _QWORD *v5; // rbx
  SystemCursor *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  SystemCursor *v13; // [rsp+20h] [rbp-20h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-18h]
  SystemCursorService *v15; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v16; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v18; // [rsp+70h] [rbp+30h] BYREF
  __int64 v19; // [rsp+78h] [rbp+38h] BYREF

  std::weak_ptr<SystemCursorService>::lock(this, &v15);
  v2 = v15;
  if ( !v15 )
  {
    v3 = (__int64 *)((char *)this + 96);
    goto LABEL_20;
  }
  std::weak_ptr<SystemCursor>::lock((__int64)v15 + 168, &v13);
  v4 = (_QWORD *)*((_QWORD *)this + 3);
  v5 = (_QWORD *)*v4;
  v6 = v13;
  while ( v5 != v4 )
  {
    v7 = v5[2];
    v18 = v7;
    if ( v6 && SystemCursor::ShapeExists(v6, v7) )
      SystemCursor::RemoveShape(v6, v7);
    if ( SystemCursorService::CustomShapeExists(v2, v7) )
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::erase(
        (_QWORD *)v2 + 19,
        (unsigned __int64 *)&v18);
    v5 = (_QWORD *)*v5;
  }
  v3 = (__int64 *)((char *)this + 96);
  if ( *((_QWORD *)this + 12) )
  {
    v19 = *((_QWORD *)v2 + 18);
    v8 = v19;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v19);
    v18 = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v18);
    v10 = v9(v8, &v18);
    v11 = retaddr;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 88LL))(v18, *v3);
      v11 = retaddr;
      if ( v10 >= 0 )
      {
LABEL_17:
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v18);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v19);
        goto LABEL_18;
      }
      v12 = 718LL;
    }
    else
    {
      v12 = 716LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v11,
      v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_17;
  }
LABEL_18:
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
LABEL_20:
  std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::clear((__int64)this + 16);
  *((_DWORD *)this + 20) = 0;
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v3);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 13,
    0LL);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
}
