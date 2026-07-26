/*
 * XREFs of ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x1C010656C
 * Callers:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C002E3C0 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisDeregisterProtocol @ 0x1C013AD50 (NdisDeregisterProtocol.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C01054D0 (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 */

void __fastcall NDIS_BIND_PROTOCOL_DRIVER::SetRunningDriver(
        NDIS_BIND_PROTOCOL_DRIVER *this,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        enum CallRunMode a3)
{
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    v6.m_State = Unlocked;
    v6.m_Lock = (KPushLockBase *)(qword_1C00E4418 + 16);
    v6.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v6);
    this->RunningDriver = a2;
    this->NeedsBindCompleteEvent = 1;
    KLockHolder::~KLockHolder(&v6);
  }
  NDIS_BIND_DRIVER_BASE::SetRunningDriverIsReady(&this->NDIS_BIND_DRIVER_BASE, a2 != 0LL, a3);
  if ( !a2 )
  {
    v6.m_State = Unlocked;
    v6.m_Lock = (KPushLockBase *)(qword_1C00E4418 + 16);
    v6.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v6);
    this->RunningDriver = 0LL;
    KLockHolder::~KLockHolder(&v6);
  }
}
