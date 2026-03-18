/*
 * XREFs of ?IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C02845A0
 * Callers:
 *     ?VmBusGetInternalAdapterInfoCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D7600 (-VmBusGetInternalAdapterInfoCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240C30 (-VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

bool __fastcall DXGVIRTUALMACHINE::IsVailEnabled(DXGVIRTUALMACHINE *this)
{
  bool v2; // si
  __int64 v3; // rax

  v2 = 0;
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 64));
  v3 = *((_QWORD *)this + 36);
  if ( v3 )
    v2 = *(_QWORD *)(v3 + 88) != 0LL;
  *((_QWORD *)this + 9) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 64, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
