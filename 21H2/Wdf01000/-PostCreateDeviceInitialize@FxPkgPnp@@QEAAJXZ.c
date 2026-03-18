/*
 * XREFs of ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C00290A4
 * Callers:
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020D0C (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C0026B98 (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0019A6C (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C00291B8 (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C00291F4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     RtlStringCchPrintfW @ 0x1C0052D18 (RtlStringCchPrintfW.c)
 *     LibraryLogEvent @ 0x1C00601B8 (LibraryLogEvent.c)
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C0068F90 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PostCreateDeviceInitialize(FxPkgPnp *this, __int64 a2, void *a3)
{
  int v4; // edi
  FxCompanionLibrary *v5; // rcx
  FxDevice *m_Device; // rdx
  unsigned __int8 IsCompanionRequiredForDevice; // al
  FX_POOL_TRACKER *v8; // rsi
  unsigned __int16 v10; // r9
  int CompanionTarget; // eax
  int v12; // ebp
  int _a1; // [rsp+28h] [rbp-110h]
  const wchar_t *companionName; // [rsp+30h] [rbp-108h] BYREF
  wchar_t insertString[104]; // [rsp+40h] [rbp-F8h] BYREF

  this->m_PnpMachine.m_PkgPnp = this;
  this->m_PnpMachine.m_EventWorker = (void (__fastcall *)(FxPkgPnp *, FxPostProcessInfo *, void *))FxPkgPnp::_PnpProcessEventInner;
  this->m_PnpMachine.m_EventWorkerContext = 0LL;
  v4 = MxWorkItem::Allocate(&this->m_PnpMachine.m_WorkItem, (_DEVICE_OBJECT *)FxLibraryGlobals.DriverObject, a3);
  if ( v4 < 0 )
  {
    v10 = 31;
LABEL_10:
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, v10, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v4);
    return (unsigned int)v4;
  }
  v4 = FxThreadedEventQueue::Init(
         &this->m_PowerMachine,
         this,
         (void (__fastcall *)(FxPkgPnp *, FxPostProcessInfo *, void *))FxPkgPnp::_PowerProcessEventInner,
         0LL);
  if ( v4 < 0 )
  {
    v10 = 32;
    goto LABEL_10;
  }
  v4 = FxThreadedEventQueue::Init(&this->m_PowerPolicyMachine, this, FxPkgPnp::_PowerPolicyProcessEventInner, 0LL);
  if ( v4 < 0 )
  {
    v10 = 33;
    goto LABEL_10;
  }
  m_Device = this->m_Device;
  companionName = 0LL;
  IsCompanionRequiredForDevice = FxCompanionLibrary::IsCompanionRequiredForDevice(v5, m_Device, &companionName);
  v8 = (FX_POOL_TRACKER *)companionName;
  if ( IsCompanionRequiredForDevice )
  {
    CompanionTarget = FxDevice::AllocateCompanionTarget(this->m_Device, &this->m_CompanionTarget);
    v12 = CompanionTarget;
    if ( CompanionTarget < 0 )
    {
      _a1 = CompanionTarget;
      if ( RtlStringCchPrintfW(
             insertString,
             0x64uLL,
             L"Service:%S, Companion:%s, Status:0x%x",
             this->m_Globals->Public.DriverName,
             v8,
             _a1) >= 0 )
        LibraryLogEvent(FxLibraryGlobals.DriverObject, -2147024893, v12, insertString, 0LL, 0);
    }
    else
    {
      FxObject::AddRef(
        this->m_CompanionTarget,
        this,
        1381,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
    }
    this->m_CompanionTargetStatus = v12;
  }
  if ( v8 )
    FxPoolFree(v8);
  return (unsigned int)v4;
}
