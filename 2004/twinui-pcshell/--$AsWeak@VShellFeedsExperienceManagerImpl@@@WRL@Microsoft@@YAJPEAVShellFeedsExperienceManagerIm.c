/*
 * XREFs of ??$AsWeak@VShellFeedsExperienceManagerImpl@@@WRL@Microsoft@@YAJPEAVShellFeedsExperienceManagerImpl@@PEAVWeakRef@01@@Z @ 0x18009793C
 * Callers:
 *     ??$RuntimeClassInitialize@VShellFeedsExperienceManagerImpl@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVShellFeedsExperienceManagerImpl@@P84@EAAJI_K_J@Z@Z @ 0x1800981A0 (--$RuntimeClassInitialize@VShellFeedsExperienceManagerImpl@@@IImmersiveWindowMessageNotification.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008858C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellFeedsExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellFeedsExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800977F4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellFeedsExper.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180137300 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<ShellFeedsExperienceManagerImpl>(__int64 a1, __int64 *a2)
{
  int v3; // eax
  __int64 v4; // rbx
  int v5; // edi
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  char v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v3 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellFeedsExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable>>(
         a1,
         &GUID_00000038_0000_0000_c000_000000000046,
         &v13);
  v4 = v13;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v12 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v12);
    if ( v5 >= 0 )
    {
      v6 = wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
             &v13,
             &v12);
      v7 = 0LL;
      if ( &v11 != (char *)v6 )
      {
        v7 = *v6;
        *v6 = 0LL;
      }
      v8 = *a2;
      *a2 = v7;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v13);
      v5 = 0;
    }
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v5;
}
