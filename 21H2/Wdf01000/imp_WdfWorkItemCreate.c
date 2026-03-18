/*
 * XREFs of imp_WdfWorkItemCreate @ 0x1C0018C00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0005890 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0018CCC (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_DDd @ 0x1C0052E4C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfWorkItemCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_WORKITEM_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFWORKITEM__ **WorkItem)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  int result; // eax
  unsigned __int8 v9; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int _a2; // ecx
  int v12; // edi
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxObject *pParent; // [rsp+50h] [rbp+8h] BYREF

  pParent = 0LL;
  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  result = FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Attributes, 24);
  if ( result >= 0 )
  {
    FxObjectHandleGetPtr(v4, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
    if ( !Config )
      FxVerifierNullBugCheck(pParent->m_Globals, retaddr);
    if ( !WorkItem )
      FxVerifierNullBugCheck(pParent->m_Globals, retaddr);
    _a2 = Config->Size;
    if ( Config->Size == 24 )
    {
      if ( Config->EvtWorkItemFunc )
      {
        result = FxValidateObjectAttributes(pParent->m_Globals, Attributes, 0);
        if ( result >= 0 )
          return FxWorkItem::_Create(m_Globals, Config, Attributes, pParent, WorkItem);
        return result;
      }
      v12 = -1073741811;
      WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xBu, WPP_FxWorkItemApi_cpp_Traceguids, -1073741811);
    }
    else
    {
      v12 = -1073741820;
      WPP_IFR_SF_DDd(m_Globals, v9, 0x12u, 0xAu, WPP_FxWorkItemApi_cpp_Traceguids, _a2, 24, -1073741820);
    }
    return v12;
  }
  return result;
}
