/*
 * XREFs of _xxxSleepThread@16 @ 0xEFFA2
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     _xxxbFullscreenSwitch@8 @ 0x181710 (_xxxbFullscreenSwitch@8.c)
 *     _xxxIsDragging@16 @ 0x1A68B7 (_xxxIsDragging@16.c)
 * Callees:
 *     _xxxSleepThread2@20 @ 0x4510E (_xxxSleepThread2@20.c)
 */

int __stdcall xxxSleepThread(unsigned int a1, unsigned int a2)
{
  return xxxSleepThread2(a1, a2, 0);
}
