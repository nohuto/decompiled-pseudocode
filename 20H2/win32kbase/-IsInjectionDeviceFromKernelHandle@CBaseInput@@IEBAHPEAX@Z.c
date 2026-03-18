/*
 * XREFs of ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C019E988
 * Callers:
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C019EA40 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01A5090 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::IsInjectionDeviceFromKernelHandle(CBaseInput *this, void *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct DEVICEINFO *i; // rax

  v4 = 0;
  if ( (struct _KTHREAD *)qword_1C024E418 == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  RIMLockExclusive((__int64)&CBaseInput::_sLock);
  for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( *((void **)i + 3) == a2 )
    {
      v4 = -__CFSHR__(*((_DWORD *)i + 46), 14);
      break;
    }
  }
  qword_1C024E418 = 0LL;
  ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
