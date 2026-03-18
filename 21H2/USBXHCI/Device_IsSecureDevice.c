/*
 * XREFs of Device_IsSecureDevice @ 0x1C0015008
 * Callers:
 *     Controller_CreateWdfDevice @ 0x1C006C580 (Controller_CreateWdfDevice.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C006D740 (Controller_WdfEvtDeviceAdd.c)
 *     Controller_Create @ 0x1C00702D4 (Controller_Create.c)
 * Callees:
 *     <none>
 */

bool __fastcall Device_IsSecureDevice(__int64 a1)
{
  return (*(_DWORD *)(a1 + 28) & 0x100000) != 0;
}
