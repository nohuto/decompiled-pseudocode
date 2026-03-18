/*
 * XREFs of imp_WdfRegistryQueryValue @ 0x1C0015400
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0015510 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRegistryQueryValue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        unsigned int ValueLength,
        void *Value,
        unsigned int *ValueLengthQueried,
        unsigned int *ValueType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  void *v12; // rsi
  signed int v13; // eax
  signed int v14; // edi
  unsigned __int8 v15; // dl
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxRegKey *pKey; // [rsp+60h] [rbp+8h] BYREF

  pKey = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Key, 0x1006u, (void **)&pKey);
  m_Globals = pKey->m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( result >= 0 )
    {
      v12 = Value;
      v13 = FxRegKey::_QueryValue(m_Globals, pKey->m_Key, ValueName, ValueLength, Value, ValueLengthQueried, ValueType);
      v14 = v13;
      if ( v13 < 0 )
      {
        v15 = 2;
        if ( v13 != -2147483643 || v12 || ValueLength || (v15 = 5, m_Globals->FxVerboseOn) )
          WPP_IFR_SF_qL(m_Globals, v15, 2u, 0xEu, WPP_FxRegistryAPI_cpp_Traceguids, Key, v13);
      }
      return v14;
    }
  }
  return result;
}
