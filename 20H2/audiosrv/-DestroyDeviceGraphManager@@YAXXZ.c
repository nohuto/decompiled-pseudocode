/*
 * XREFs of ?DestroyDeviceGraphManager@@YAXXZ @ 0x1800E47E0
 * Callers:
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800BAE14 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

void DestroyDeviceGraphManager(void)
{
  if ( g_ProcessSubmixManager )
  {
    (*(void (__fastcall **)(struct IProcessSubmixManager *))(*(_QWORD *)g_ProcessSubmixManager + 16LL))(g_ProcessSubmixManager);
    g_ProcessSubmixManager = 0LL;
  }
  if ( g_DeviceGraphManager )
  {
    (*(void (__fastcall **)(struct IDeviceGraphManager *))(*(_QWORD *)g_DeviceGraphManager + 16LL))(g_DeviceGraphManager);
    g_DeviceGraphManager = 0LL;
  }
  if ( g_DeviceGraphStore )
  {
    (*(void (__fastcall **)(struct IDeviceGraphStore *))(*(_QWORD *)g_DeviceGraphStore + 16LL))(g_DeviceGraphStore);
    g_DeviceGraphStore = 0LL;
  }
}
