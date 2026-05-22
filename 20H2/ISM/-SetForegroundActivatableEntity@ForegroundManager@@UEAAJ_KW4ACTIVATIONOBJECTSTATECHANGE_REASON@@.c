/*
 * XREFs of ?SetForegroundActivatableEntity@ForegroundManager@@UEAAJ_KW4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x180045EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigureForegroundOnActivationObject@ForegroundManager@@AEAAXAEBU_LUID@@_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x180045ECC (-ConfigureForegroundOnActivationObject@ForegroundManager@@AEAAXAEBU_LUID@@_NW4ACTIVATIONOBJECTST.c)
 *     ?FromCookie@ActivationControllerBamoProxy@@SA?AV?$com_ptr_t@VBamoActivationControllerProxy@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x180046168 (-FromCookie@ActivationControllerBamoProxy@@SA-AV-$com_ptr_t@VBamoActivationControllerProxy@@Uerr.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?SetForegroundActivatableEntity@ForegroundManager@InputTraceLogging@@SAX_K@Z @ 0x180104BB0 (-SetForegroundActivatableEntity@ForegroundManager@InputTraceLogging@@SAX_K@Z.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x180105058 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActivatableEntityB.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ForegroundManager::SetForegroundActivatableEntity(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v15; // [rsp+58h] [rbp+28h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  InputTraceLogging::ForegroundManager::SetForegroundActivatableEntity(a2);
  v6 = 0;
  if ( a2 )
  {
    ActivationWatcherBamoPrincipal::TryFindActivatableEntity(*(_QWORD *)(a1 + 160), &v16, a2);
    if ( v16 )
    {
      ActivationControllerBamoProxy::FromCookie(&v15, *(_QWORD *)(v16 + 96));
      v7 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v16 + 8) + 56LL))(v16 + 8);
      v13 = v7;
      if ( v15 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v15 + 8) + 56LL))(v15 + 8) )
      {
        v9 = *(_QWORD *)(a1 + 160);
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v15 + 8) + 56LL))(v15 + 8);
        ActivationWatcherBamoPrincipal::TryFindActivatableEntity(v9, &v12, v10);
        if ( v12 )
          v13 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v12 + 8) + 56LL))(v12 + 8);
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v12);
      }
      ForegroundManager::ConfigureForegroundOnActivationObject(v7, (__int64)&v13, v8, a3);
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v15);
    }
    else
    {
      v6 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
        (const char *)0x80070057LL);
    }
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v16);
  }
  else
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      (const char *)0x80070057LL);
  }
  return v6;
}
