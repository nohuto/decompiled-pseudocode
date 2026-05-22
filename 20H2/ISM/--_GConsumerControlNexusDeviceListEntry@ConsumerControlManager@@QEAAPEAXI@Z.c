/*
 * XREFs of ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x18009E9DC
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x18009E850 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x18009EB34 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z @ 0x18009ECD0 (-OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z.c)
 *     ??1ConsumerControlManager@@EEAA@XZ @ 0x18009F6BC (--1ConsumerControlManager@@EEAA@XZ.c)
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x18009FBA0 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x1800A000C (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037600 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ConsumerControlManager::ConsumerControlNexusDeviceListEntry *__fastcall ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry *this)
{
  RefCountedObject *v2; // rcx

  v2 = (RefCountedObject *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    RefCountedObject::Release(v2);
  }
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
