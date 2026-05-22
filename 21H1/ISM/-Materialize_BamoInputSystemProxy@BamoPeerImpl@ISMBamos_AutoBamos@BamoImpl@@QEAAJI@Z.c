/*
 * XREFs of ?Materialize_BamoInputSystemProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1800E7CD0
 * Callers:
 *     ?Thunk_Materialize_BamoInputSystemProxy_10@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800ED090 (-Thunk_Materialize_BamoInputSystemProxy_10@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@.c)
 * Callees:
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x18003ADF4 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?CreateProxy_InputSystem@BamoImpl@@YAXPEAPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x1800E4814 (-CreateProxy_InputSystem@BamoImpl@@YAXPEAPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 */

__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoInputSystemProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        struct Microsoft::Bamo::BamoProxy **a2)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  BamoImpl::CreateProxy_InputSystem((BamoImpl *)&v9, a2);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
    (void (__fastcall ****)(_QWORD))(v4 + 16),
    (__int64)this);
  *(_DWORD *)(v4 + 24) = v3;
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 56LL);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v5 + 40LL))(
         v5,
         *((unsigned int *)this + 9),
         v3,
         v4);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      56204LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  return 0LL;
}
