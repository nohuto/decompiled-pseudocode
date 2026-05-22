/*
 * XREFs of ?EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x18013C800
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D64 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F53C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@VSystemCursorService@@PEAVSystemCursorController@@AEAK@std@@YA?AV?$shared_ptr@VSystemCursorService@@@0@$$QEAPEAVSystemCursorController@@AEAK@Z @ 0x18013AFA4 (--$make_shared@VSystemCursorService@@PEAVSystemCursorController@@AEAK@std@@YA-AV-$shared_ptr@VSy.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x18013D080 (-clear@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$less@I@2@V-$all.c)
 *     ?Initialize@SystemCursorService@@QEAAJXZ @ 0x18013FA30 (-Initialize@SystemCursorService@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController::EnsureServiceAndRegisterClient(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2,
        struct BamoSystemCursorControllerClientProxy *a3)
{
  struct BamoSystemCursorControllerClientProxy **v6; // rsi
  std::_Ref_count_base *v7; // rcx
  struct BamoSystemCursorControllerClientProxy *v8; // rax
  int v9; // eax
  const char *v10; // r9
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v12; // rax
  SystemCursorService *v14; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF
  struct BamoSystemCursorControllerClientProxy *v18; // [rsp+58h] [rbp+10h] BYREF
  struct SystemCursorController *v19; // [rsp+60h] [rbp+18h] BYREF

  v6 = (struct BamoSystemCursorControllerClientProxy **)((char *)this + 64);
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)this + 8);
  *((_DWORD *)this + 18) = 0;
  std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::clear((char *)this + 80);
  *((_QWORD *)this + 12) = 0LL;
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  try
  {
    v8 = *v6;
    if ( *v6 != a3 )
    {
      if ( a3 )
      {
        (**(void (__fastcall ***)(struct BamoSystemCursorControllerClientProxy *))a3)(a3);
        v8 = *v6;
      }
      v18 = v8;
      *v6 = a3;
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v18);
    }
    v17 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                    + 32);
    *((_DWORD *)this + 18) = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL)
                                                                           + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                                       + 36);
    v19 = this;
    std::make_shared<SystemCursorService,SystemCursorController *,unsigned long &>(&v14, &v19, &v17);
    v9 = SystemCursorService::Initialize(v14);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        63LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)(unsigned int)v9);
    v11 = v15;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
      v11 = v15;
    }
    *((_QWORD *)this + 12) = v14;
    v12 = (std::_Ref_count_base *)*((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = v11;
    if ( v12 )
    {
      std::_Ref_count_base::_Decref(v12);
      v11 = v15;
    }
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x42,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      v10);
  }
  return 0LL;
}
