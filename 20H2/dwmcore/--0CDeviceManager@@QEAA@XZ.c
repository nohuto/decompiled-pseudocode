/*
 * XREFs of ??0CDeviceManager@@QEAA@XZ @ 0x1800DAB94
 * Callers:
 *     _dynamic_initializer_for__g_DeviceManager__ @ 0x1800035F0 (_dynamic_initializer_for__g_DeviceManager__.c)
 * Callees:
 *     <none>
 */

CDeviceManager *__fastcall CDeviceManager::CDeviceManager(CDeviceManager *this)
{
  CDeviceManager *result; // rax

  *(_OWORD *)&g_DeviceManager = 0LL;
  InitializeCriticalSection(&stru_180348570);
  qword_180348598 = 0LL;
  result = (CDeviceManager *)&g_DeviceManager;
  byte_1803485B0 = 0;
  xmmword_1803485A0 = 0LL;
  return result;
}
