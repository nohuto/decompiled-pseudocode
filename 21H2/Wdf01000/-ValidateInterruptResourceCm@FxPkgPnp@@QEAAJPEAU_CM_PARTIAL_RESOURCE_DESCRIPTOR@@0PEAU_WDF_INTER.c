/*
 * XREFs of ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C00851D4
 * Callers:
 *     imp_WdfInterruptCreate @ 0x1C001E960 (imp_WdfInterruptCreate.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qqq @ 0x1C0030348 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C0085008 (-ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 */

__int64 __fastcall FxPkgPnp::ValidateInterruptResourceCm(
        FxPkgPnp *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmIntResourceRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmIntResource,
        _WDF_INTERRUPT_CONFIG *Configuration)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v8; // ebx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v9; // rdx
  const void *_a2; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v11; // r13
  const void *ObjectHandleUnchecked; // rax
  _LIST_ENTRY *p_m_InterruptListHead; // rcx
  int v14; // r15d
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY **p_Blink; // r9
  const void *v17; // rax
  const void *v18; // rax
  FxObject *v19; // r9
  const void *v20; // rax
  const void *_a3; // rdx
  FxObject *v23; // r9
  const void *v24; // rax
  const void *v25; // r8
  FxObject *v26; // r9
  const void *v27; // rax
  const void *v28; // rdx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v29; // [rsp+80h] [rbp+8h] BYREF
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v30; // [rsp+88h] [rbp+10h] BYREF
  _WDF_INTERRUPT_CONFIG *v31; // [rsp+98h] [rbp+20h]

  v31 = Configuration;
  m_Globals = this->m_Globals;
  v29 = CmIntResourceRaw;
  v30 = CmIntResource;
  v8 = FxPkgPnp::ValidateCmResource(this, &v29, &v30);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = v29;
  if ( v29->Type != 2 )
  {
    v8 = -1073741811;
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqd(m_Globals, 2u, 0xCu, 0x26u, WPP_PnpStateMachine_cpp_Traceguids, CmIntResourceRaw, _a2, -1073741811);
    goto LABEL_5;
  }
  v11 = v30;
  if ( v30->Type != 2 )
  {
    v8 = -1073741811;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqd(
      m_Globals,
      2u,
      0xCu,
      0x27u,
      WPP_PnpStateMachine_cpp_Traceguids,
      CmIntResource,
      ObjectHandleUnchecked,
      -1073741811);
LABEL_5:
    FxVerifierDbgBreakPoint(m_Globals);
    return (unsigned int)v8;
  }
  p_m_InterruptListHead = &this->m_InterruptListHead;
  v14 = 0;
  Flink = this->m_InterruptListHead.Flink;
  if ( Flink == &this->m_InterruptListHead )
    return 0;
  while ( 1 )
  {
    p_Blink = &Flink[-28].Blink;
    if ( v11 != (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)Flink[-2].Blink )
    {
      if ( v14 )
      {
        v8 = -1073741811;
        v17 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qL(m_Globals, 2u, 0xCu, 0x28u, WPP_PnpStateMachine_cpp_Traceguids, v17, 0xC000000D);
        goto LABEL_5;
      }
      goto LABEL_20;
    }
    if ( p_Blink[34] && v31->PassiveHandling )
    {
      FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      v24 = (const void *)FxObject::GetObjectHandleUnchecked(v23);
      WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x29u, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v24, v25);
      return (unsigned int)-1073741811;
    }
    if ( *((_BYTE *)p_Blink + 258) && v31->CanWakeDevice )
      break;
    if ( (v11->Flags & 2) != 0 )
    {
      if ( ++v14 > (unsigned int)v9->u.MessageInterrupt.Raw.MessageCount )
      {
        v8 = -1073741811;
        v18 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqd(m_Globals, 2u, 0xCu, 0x2Cu, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v18, -1073741811);
        goto LABEL_5;
      }
    }
    else
    {
      FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      v20 = (const void *)FxObject::GetObjectHandleUnchecked(v19);
      WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x2Bu, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v20, _a3);
      v9 = v29;
      p_m_InterruptListHead = &this->m_InterruptListHead;
    }
LABEL_20:
    Flink = Flink->Flink;
    if ( Flink == p_m_InterruptListHead )
      return 0;
  }
  FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  v27 = (const void *)FxObject::GetObjectHandleUnchecked(v26);
  WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x2Au, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v27, v28);
  return (unsigned int)-1073741811;
}
