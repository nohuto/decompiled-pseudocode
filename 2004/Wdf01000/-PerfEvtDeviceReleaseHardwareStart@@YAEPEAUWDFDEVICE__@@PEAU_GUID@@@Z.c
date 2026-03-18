/*
 * XREFs of ?PerfEvtDeviceReleaseHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C0043DAC
 * Callers:
 *     VfEvtDeviceReleaseHardware @ 0x1C00C4C30 (VfEvtDeviceReleaseHardware.c)
 * Callees:
 *     ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C002E638 (-_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C0043F80 (McTemplateK0pp_EtwWriteTransfer.c)
 */

char __fastcall PerfEvtDeviceReleaseHardwareStart(WDFDEVICE__ *Handle, _GUID *pActivityId)
{
  char v3; // bl
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int (__fastcall *Method)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbp
  _MCGEN_TRACE_CONTEXT *v7; // rcx
  unsigned __int16 offset; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  offset = 0;
  m_Globals = FxObject::_GetObjectFromHandle((unsigned __int64)Handle, &offset)->m_Globals;
  if ( (m_Globals->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    v3 = 1;
    Method = m_Globals->Driver->m_DriverDeviceAdd.Method;
    EtwActivityIdControl(3u, pActivityId);
    if ( ((__int64)WPP_GLOBAL_WDF_Control.DeviceExtension & 1) != 0 )
      McTemplateK0pp_EtwWriteTransfer(v7, &FX_POWER_HW_RELEASE_START, pActivityId, Method, Handle);
  }
  return v3;
}
