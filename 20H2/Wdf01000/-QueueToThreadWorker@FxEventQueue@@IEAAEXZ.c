/*
 * XREFs of ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C001199C
 * Callers:
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C000E828 (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011740 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011B20 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007B2F8 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 */

char __fastcall FxEventQueue::QueueToThreadWorker(FxEventQueue *this)
{
  KIRQL v2; // bp
  unsigned __int8 m_QueueFlags; // al
  char v4; // bl
  const void *_a1; // rax
  __int64 v7; // rdx
  __int64 v8; // r10

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  if ( this->m_QueueHead == this->m_QueueTail )
  {
    v4 = 0;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qq(
      *(_FX_DRIVER_GLOBALS **)(v8 + 16),
      4u,
      0xCu,
      0xCu,
      WPP_EventQueue_cpp_Traceguids,
      _a1,
      *(const void **)(v7 + 144));
  }
  else
  {
    m_QueueFlags = this->m_QueueFlags;
    v4 = 1;
    if ( (m_QueueFlags & 1) != 0 )
      v4 = 0;
    else
      this->m_QueueFlags = m_QueueFlags | 1;
  }
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v2);
  return v4;
}
