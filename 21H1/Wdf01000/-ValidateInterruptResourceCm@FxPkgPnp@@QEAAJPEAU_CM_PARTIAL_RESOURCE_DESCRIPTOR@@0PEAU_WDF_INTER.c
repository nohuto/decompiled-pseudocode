/*
 * XREFs of ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C007C2C0
 * Callers:
 *     imp_WdfInterruptCreate @ 0x1C0078150 (imp_WdfInterruptCreate.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002FCFC (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C0032BF8 (WPP_IFR_SF_qqq.c)
 *     ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C007C0F0 (-ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
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
  unsigned __int64 _a2; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v11; // r13
  unsigned __int64 ObjectHandleUnchecked; // rax
  _LIST_ENTRY *p_m_InterruptListHead; // rcx
  int v14; // r15d
  FxPkgPnp *Flink; // rbx
  int *p_m_PowerThreadInterfaceReferenceCount; // r9
  const void *v17; // rax
  FxObject *v18; // r9
  const void *v19; // rax
  const void *_a3; // rdx
  FxObject *v22; // r9
  const void *v23; // rax
  const void *v24; // r8
  FxObject *v25; // r9
  const void *v26; // rax
  const void *v27; // rdx
  unsigned __int64 v28; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v29; // [rsp+80h] [rbp+8h] BYREF
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v30; // [rsp+88h] [rbp+10h] BYREF
  _WDF_INTERRUPT_CONFIG *v31; // [rsp+98h] [rbp+20h]

  v31 = Configuration;
  m_Globals = this->m_Globals;
  v29 = CmIntResourceRaw;
  v30 = CmIntResource;
  v8 = FxPkgPnp::ValidateCmResource(this, &v29, &v30);
  if ( v8 >= 0 )
  {
    v9 = v29;
    if ( v29->Type == 2 )
    {
      v11 = v30;
      if ( v30->Type != 2 )
      {
        v8 = -1073741811;
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qid(
          m_Globals,
          2u,
          0xCu,
          0x27u,
          WPP_PnpStateMachine_cpp_Traceguids,
          CmIntResource,
          ObjectHandleUnchecked,
          -1073741811);
        goto LABEL_5;
      }
      p_m_InterruptListHead = &this->m_InterruptListHead;
      v14 = 0;
      Flink = (FxPkgPnp *)this->m_InterruptListHead.Flink;
      if ( Flink != (FxPkgPnp *)&this->m_InterruptListHead )
      {
        do
        {
          p_m_PowerThreadInterfaceReferenceCount = &Flink[-1].m_PowerThreadInterfaceReferenceCount;
          if ( v11 == (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)Flink[-1].m_DeviceSurpriseRemoval.m_PkgPnp )
          {
            if ( *((_QWORD *)p_m_PowerThreadInterfaceReferenceCount + 34) && v31->PassiveHandling )
            {
              FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
              v23 = (const void *)FxObject::GetObjectHandleUnchecked(v22);
              WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x29u, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v23, v24);
              return (unsigned int)-1073741811;
            }
            if ( *((_BYTE *)p_m_PowerThreadInterfaceReferenceCount + 258) && v31->CanWakeDevice )
            {
              FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
              v26 = (const void *)FxObject::GetObjectHandleUnchecked(v25);
              WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x2Au, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v26, v27);
              return (unsigned int)-1073741811;
            }
            if ( (v11->Flags & 2) != 0 )
            {
              if ( ++v14 > (unsigned int)v9->u.MessageInterrupt.Raw.MessageCount )
              {
                v8 = -1073741811;
                v28 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
                WPP_IFR_SF_qid(
                  m_Globals,
                  2u,
                  0xCu,
                  0x2Cu,
                  WPP_PnpStateMachine_cpp_Traceguids,
                  CmIntResource,
                  v28,
                  -1073741811);
                goto LABEL_5;
              }
            }
            else
            {
              FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
              v19 = (const void *)FxObject::GetObjectHandleUnchecked(v18);
              WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x2Bu, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v19, _a3);
              v9 = v29;
              p_m_InterruptListHead = &this->m_InterruptListHead;
            }
          }
          else if ( v14 )
          {
            v8 = -1073741811;
            v17 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
            WPP_IFR_SF_qL(m_Globals, 2u, 0xCu, 0x28u, WPP_PnpStateMachine_cpp_Traceguids, v17, 0xC000000D);
            goto LABEL_5;
          }
          Flink = (FxPkgPnp *)Flink->__vftable;
        }
        while ( Flink != (FxPkgPnp *)p_m_InterruptListHead );
      }
      return 0;
    }
    else
    {
      v8 = -1073741811;
      _a2 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x26u, WPP_PnpStateMachine_cpp_Traceguids, CmIntResourceRaw, _a2, -1073741811);
LABEL_5:
      FxVerifierDbgBreakPoint(m_Globals);
    }
  }
  return (unsigned int)v8;
}
