/*
 * XREFs of ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18001ABDC
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001A5B0 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180002C58 (--1-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180012390 (--$_Emplace_reallocate@V-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Move_backward_unchecked@PEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x180104F60 (--$_Move_backward_unchecked@PEAV-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>,BamoActivatableEntityPrincipal *>::InsertWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void (__fastcall ***a4)(_QWORD))
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  unsigned __int64 v7; // r15
  const char *v9; // r9
  __int64 *v10; // r8
  __int64 v11; // rax
  int v12; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void (__fastcall ***v18)(_QWORD); // [rsp+58h] [rbp+10h] BYREF

  v7 = a3;
  if ( !*(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2) + 56) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoList.inl",
      (const char *)0x87B20814LL,
      v16[0]);
    return 2276591636LL;
  }
  v10 = *(__int64 **)(a1 + 64);
  v11 = *(_QWORD *)(a1 + 56);
  if ( v7 > ((__int64)v10 - v11) >> 3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x14C,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoList.inl",
      v9);
    goto LABEL_15;
  }
  v18 = a4;
  if ( a4 )
  {
    (**a4)(a4);
    v11 = *(_QWORD *)(a1 + 56);
    v10 = *(__int64 **)(a1 + 64);
  }
  v5 = (__int64 *)(v11 + 8 * v7);
  if ( *(__int64 **)(a1 + 72) == v10 )
  {
    std::vector<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>(
      (__int64 **)(a1 + 56),
      (__int64 *)(v11 + 8 * v7),
      (__int64 *)&v18);
    v4 = (__int64)v18;
    goto LABEL_8;
  }
  v4 = 0LL;
  if ( v5 != v10 )
  {
LABEL_15:
    v18 = (void (__fastcall ***)(_QWORD))v4;
    v14 = *(v10 - 1);
    *(v10 - 1) = v4 & v14;
    *v10 = v14;
    *(_QWORD *)(a1 + 64) += 8LL;
    std::_Move_backward_unchecked<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy> *,wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy> *>(v5);
    v16[0] &= v4;
    v15 = *v5;
    *v5 = (__int64)a4;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>::~com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>(v16);
    goto LABEL_8;
  }
  *v10 = (__int64)a4;
  *(_QWORD *)(a1 + 64) += 8LL;
LABEL_8:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, void (__fastcall ***)(_QWORD)))(*(_QWORD *)(a1 + 8) + 24LL))(
          a1 + 8,
          (unsigned int)v7,
          a4);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x154,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoList.inl",
      (const char *)(unsigned int)v12,
      v16[0]);
    __debugbreak();
  }
  return 0LL;
}
