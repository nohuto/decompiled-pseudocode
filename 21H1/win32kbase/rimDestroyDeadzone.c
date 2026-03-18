/*
 * XREFs of rimDestroyDeadzone @ 0x1C01643C0
 * Callers:
 *     RIMInitializeDeadzone @ 0x1C01676B8 (RIMInitializeDeadzone.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0167EC8 (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01766E4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

void rimDestroyDeadzone()
{
  __int64 v0; // rdx
  __int64 v1; // r8

  RIMLockExclusive((__int64)&gDeadzoneLock);
  if ( RIMDeadzone::s_pRimDeadzoneInstance )
  {
    RIMDeadzone::Release(RIMDeadzone::s_pRimDeadzoneInstance);
    if ( !*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 1) )
    {
      Win32FreePool((__int64)RIMDeadzone::s_pRimDeadzoneInstance, v0, v1);
      RIMDeadzone::s_pRimDeadzoneInstance = 0LL;
    }
  }
  qword_1C0256348 = 0LL;
  ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
  KeLeaveCriticalRegion();
}
