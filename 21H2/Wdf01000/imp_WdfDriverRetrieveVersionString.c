/*
 * XREFs of imp_WdfDriverRetrieveVersionString @ 0x1C0066830
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C002D548 (-Assign@FxString@@QEAAJPEBG@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDriverRetrieveVersionString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        WDFSTRING__ *String)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  const wchar_t *v6; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]
  FxDriver *pDriver; // [rsp+30h] [rbp+8h] BYREF
  FxString *pString; // [rsp+40h] [rbp+18h] BYREF

  pDriver = 0LL;
  pString = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
  m_Globals = pDriver->m_Globals;
  if ( !String )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)String, 0x1007u, (void **)&pString);
    v6 = L"Kernel Mode Driver Framework (verifier on) version 01.033.0";
    if ( !m_Globals->FxVerifierOn )
      v6 = L"Kernel Mode Driver Framework version 01.033.0";
    return FxString::Assign(pString, v6);
  }
  return result;
}
