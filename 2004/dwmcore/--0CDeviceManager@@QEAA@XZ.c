/*
 * XREFs of ??0CDeviceManager@@QEAA@XZ @ 0x1800DB104
 * Callers:
 *     _dynamic_initializer_for__g_DeviceManager__ @ 0x180003600 (_dynamic_initializer_for__g_DeviceManager__.c)
 * Callees:
 *     <none>
 */

CDeviceManager *__fastcall CDeviceManager::CDeviceManager(CDeviceManager *this)
{
  CDeviceManager *result; // rax

  *(_OWORD *)&g_DeviceManager = 0LL;
  InitializeCriticalSection(&stru_180349580);
  qword_1803495A8 = 0LL;
  result = (CDeviceManager *)&g_DeviceManager;
  byte_1803495C0 = 0;
  xmmword_1803495B0 = 0LL;
  return result;
}
