/*
 * XREFs of ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00299D8
 * Callers:
 *     ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1C002996C (-CreatePowerThread@FxPkgPnp@@IEAAJXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?CreateThread@FxSystemThread@@AEAAJXZ @ 0x1C0029ABC (-CreateThread@FxSystemThread@@AEAAJXZ.c)
 *     ??0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0029B84 (--0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxSystemThread::_CreateAndInit(
        FxSystemThread **SystemThread,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *DeviceObject)
{
  FxSystemThread *v8; // rax
  FxNonPagedObject *v9; // rax
  unsigned __int8 v10; // r8
  FxSystemThread *v11; // rbx
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // r8
  FxPoolTypeOrPoolFlags v15; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h] BYREF

  *SystemThread = 0LL;
  *(_QWORD *)&v15.UsePoolType = 0LL;
  v15.u.PoolFlags = 64LL;
  v8 = (FxSystemThread *)FxObjectHandleAllocCommon(FxDriverGlobals, &v15, 0x100uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( v8 && (FxSystemThread::FxSystemThread(v8, FxDriverGlobals), (v11 = (FxSystemThread *)v9) != 0LL) )
  {
    PreviousIrql = 0;
    FxNonPagedObject::Lock(v9, &PreviousIrql, v10);
    v12 = PreviousIrql;
    v11->m_Initialized = 1;
    FxNonPagedObject::Unlock(v11, v12, v13);
    if ( FxSystemThread::CreateThread(v11) < 0 )
    {
      WPP_IFR_SF_qqd(
        FxDriverGlobals,
        2u,
        0xCu,
        0xBu,
        WPP_FxSystemThread_cpp_Traceguids,
        Device,
        DeviceObject,
        -1073741823);
      FxObject::ClearEvtCallbacks(v11);
      v11->DeleteObject(v11);
      return 3221225473LL;
    }
    else
    {
      *SystemThread = v11;
      return 0LL;
    }
  }
  else
  {
    WPP_IFR_SF_qqd(
      FxDriverGlobals,
      2u,
      0xCu,
      0xAu,
      WPP_FxSystemThread_cpp_Traceguids,
      Device,
      DeviceObject,
      -1073741670);
    return 3221225626LL;
  }
}
