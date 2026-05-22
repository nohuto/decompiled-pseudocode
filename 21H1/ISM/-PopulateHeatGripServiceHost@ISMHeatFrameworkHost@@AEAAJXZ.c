/*
 * XREFs of ?PopulateHeatGripServiceHost@ISMHeatFrameworkHost@@AEAAJXZ @ 0x18012CDF4
 * Callers:
 *     ?Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z @ 0x18012CBC8 (-Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800166E8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::PopulateHeatGripServiceHost(ISMHeatFrameworkHost *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  const char *v3; // r9
  void (__fastcall ***v4)(_QWORD); // rax
  void (__fastcall ***v5)(_QWORD); // rcx
  void (__fastcall ***v6)(_QWORD); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  if ( !BamoServerConnection )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      395LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      v3);
    __debugbreak();
  }
  v4 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                       + 23)
                                                                                     + 8LL)
                                                                         + 88LL))(*((_QWORD *)BamoServerConnection + 23) + 8LL);
  v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 36);
  v6 = v4;
  if ( v5 != v4 )
  {
    if ( v4 )
    {
      (**v4)(v4);
      v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 36);
    }
    *((_QWORD *)this + 36) = v6;
    if ( v5 )
      (*v5)[1](v5);
  }
  return 0LL;
}
