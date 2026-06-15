/*
 * XREFs of ?ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ @ 0x1800C1B1C
 * Callers:
 *     ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x1800C0328 (-HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ.c)
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1800C1050 (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VolumeHardwareLogger::ScheduleTimer(VolumeHardwareLogger *this)
{
  struct _TP_TIMER *v1; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 56) )
  {
    pftDueTime.dwHighDateTime = -1;
    v1 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
    pftDueTime.dwLowDateTime = -600000000;
    SetThreadpoolTimer(v1, &pftDueTime, 0, 0);
  }
}
