/*
 * XREFs of imp_WdfDeviceCreateSymbolicLink @ 0x1C00313A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C00278E4 (--1FxAutoString@@QEAA@XZ.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0031464 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreateSymbolicLink(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _UNICODE_STRING *SymbolicLinkName)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int SymbolicLink; // ebx
  unsigned __int16 v8; // r9
  FxAutoString pdoName; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxDevice *pDevice; // [rsp+70h] [rbp+8h] BYREF

  pDevice = 0LL;
  pdoName = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !SymbolicLinkName )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( !SymbolicLinkName->Length )
  {
    v8 = 29;
    goto LABEL_11;
  }
  SymbolicLink = FxVerifierCheckIrqlLevel(pDevice->m_Globals, 0);
  if ( SymbolicLink >= 0 )
  {
    SymbolicLink = FxValidateUnicodeString(m_Globals, SymbolicLinkName);
    if ( SymbolicLink >= 0 )
    {
      if ( !pDevice->m_SymbolicLinkName.Buffer )
      {
        SymbolicLink = FxDevice::CreateSymbolicLink(pDevice, m_Globals, SymbolicLinkName);
        goto LABEL_7;
      }
      v8 = 30;
LABEL_11:
      SymbolicLink = -1073741808;
      WPP_IFR_SF_qL(m_Globals, 2u, 0x12u, v8, WPP_FxDeviceApi_cpp_Traceguids, Device, 0xC0000010);
    }
  }
LABEL_7:
  FxAutoString::~FxAutoString(&pdoName);
  return (unsigned int)SymbolicLink;
}
