/*
 * XREFs of Device_IsSecureDevice @ 0x1C0014234
 * Callers:
 *     Controller_CreateWdfDevice @ 0x1C006B2A0 (Controller_CreateWdfDevice.c)
 *     Controller_Create @ 0x1C006D970 (Controller_Create.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C006F7E0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     <none>
 */

bool __fastcall Device_IsSecureDevice(__int64 a1)
{
  return (*(_DWORD *)(a1 + 28) & 0x100000) != 0;
}
