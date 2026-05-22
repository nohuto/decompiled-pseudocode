/*
 * XREFs of ?AttachApplication@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x18013BA50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsApplicationPeer@SystemCursorController@@AEAA_NI@Z @ 0x1800050EC (-IsApplicationPeer@SystemCursorController@@AEAA_NI@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FA8C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18013B3C8 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap_.c)
 *     ??$make_shared@VCustomCursorApplication@@AEAV?$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@std@@YA?AV?$shared_ptr@VCustomCursorApplication@@@0@AEAV?$shared_ptr@VSystemCursorService@@@0@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x18013B464 (--$make_shared@VCustomCursorApplication@@AEAV-$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEA.c)
 *     ??4?$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013B7F8 (--4-$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z @ 0x18013FAA0 (-CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController::AttachApplication(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2,
        struct BamoCustomCursorControllerClientProxy *a3)
{
  char *v6; // rdi
  double v7; // xmm0_8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  const char *v13; // r9
  int v14; // eax
  void *v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  CustomCursorApplication *v18; // [rsp+40h] [rbp-38h] BYREF
  std::_Ref_count_base *v19; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v21; // [rsp+80h] [rbp+8h] BYREF
  struct BamoCustomCursorControllerClientProxy *v22; // [rsp+90h] [rbp+18h] BYREF
  unsigned int *v23; // [rsp+98h] [rbp+20h] BYREF

  v22 = a3;
  try
  {
    if ( *((_QWORD *)this + 8) )
    {
      v6 = (char *)this + 8;
      v7 = (*(double (__fastcall **)(char *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8);
      if ( *(float *)&v7 != (*(float (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 8) + 8LL) + 64LL))(*((_QWORD *)this + 8) + 8LL) )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 32LL))(v6);
    }
    if ( *((_QWORD *)this + 12) )
    {
      v21 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                      + 36);
      if ( SystemCursorController::IsApplicationPeer(this, v21) )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          101LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller.cpp",
          (const char *)0x8000FFFFLL);
      std::make_shared<CustomCursorApplication,std::shared_ptr<SystemCursorService> &,unsigned int &,BamoCustomCursorControllerClientProxy * &>(
        &v18,
        (__int64)this + 96,
        &v21,
        (__int64 *)&v22);
      v9 = *((_QWORD *)this + 10);
      v10 = *(_QWORD *)(v9 + 8);
      if ( *(_BYTE *)(v10 + 25) )
        goto LABEL_15;
      do
      {
        if ( *(_DWORD *)(v10 + 32) >= v21 )
        {
          v9 = v10;
          v10 = *(_QWORD *)v10;
        }
        else
        {
          v10 = *(_QWORD *)(v10 + 16);
        }
      }
      while ( !*(_BYTE *)(v10 + 25) );
      if ( v9 == *((_QWORD *)this + 10) || v21 < *(_DWORD *)(v9 + 32) )
      {
LABEL_15:
        v23 = &v21;
        v9 = *std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                (__int64 *)this + 10,
                &v17,
                (__int64 *)v9,
                v8,
                &v23);
      }
      std::shared_ptr<CustomCursorApplication>::operator=((_QWORD *)(v9 + 40), &v18);
      v11 = CustomCursorApplication::CreateSharedVisual(v18, &v16);
      if ( v11 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          113LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller.cpp",
          (const char *)(unsigned int)v11);
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)(*((_QWORD *)v18 + 11) + 8LL) + 24LL))(
              *((_QWORD *)v18 + 11) + 8LL,
              *((_QWORD *)this + 12) + 184LL,
              v16);
      if ( v12 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          117LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller.cpp",
          (const char *)(unsigned int)v12);
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 1) + 32LL))((char *)a3 + 8);
      if ( v14 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          125LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller.cpp",
          (const char *)(unsigned int)v14);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x80,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      v13);
  }
  return 0LL;
}
