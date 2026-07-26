/*
 * XREFs of ??0KPushLock@@QEAA@XZ @ 0x1C01221D0
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C0031E34 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C0144F14 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

KPushLock *__fastcall KPushLock::KPushLock(KPushLock *this)
{
  this->m_Lock.Value = 0LL;
  return this;
}
