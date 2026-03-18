/*
 * XREFs of rimDestroyDeadzone @ 0x1C015BB10
 * Callers:
 *     RIMInitializeDeadzone @ 0x1C015EE08 (RIMInitializeDeadzone.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C015F618 (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C016DF84 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

void rimDestroyDeadzone()
{
  RIMLockExclusive((__int64)&gDeadzoneLock);
  if ( RIMDeadzone::s_pRimDeadzoneInstance )
  {
    RIMDeadzone::Release(RIMDeadzone::s_pRimDeadzoneInstance);
    if ( !*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 1) )
    {
      Win32FreePool((__int64)RIMDeadzone::s_pRimDeadzoneInstance);
      RIMDeadzone::s_pRimDeadzoneInstance = 0LL;
    }
  }
  qword_1C024E3D8 = 0LL;
  ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
  KeLeaveCriticalRegion();
}
