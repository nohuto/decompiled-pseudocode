/*
 * XREFs of ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C00811F4
 * Callers:
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0050270 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C0083CD8 (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0013F40 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     RtlStringCchPrintfW @ 0x1C002D9D8 (RtlStringCchPrintfW.c)
 *     LibraryLogEvent @ 0x1C0041858 (LibraryLogEvent.c)
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C0041DE4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C004F7B4 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C008A4FC (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 */

__int64 __fastcall FxPkgPnp::PostCreateDeviceInitialize(FxPkgPnp *this, __int64 a2, void *a3)
{
  int v4; // eax
  int v5; // edi
  unsigned __int16 v6; // r9
  int v7; // eax
  FxCompanionLibrary *v8; // rcx
  FxDevice *m_Device; // rdx
  char IsCompanionRequiredForDevice; // al
  FX_POOL_TRACKER *v11; // rbp
  int CompanionTarget; // eax
  int v13; // esi
  int _a1; // [rsp+28h] [rbp-110h]
  const wchar_t *companionName; // [rsp+30h] [rbp-108h] BYREF
  wchar_t insertString[104]; // [rsp+40h] [rbp-F8h] BYREF

  this->m_PnpMachine.m_PkgPnp = this;
  this->m_PnpMachine.m_EventWorker = (void (__fastcall *)(FxPkgPnp *, FxPostProcessInfo *, void *))FxPkgPnp::_PnpProcessEventInner;
  this->m_PnpMachine.m_EventWorkerContext = 0LL;
  v4 = MxWorkItem::Allocate(
         &this->m_PnpMachine.m_WorkItem,
         (_DEVICE_OBJECT *)WPP_GLOBAL_WDF_Control.DeviceExtension,
         a3);
  v5 = 0;
  if ( v4 < 0 )
    v5 = v4;
  if ( v5 < 0 )
  {
    v6 = 31;
LABEL_5:
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, v6, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v5);
    return (unsigned int)v5;
  }
  v7 = FxThreadedEventQueue::Init(&this->m_PowerMachine, this, FxPkgPnp::_PowerProcessEventInner, 0LL);
  v5 = 0;
  if ( v7 < 0 )
    v5 = v7;
  if ( v5 < 0 )
  {
    v6 = 32;
    goto LABEL_5;
  }
  v5 = FxThreadedEventQueue::Init(&this->m_PowerPolicyMachine, this, FxPkgPnp::_PowerPolicyProcessEventInner, 0LL);
  if ( v5 < 0 )
  {
    v6 = 33;
    goto LABEL_5;
  }
  m_Device = this->m_Device;
  companionName = 0LL;
  IsCompanionRequiredForDevice = FxCompanionLibrary::IsCompanionRequiredForDevice(v8, m_Device, &companionName);
  v11 = (FX_POOL_TRACKER *)companionName;
  if ( IsCompanionRequiredForDevice )
  {
    CompanionTarget = FxDevice::AllocateCompanionTarget(this->m_Device, &this->m_CompanionTarget);
    v13 = CompanionTarget;
    if ( CompanionTarget < 0 )
    {
      _a1 = CompanionTarget;
      if ( (int)RtlStringCchPrintfW(
                  insertString,
                  0x64uLL,
                  (wchar_t *)L"Service:%S, Companion:%s, Status:0x%x",
                  this->m_Globals->Public.DriverName,
                  v11,
                  _a1) >= 0 )
        LibraryLogEvent(
          (_DRIVER_OBJECT *)WPP_GLOBAL_WDF_Control.DeviceExtension,
          -2147024893,
          v13,
          insertString,
          0LL,
          0);
    }
    else
    {
      FxObject::AddRef(
        this->m_CompanionTarget,
        this,
        1377,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
    }
    this->m_CompanionTargetStatus = v13;
  }
  if ( v11 )
    FxPoolFree(v11);
  return (unsigned int)v5;
}
