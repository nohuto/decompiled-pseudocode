/*
 * XREFs of ??0CDeviceManager@@QEAA@XZ @ 0x1800D3074
 * Callers:
 *     _dynamic_initializer_for__g_DeviceManager__ @ 0x180003600 (_dynamic_initializer_for__g_DeviceManager__.c)
 * Callees:
 *     <none>
 */

CDeviceManager *__fastcall CDeviceManager::CDeviceManager(CDeviceManager *this)
{
  CDeviceManager *result; // rax

  *(_OWORD *)&g_DeviceManager = 0LL;
  InitializeCriticalSection(&CriticalSection);
  qword_18034D608 = 0LL;
  result = (CDeviceManager *)&g_DeviceManager;
  byte_18034D620 = 0;
  xmmword_18034D610 = 0LL;
  return result;
}
