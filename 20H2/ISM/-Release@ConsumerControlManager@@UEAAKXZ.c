/*
 * XREFs of ?Release@ConsumerControlManager@@UEAAKXZ @ 0x18009FF50
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x18009E850 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x18009F868 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x18009F944 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 *     ?Initialize@ConsumerControlManager@@AEAAJXZ @ 0x18009FA80 (-Initialize@ConsumerControlManager@@AEAAJXZ.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x18009FE3C (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 *     ?WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z @ 0x1800A00E0 (-WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037600 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?Shutdown@ConsumerControlManager@@AEAAXXZ @ 0x18009FF88 (-Shutdown@ConsumerControlManager@@AEAAXXZ.c)
 */

__int64 __fastcall ConsumerControlManager::Release(RefCountedObject *dwData)
{
  unsigned int v2; // ebx

  v2 = RefCountedObject::Release(dwData);
  if ( v2 == 1 )
    ConsumerControlManager::Shutdown((ULONG_PTR)dwData);
  return v2;
}
