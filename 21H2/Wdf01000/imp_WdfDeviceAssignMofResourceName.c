/*
 * XREFs of imp_WdfDeviceAssignMofResourceName @ 0x1C00323A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00273A8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceAssignMofResourceName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _UNICODE_STRING *MofResourceName)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned int _a2; // edi
  unsigned __int16 v8; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !MofResourceName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, MofResourceName);
    if ( (int)result >= 0 )
    {
      if ( pDevice->m_MofResourceName.Buffer )
      {
        _a2 = -1073741808;
        v8 = 14;
      }
      else
      {
        _a2 = FxDuplicateUnicodeString(m_Globals, MofResourceName, &pDevice->m_MofResourceName);
        if ( (_a2 & 0x80000000) == 0 )
          return _a2;
        v8 = 15;
      }
      WPP_IFR_SF_qL(m_Globals, 2u, 0x12u, v8, WPP_FxDeviceApiKm_cpp_Traceguids, Device, _a2);
      return _a2;
    }
  }
  return result;
}
