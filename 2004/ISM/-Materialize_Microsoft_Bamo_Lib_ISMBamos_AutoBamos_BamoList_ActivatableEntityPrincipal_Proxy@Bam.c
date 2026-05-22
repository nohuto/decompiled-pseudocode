/*
 * XREFs of ?Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_ActivatableEntityPrincipal_Proxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1800E84D8
 * Callers:
 *     ?Thunk_Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_ActivatableEntityPrincipal_Proxy_10@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800ECDA0 (-Thunk_Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_ActivatableEntityPrincipal_Pro.c)
 * Callees:
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x18003AE54 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?CreateList_ActivatableEntityPrincipal_Proxy@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@YAXPEAVBaseBamoConnectionImpl@25@PEAVBamoPeer@1@PEAPEAVBamoProxy@45@@Z @ 0x1800E3EEC (-CreateList_ActivatableEntityPrincipal_Proxy@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@YAX.c)
 */

__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_ActivatableEntityPrincipal_Proxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        unsigned int a2,
        __int64 a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::CreateList_ActivatableEntityPrincipal_Proxy(
    *(Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos **)(*((_QWORD *)this + 3) + 32LL),
    *((struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)this + 2),
    (struct ISMBamos_AutoBamos::BamoPeer *)&v11,
    a4);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
    (void (__fastcall ****)(_QWORD))(v6 + 16),
    (__int64)this);
  *(_DWORD *)(v6 + 24) = a2;
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 56LL);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v7 + 40LL))(
         v7,
         *((unsigned int *)this + 9),
         a2,
         v6);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      56654LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  return 0LL;
}
