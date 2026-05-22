/*
 * XREFs of ?AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18001F920
 * Callers:
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001F654 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x18001F870 (-ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180036C0C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap_.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037660 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCMouseProcessor::AttachMouse(MPCMouseProcessor *this, struct DeviceInfo *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, struct DeviceInfo *, __int64, __int64 *); // rdi
  int v9; // eax
  __int64 **v10; // r9
  __int64 *v11; // rax
  __int64 *v12; // rcx
  unsigned int v13; // edx
  int v14; // [rsp+20h] [rbp-30h]
  char v15; // [rsp+30h] [rbp-20h] BYREF
  struct DeviceInfo *v16; // [rsp+38h] [rbp-18h]
  __int64 v17[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF
  __int64 v20; // [rsp+90h] [rbp+40h] BYREF
  struct DeviceInfo *v21; // [rsp+98h] [rbp+48h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7));
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 72LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v19);
  v6 = v5(v4, &v19);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x198,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v6,
      v14);
    __debugbreak();
  }
  v7 = v19;
  v8 = *(__int64 (__fastcall **)(__int64, struct DeviceInfo *, __int64, __int64 *))(*(_QWORD *)v19 + 24LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v20);
  v9 = v8(v7, a2, 1LL, &v20);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x199,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v9,
      v14);
    goto LABEL_14;
  }
  v16 = a2;
  v7 = v20;
  v17[0] = v20;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v17);
  v10 = (__int64 **)((char *)this + 6344);
  v11 = (__int64 *)*((_QWORD *)this + 793);
  v12 = (__int64 *)v11[1];
  if ( *((_BYTE *)v12 + 25) )
    goto LABEL_10;
  v13 = *(_DWORD *)a2;
  do
  {
    if ( *((_DWORD *)v12 + 8) < v13 )
    {
LABEL_14:
      v12 = (__int64 *)v12[2];
    }
    else
    {
      v11 = v12;
      v12 = (__int64 *)*v12;
    }
  }
  while ( !*((_BYTE *)v12 + 25) );
  if ( v11 == *v10 || v13 < *((_DWORD *)v11 + 8) )
  {
LABEL_10:
    v21 = a2;
    v11 = *(__int64 **)std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                         (_DWORD)v10,
                         (unsigned int)&v15,
                         (_DWORD)v11,
                         (_DWORD)v10,
                         (__int64)&v21);
  }
  v11[5] = (__int64)a2;
  v17[0] = 0LL;
  v21 = (struct DeviceInfo *)v11[6];
  v11[6] = v7;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(v17);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v20);
}
