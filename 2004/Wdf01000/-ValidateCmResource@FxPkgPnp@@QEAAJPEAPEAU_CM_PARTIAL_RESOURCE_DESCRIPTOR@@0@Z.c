/*
 * XREFs of ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C007C0F0
 * Callers:
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C007C2C0 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002FCFC (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxPkgPnp::ValidateCmResource(
        FxPkgPnp *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResourceRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResource)
{
  FxCmResList *m_Resources; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _LIST_ENTRY *Flink; // r10
  FxCollectionInternal *v9; // r9
  _LIST_ENTRY **p_Blink; // r10
  _LIST_ENTRY **v11; // r11
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *v13; // rbp
  const void *v14; // rbx
  unsigned int v15; // ebx
  unsigned __int64 v16; // rax
  int v17; // edx
  const void *_a1; // r8
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v19; // r15
  unsigned __int64 v20; // rax
  int v21; // edx
  unsigned __int16 v22; // r9
  const void *v23; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v24; // rbp
  unsigned __int64 v25; // rax
  int v26; // edx
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void **v28; // r8
  int v29; // edx
  __int64 _a2; // [rsp+30h] [rbp-28h]
  int _a3; // [rsp+38h] [rbp-20h]

  m_Resources = this->m_Resources;
  m_Globals = this->m_Globals;
  Flink = m_Resources->m_ListHead.Flink;
  v9 = &m_Resources->FxCollectionInternal;
  p_Blink = &Flink[-1].Blink;
  v11 = &this->m_ResourcesRaw->m_ListHead.Flink[-1].Blink;
  if ( p_Blink == (_LIST_ENTRY **)v9 )
    goto LABEL_13;
  do
  {
    v12 = *p_Blink;
    v13 = *v11;
    if ( (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&(*p_Blink)[7].Blink + 4) == *CmResource )
      break;
    p_Blink = &p_Blink[1][-1].Blink;
    v11 = &v11[1][-1].Blink;
  }
  while ( p_Blink != (_LIST_ENTRY **)v9 );
  if ( p_Blink == (_LIST_ENTRY **)v9 )
  {
LABEL_13:
    v15 = -1073741811;
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x22u, WPP_PnpStateMachine_cpp_Traceguids, *v28, ObjectHandleUnchecked, v29);
    goto LABEL_14;
  }
  v14 = (char *)&v13[7].Blink + 4;
  if ( (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&v13[7].Blink + 4) != *CmResourceRaw )
  {
    v15 = -1073741811;
    v16 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x23u, WPP_PnpStateMachine_cpp_Traceguids, _a1, v16, v17);
LABEL_14:
    FxVerifierDbgBreakPoint(m_Globals);
    return v15;
  }
  v19 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v12[6].Blink;
  if ( RtlCompareMemory((char *)&v12[7].Blink + 4, &v12[6].Blink, 0x14uLL) != 20 )
  {
    v15 = -1073741811;
    v20 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    _a3 = v21;
    v22 = 36;
    _a2 = v20;
    v23 = *CmResource;
LABEL_9:
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, v22, WPP_PnpStateMachine_cpp_Traceguids, v23, _a2, _a3);
    goto LABEL_14;
  }
  v24 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v13[6].Blink;
  if ( RtlCompareMemory(v14, v24, 0x14uLL) != 20 )
  {
    v15 = -1073741811;
    v25 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    _a3 = v26;
    v22 = 37;
    _a2 = v25;
    v23 = *CmResourceRaw;
    goto LABEL_9;
  }
  *CmResource = v19;
  v15 = 0;
  *CmResourceRaw = v24;
  return v15;
}
