/*
 * XREFs of Device_IsSecureDevice @ 0x1C0015934
 * Callers:
 *     Controller_Create @ 0x1C006C504 (Controller_Create.c)
 *     Controller_CreateWdfDevice @ 0x1C006E550 (Controller_CreateWdfDevice.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C0071640 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     <none>
 */

bool __fastcall Device_IsSecureDevice(__int64 a1)
{
  return (*(_DWORD *)(a1 + 28) & 0x100000) != 0;
}
