/*
 * XREFs of ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C001EB1C
 * Callers:
 *     imp_WdfInterruptCreate @ 0x1C001E960 (imp_WdfInterruptCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C001EC3C (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ??0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001EEB0 (--0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C008CE60 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 */

__int64 __fastcall FxInterrupt::_CreateAndInit(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *Device,
        FxDevice *Parent,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_INTERRUPT_CONFIG *Configuration,
        FxInterrupt **Interrupt)
{
  FxInterrupt *v10; // rax
  FxInterrupt *v11; // rax
  FxInterrupt *v12; // rbx
  FxDevice *v13; // rbp
  int WakeInterruptMachine; // edi
  int _a1; // eax
  FxPoolTypeOrPoolFlags v17; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&v17.UsePoolType = 0LL;
  v17.u.PoolFlags = 64LL;
  v10 = (FxInterrupt *)FxObjectHandleAllocCommon(
                         FxDriverGlobals,
                         &v17,
                         0x1C8uLL,
                         0,
                         Attributes,
                         0,
                         FxObjectTypeExternal);
  if ( v10 )
  {
    FxInterrupt::FxInterrupt(v10, FxDriverGlobals);
    v12 = v11;
    if ( v11 )
    {
      v13 = Device;
      if ( Parent )
        v13 = Parent;
      WakeInterruptMachine = FxInterrupt::Initialize(v11, Device, v13, Configuration);
      if ( WakeInterruptMachine >= 0 )
      {
        _a1 = FxObject::Commit(v12, (_FX_DRIVER_GLOBALS *)Attributes, 0LL, v13, 1u);
        WakeInterruptMachine = _a1;
        if ( _a1 < 0 )
        {
          WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xCu, 0x11u, WPP_InterruptObject_cpp_Traceguids, _a1);
        }
        else
        {
          *Interrupt = v12;
          if ( !Configuration->CanWakeDevice )
            return (unsigned int)WakeInterruptMachine;
          WakeInterruptMachine = FxInterrupt::CreateWakeInterruptMachine(v12);
          if ( WakeInterruptMachine >= 0 )
            return (unsigned int)WakeInterruptMachine;
        }
      }
      FxObject::ClearEvtCallbacks(v12);
      v12->DeleteObject(v12);
      return (unsigned int)WakeInterruptMachine;
    }
  }
  WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0xCu, 0x10u, WPP_InterruptObject_cpp_Traceguids, Device, 0xC000009A);
  return 3221225626LL;
}
