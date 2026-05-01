/*
 * XREFs of ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1803BB130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180302BA4 (--0-$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??$emplace_back@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUIApplicationView@@@Z @ 0x1803B941C (--$emplace_back@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exceptio.c)
 *     ?FindAppView@UwpPrimaryAppProxy@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1803BA6FC (-FindAppView@UwpPrimaryAppProxy@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types.c)
 *     ?GetAppHostId@UwpPrimaryAppProxy@@AEAA_KPEAUIApplicationView@@@Z @ 0x1803BA810 (-GetAppHostId@UwpPrimaryAppProxy@@AEAA_KPEAUIApplicationView@@@Z.c)
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1803BC098 (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall UwpPrimaryAppProxy::HandleView(__int64 a1, struct IApplicationView *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  UwpPrimaryAppProxy *v9; // rcx
  __int64 AppHostId; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v17[64]; // [rsp+30h] [rbp-68h] BYREF
  struct IUnknown **v18; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+20h]

  v19 = a4;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1) )
  {
    AppHostId = UwpPrimaryAppProxy::GetAppHostId(v9, a2);
    if ( AppHostId != -1 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 40));
      v16[1] = a1 + 40;
      if ( *(_QWORD *)(a1 + 48) == *(_QWORD *)(a1 + 56) )
      {
        *(_QWORD *)(a1 + 72) = AppHostId;
LABEL_5:
        v16[0] = (__int64)a2;
        UwpPrimaryAppProxy::FindAppView(a1, &v18, (struct IUnknown *)a2);
        if ( v18 == *(struct IUnknown ***)(a1 + 56) )
        {
          std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::emplace_back<IApplicationView * &>(
            a1 + 48,
            v16);
          v12 = std::function<void (IApplicationView *,IImmersiveMonitor *)>::function<void (IApplicationView *,IImmersiveMonitor *)>(
                  (__int64)v17,
                  a4);
          UwpPrimaryAppProxy::RelayoutAppViewsInternal(a1, a3, v12);
        }
        if ( a1 != -40 )
          ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 40));
        v13 = *(_QWORD *)(a4 + 56);
        if ( v13 )
        {
          LOBYTE(v11) = v13 != a4;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, v11);
          *(_QWORD *)(a4 + 56) = 0LL;
        }
        return 1;
      }
      if ( *(_QWORD *)(a1 + 72) == AppHostId )
        goto LABEL_5;
      if ( a1 != -40 )
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 40));
    }
  }
  v15 = *(_QWORD *)(a4 + 56);
  if ( v15 )
  {
    LOBYTE(v8) = v15 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, v8);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return 0;
}
