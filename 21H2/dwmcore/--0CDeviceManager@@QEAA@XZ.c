/*
 * XREFs of ??0CDeviceManager@@QEAA@XZ @ 0x1800F7E34
 * Callers:
 *     _dynamic_initializer_for__g_DeviceManager__ @ 0x180003D80 (_dynamic_initializer_for__g_DeviceManager__.c)
 * Callees:
 *     <none>
 */

CDeviceManager *__fastcall CDeviceManager::CDeviceManager(CDeviceManager *this)
{
  CDeviceManager *result; // rax

  qword_1803D75A0 = 0LL;
  g_DeviceManager = 0LL;
  InitializeCriticalSection(&stru_1803D75A8);
  qword_1803D75E0 = 0LL;
  result = (CDeviceManager *)&g_DeviceManager;
  byte_1803D75E8 = 0;
  xmmword_1803D75D0 = 0LL;
  return result;
}
