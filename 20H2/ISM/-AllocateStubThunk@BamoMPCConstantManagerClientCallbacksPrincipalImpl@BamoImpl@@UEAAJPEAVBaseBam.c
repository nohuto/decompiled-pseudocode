/*
 * XREFs of ?AllocateStubThunk@BamoMPCConstantManagerClientCallbacksPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x18011BAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientCallbacksPrincipalImpl::AllocateStubThunk(
        BamoImpl::BamoMPCConstantManagerClientCallbacksPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        struct Microsoft::Bamo::BamoStub **a3)
{
  __int64 v5; // rax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Microsoft::Bamo::BamoStub *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = (*(__int64 (__fastcall **)(BamoImpl::BamoMPCConstantManagerClientCallbacksPrincipalImpl *))(*(_QWORD *)this + 48LL))(this);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Microsoft::Bamo::BamoStub **))(*(_QWORD *)v5 + 40LL))(
         v5,
         *((_QWORD *)a2 + 2),
         &v9);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      9109LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  *a3 = v9;
  return 0LL;
}
