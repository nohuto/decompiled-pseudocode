/*
 * XREFs of StopIdleWorker @ 0x1C0010F38
 * Callers:
 *     imp_WdfDeviceStopIdleNoTrack @ 0x1C0010EE0 (imp_WdfDeviceStopIdleNoTrack.c)
 *     imp_WdfDeviceStopIdleActual @ 0x1C0010F10 (imp_WdfDeviceStopIdleActual.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0009310 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qdd @ 0x1C005CC6C (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall StopIdleWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        unsigned __int8 WaitForD0,
        void *Tag,
        int Line,
        char *File)
{
  int _a2; // ebp
  FxDevice *v9; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxPowerIdleMachine *p_m_PowerIdleMachine; // rcx
  unsigned int _a3; // eax
  int v13; // ebx
  FxPkgPnp *m_PkgPnp; // rcx
  __int64 result; // rax
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  _a2 = WaitForD0;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  v9 = pDevice;
  m_Globals = pDevice->m_Globals;
  if ( (_BYTE)_a2 )
  {
    result = FxVerifierCheckIrqlLevel(pDevice->m_Globals, 0);
    if ( (int)result < 0 )
      return result;
    v9 = pDevice;
  }
  p_m_PowerIdleMachine = &v9->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine;
  if ( p_m_PowerIdleMachine )
  {
    _a3 = FxPowerIdleMachine::PowerReferenceWorker(p_m_PowerIdleMachine, _a2, FxPowerReferenceDefault, Tag, Line, File);
    v13 = _a3;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qdd(m_Globals, 5u, 0x12u, 0x26u, WPP_FxDeviceApi_cpp_Traceguids, Device, _a2, _a3);
    if ( v13 >= 0 )
    {
      m_PkgPnp = pDevice->m_PkgPnp;
      if ( m_PkgPnp->m_SleepStudyTrackReferences == 1
        && _InterlockedIncrement(&m_PkgPnp->m_SleepStudyPowerRefIoCount) == 1 )
      {
        m_SleepStudy = m_PkgPnp->m_SleepStudy;
        if ( m_SleepStudy )
        {
          if ( m_SleepStudy->ComponentPowerRef )
          {
            if ( unk_1C00AB330 )
              unk_1C00AB330();
          }
        }
      }
    }
  }
  else
  {
    v13 = -1073741436;
    WPP_IFR_SF_qL(m_Globals, 2u, 0x12u, 0x25u, WPP_FxDeviceApi_cpp_Traceguids, Device, 0xC0000184);
  }
  return (unsigned int)v13;
}
