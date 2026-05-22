/*
 * XREFs of ?Materialize_BamoMPCManagerClientProxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180072C80
 * Callers:
 *     ?Thunk_Materialize_BamoMPCManagerClientProxy_11@?$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180074400 (-Thunk_Materialize_BamoMPCManagerClientProxy_11@-$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBa.c)
 * Callees:
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x18003AE54 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?CreateMPCManagerClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180071EDC (-CreateMPCManagerClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@MP.c)
 */

__int64 __fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl::Materialize_BamoMPCManagerClientProxy(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        __int64 a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  BamoImpl::CreateMPCManagerClientProxy(
    *(BamoImpl **)(*((_QWORD *)this + 3) + 32LL),
    a2,
    (struct MPCManagerBamo_AutoBamos::BamoPeer *)&v11,
    a4);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
    (void (__fastcall ****)(_QWORD))(v6 + 16),
    (__int64)this);
  *(_DWORD *)(v6 + 24) = v5;
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 56LL);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v7 + 40LL))(
         v7,
         *((unsigned int *)this + 9),
         v5,
         v6);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      10987LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  return 0LL;
}
