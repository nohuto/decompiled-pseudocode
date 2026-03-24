/*
 * XREFs of ??0CDeviceManager@@QEAA@XZ @ 0x1800DF7C4
 * Callers:
 *     _dynamic_initializer_for__g_DeviceManager__ @ 0x180003610 (_dynamic_initializer_for__g_DeviceManager__.c)
 * Callees:
 *     <none>
 */

CDeviceManager *__fastcall CDeviceManager::CDeviceManager(CDeviceManager *this)
{
  CDeviceManager *result; // rax

  *(_OWORD *)&g_DeviceManager = 0LL;
  InitializeCriticalSection(&CriticalSection);
  qword_18034B648 = 0LL;
  result = (CDeviceManager *)&g_DeviceManager;
  byte_18034B660 = 0;
  xmmword_18034B650 = 0LL;
  return result;
}
