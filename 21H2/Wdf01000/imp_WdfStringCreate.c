/*
 * XREFs of imp_WdfStringCreate @ 0x1C002F6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0005890 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00273A8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0027568 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfStringCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        const _UNICODE_STRING *UnicodeString,
        _WDF_OBJECT_ATTRIBUTES *StringAttributes,
        WDFSTRING__ **String)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  int v9; // ebx
  FxString *v10; // rax
  __int64 v11; // rax
  FxObject *v12; // rsi
  void *ParentObject; // rdx
  FxPoolTypeOrPoolFlags v14; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxObject *pParent; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], StringAttributes, 0) >= 0 )
  {
    ParentObject = StringAttributes->ParentObject;
    pParent = 0LL;
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
  }
  if ( !String )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *String = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(m_Globals, StringAttributes, 0);
    v9 = result;
    if ( (int)result >= 0 )
    {
      if ( !UnicodeString || (result = FxValidateUnicodeString(m_Globals, UnicodeString), v9 = result, (int)result >= 0) )
      {
        *(_QWORD *)&v14.UsePoolType = 0LL;
        v14.u.PoolFlags = 64LL;
        v10 = (FxString *)FxObjectHandleAllocCommon(
                            m_Globals,
                            &v14,
                            0x78uLL,
                            0,
                            StringAttributes,
                            0,
                            FxObjectTypeExternal);
        if ( v10 && (FxString::FxString(v10, m_Globals), (v12 = (FxObject *)v11) != 0LL) )
        {
          if ( UnicodeString )
            v9 = FxDuplicateUnicodeString(
                   *(_FX_DRIVER_GLOBALS **)(v11 + 16),
                   UnicodeString,
                   (_UNICODE_STRING *)(v11 + 104));
          if ( v9 < 0
            || (v9 = FxObject::Commit(v12, (_FX_DRIVER_GLOBALS *)StringAttributes, (void **)String, 0LL, 1u), v9 < 0) )
          {
            FxObject::ClearEvtCallbacks(v12);
            v12->DeleteObject(v12);
          }
        }
        else
        {
          v9 = -1073741670;
          WPP_IFR_SF_d(m_Globals, 2u, 2u, 0xAu, WPP_FxStringAPI_cpp_Traceguids, -1073741670);
        }
        return (unsigned int)v9;
      }
    }
  }
  return result;
}
