/*
 * XREFs of imp_WdfObjectCreate @ 0x1C00112B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0005890 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0011378 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfObjectCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **Object)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  int v7; // edi
  void *_a1; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxObject *pParent; // [rsp+40h] [rbp+8h] BYREF
  FxUserObject *pUserObject; // [rsp+50h] [rbp+18h] BYREF

  pUserObject = 0LL;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Attributes, 0) >= 0 )
  {
    pParent = 0LL;
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
  }
  if ( !Object )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, Attributes, 2);
  if ( (int)result >= 0 )
  {
    v7 = FxUserObject::_Create(m_Globals, Attributes, &pUserObject);
    if ( v7 >= 0 )
    {
      _a1 = (void *)FxObject::GetObjectHandleUnchecked(pUserObject);
      *Object = _a1;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_q(m_Globals, 5u, 0x13u, 0xAu, WPP_FxUserObjectApi_cpp_Traceguids, _a1);
    }
    return (unsigned int)v7;
  }
  return result;
}
