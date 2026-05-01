/*
 * XREFs of ??$RuntimeClassInitialize@VSearchAppExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVSearchAppExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x1801D21F8
 * Callers:
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVSearchAppExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVSearchAppExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x1801D1F0C (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Win_ea_1801D1F0C.c)
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180066D30 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$AsWeak@VCortanaSharedExperienceManager@@@WRL@Microsoft@@YAJPEAVCortanaSharedExperienceManager@@PEAVWeakRef@01@@Z @ 0x180192138 (--$AsWeak@VCortanaSharedExperienceManager@@@WRL@Microsoft@@YAJPEAVCortanaSharedExperienceManager.c)
 *     ??$?4V_lambda_8fb2622e9c399703a82f01481760af57_@@X@?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_8fb2622e9c399703a82f01481760af57_@@@Z @ 0x1801D1CB0 (--$-4V_lambda_8fb2622e9c399703a82f01481760af57_@@X@-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$.c)
 */

__int64 __fastcall Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::RuntimeClassInitialize<SearchAppExperienceManager>(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v13; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v15; // [rsp+68h] [rbp+28h] BYREF
  __int64 *v16; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0LL;
  v16 = &v15;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v16);
  v7 = Microsoft::WRL::AsWeak<CortanaSharedExperienceManager>(a2, v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v12[0] = v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v9 = *a3;
    v12[1] = a2;
    v13 = v9;
    wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=<_lambda_8fb2622e9c399703a82f01481760af57_,void>(
      a1 + 40,
      (__int64)v12);
    if ( v12[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\Handlers.h",
      (const char *)(unsigned int)v7);
  }
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v8;
}
