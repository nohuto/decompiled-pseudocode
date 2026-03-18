/*
 * XREFs of ?OpenMonitorPnpKey@DXGMONITOR@@UEBAJ_NW4MonitorPnpKeyType@DxgMonitor@@PEAPEAX@Z @ 0x1C020CC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DXGMONITOR::OpenMonitorPnpKey(__int64 a1, char a2, int a3, void **a4)
{
  __int64 v4; // r10
  int v5; // eax
  struct _DEVICE_OBJECT *v6; // rcx

  v4 = *(_QWORD *)(a1 + 192);
  v5 = 0;
  v6 = *(struct _DEVICE_OBJECT **)(v4 + 8);
  if ( !v6 || !*(_BYTE *)(v4 + 16) )
    return -1073741661;
  LOBYTE(v5) = a3 == 2;
  return IoOpenDeviceRegistryKey(v6, v5 + 1, a2 != 0 ? 131097 : 983103, a4);
}
