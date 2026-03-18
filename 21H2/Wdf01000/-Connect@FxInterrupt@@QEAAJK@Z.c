/*
 * XREFs of ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C0012C10
 * Callers:
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C0012BA0 (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     ?ForceReconnect@FxInterrupt@@QEAAJXZ @ 0x1C008D278 (-ForceReconnect@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InterruptEnable@FxInterrupt@@AEAAJXZ @ 0x1C0012CC8 (-InterruptEnable@FxInterrupt@@AEAAJXZ.c)
 *     ?ConnectInternal@FxInterrupt@@QEAAJXZ @ 0x1C0012D10 (-ConnectInternal@FxInterrupt@@QEAAJXZ.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00532C0 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qDDDDsdisd @ 0x1C008D4F8 (WPP_IFR_SF_qDDDDsdisd.c)
 *     ?ReportActive@FxInterrupt@@QEAAXE@Z @ 0x1C008D7B0 (-ReportActive@FxInterrupt@@QEAAXE@Z.c)
 */

int __fastcall FxInterrupt::Connect(FxInterrupt *this, char NotifyFlags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxWakeInterruptMachine *m_WakeInterruptMachine; // rax
  int id; // esi
  int result; // eax
  int v7; // ebx
  const char *_a10; // r10
  const char *flags; // r9
  const void *ObjectHandleUnchecked; // rax
  const void *v11; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]

  m_Globals = this->m_Globals;
  if ( (NotifyFlags & 8) != 0 )
  {
    m_WakeInterruptMachine = this->m_WakeInterruptMachine;
    if ( m_WakeInterruptMachine )
    {
      if ( m_WakeInterruptMachine->m_ActiveForWake )
      {
        m_WakeInterruptMachine->m_ActiveForWake = 0;
        return 0;
      }
    }
  }
  if ( this->m_UseSoftDisconnect
    && FxLibraryGlobals.IoReportInterruptInactive
    && this->m_Interrupt
    && this->m_Connected
    && (NotifyFlags & 8) != 0 )
  {
    FxInterrupt::ReportActive(this, 1u);
$Enable:
    result = FxInterrupt::InterruptEnable(this);
    v7 = result;
    if ( result < 0 )
    {
      FxObject::GetObjectHandleUnchecked(this);
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqqd(
        m_Globals,
        2u,
        0xCu,
        0x18u,
        WPP_InterruptObject_cpp_Traceguids,
        ObjectHandleUnchecked,
        v11,
        (__int64)this->m_Interrupt,
        v7);
      return v7;
    }
    else
    {
      this->m_Enabled = 1;
    }
    return result;
  }
  if ( this->m_ForceDisconnected || !this->m_InterruptInfo.Vector )
    return 0;
  if ( (NotifyFlags & 1) != 0 )
    goto $Enable;
  id = FxInterrupt::ConnectInternal(this);
  if ( id >= 0 )
  {
    this->m_Connected = 1;
    this->m_Active = 1;
    goto $Enable;
  }
  this->m_Interrupt = 0LL;
  _a10 = "True";
  flags = "True";
  if ( !this->m_FloatingSave )
    flags = "False";
  if ( this->m_InterruptInfo.ShareDisposition != 3 )
    _a10 = "False";
  WPP_IFR_SF_qDDDDsdisd(
    m_Globals,
    this->m_SynchronizeIrql,
    this->m_InterruptInfo.Irql,
    (unsigned __int16)flags,
    traceGuid,
    this->m_SpinLock,
    this->m_InterruptInfo.Vector,
    this->m_InterruptInfo.Irql,
    this->m_SynchronizeIrql,
    this->m_InterruptInfo.Mode,
    _a10,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.TargetProcessorSet,
    flags,
    id);
  return id;
}
