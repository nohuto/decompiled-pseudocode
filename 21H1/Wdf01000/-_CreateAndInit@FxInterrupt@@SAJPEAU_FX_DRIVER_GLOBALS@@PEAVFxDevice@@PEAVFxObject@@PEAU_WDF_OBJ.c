/*
 * XREFs of ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C0089CC8
 * Callers:
 *     imp_WdfInterruptCreate @ 0x1C0078150 (imp_WdfInterruptCreate.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059E9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0088DE8 (--0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C0089250 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C00896E8 (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
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
  FxDevice *v14; // rbp
  int WakeInterruptMachine; // edi
  int v16; // eax

  v10 = (FxInterrupt *)FxObjectHandleAlloc(
                         FxDriverGlobals,
                         ExDefaultNonPagedPoolType,
                         0x1C8uLL,
                         0,
                         Attributes,
                         0,
                         FxObjectTypeExternal);
  if ( v10 )
  {
    FxInterrupt::FxInterrupt(v10, FxDriverGlobals);
    v12 = v11;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0xCu, 0x10u, WPP_InterruptObject_cpp_Traceguids, Device, 0xC000009A);
    return 3221225626LL;
  }
  v14 = Device;
  if ( Parent )
    v14 = Parent;
  WakeInterruptMachine = FxInterrupt::Initialize(v12, Device, v14, Configuration);
  if ( WakeInterruptMachine >= 0 )
  {
    v16 = FxObject::Commit(v12, (_FX_DRIVER_GLOBALS *)Attributes, 0LL, v14, 1u);
    WakeInterruptMachine = v16;
    if ( v16 >= 0 )
    {
      *Interrupt = v12;
      if ( Configuration->CanWakeDevice )
        WakeInterruptMachine = FxInterrupt::CreateWakeInterruptMachine(v12);
      if ( WakeInterruptMachine >= 0 )
        return (unsigned int)WakeInterruptMachine;
    }
    else
    {
      WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xCu, 0x11u, WPP_InterruptObject_cpp_Traceguids, v16);
    }
  }
  FxObject::ClearEvtCallbacks(v12);
  v12->DeleteObject(v12);
  return (unsigned int)WakeInterruptMachine;
}
