/*
 * XREFs of ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x18011307C
 * Callers:
 *     _lambda_16bcd66e868557b6123b295398ded03e_::operator() @ 0x180111250 (_lambda_16bcd66e868557b6123b295398ded03e_--operator().c)
 *     _lambda_2c3f3b4f1bafb50fab998dee840e32d8_::operator() @ 0x1801112E4 (_lambda_2c3f3b4f1bafb50fab998dee840e32d8_--operator().c)
 *     _lambda_a408cc100a5b103155a70fabf7a2049b_::operator() @ 0x180111660 (_lambda_a408cc100a5b103155a70fabf7a2049b_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsClientCustomProxy@@@Z @ 0x1800146F0 (--0-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsC.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@?$vector@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVAsyncStringPrincipal@@@Z @ 0x18010F138 (--$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@-$vector@V-$com_ptr_t@VAsyncStringPrincipal@@U.c)
 *     ??0?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@AEBV012@@Z @ 0x18010F8EC (--0-$AsyncDeferral@V-$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Wi.c)
 *     ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x180112B64 (-CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ.c)
 *     ??0AsyncHRESULTPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXJ@Z@std@@@Z @ 0x18011B300 (--0AsyncHRESULTPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXJ@Z@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void (__fastcall ***__fastcall MPCConstantManagerClient::CreateHRPrincipal(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD),
        _QWORD *a3))(_QWORD)
{
  void (__fastcall ***v6)(_QWORD); // rbx
  void (__fastcall ***v7)(_QWORD); // rax
  _QWORD *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v12[8]; // [rsp+30h] [rbp-40h] BYREF
  void (__fastcall ***v13)(_QWORD); // [rsp+A8h] [rbp+38h] BYREF
  _QWORD *v14; // [rsp+B0h] [rbp+40h]

  v14 = a3;
  v13 = a2;
  MPCConstantManagerClient::CleanupPrincipals((MPCConstantManagerClient *)a1);
  v6 = (void (__fastcall ***)(_QWORD))operator new(0x80uLL);
  v13 = v6;
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>(
    &v10,
    a3);
  v12[0] = off_1801ABD08;
  v12[1] = v10;
  v12[2] = v11;
  v11 = 0LL;
  v12[7] = v12;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
  v7 = (void (__fastcall ***)(_QWORD))AsyncHRESULTPrincipal::AsyncHRESULTPrincipal(v6, a1[4], v12);
  v13 = v7;
  v8 = (_QWORD *)a1[10];
  if ( (_QWORD *)a1[11] == v8 )
  {
    std::vector<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>::_Emplace_reallocate<AsyncStringPrincipal *>(
      a1 + 9,
      a1[10],
      &v13);
  }
  else
  {
    wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
      v8,
      v7);
    a1[10] += 8LL;
  }
  wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
    a2,
    *(void (__fastcall ****)(_QWORD))(a1[10] - 8));
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a3 + 1);
  return a2;
}
