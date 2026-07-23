/*
 * XREFs of PoFxNotifySurprisePowerOn @ 0x14038BC60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     PopFxLockDevice @ 0x14036E434 (PopFxLockDevice.c)
 *     PopPepSurprisePowerOn @ 0x14038BCE8 (PopPepSurprisePowerOn.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140568D8C (PopDirectedDripsStartDisengageTimer.c)
 */

int __fastcall PoFxNotifySurprisePowerOn(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx

  v1 = a1;
  if ( a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  v2 = PopFxLockDevice(a1, 1);
  v3 = v2;
  if ( v2 )
  {
    LODWORD(v2) = PopPepSurprisePowerOn(*(_QWORD *)(v2 + 56));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 244), 0xFFFFFFFF) == 1 )
      LODWORD(v2) = KeSetEvent((PRKEVENT)(v3 + 248), 0, 0);
    if ( v1 )
    {
      v2 = *(_QWORD *)(v1 + 312);
      v4 = *(_QWORD *)(v2 + 40);
    }
    else
    {
      v4 = 0LL;
    }
    if ( v4 )
    {
      LODWORD(v2) = *(_DWORD *)(v4 + 760);
      if ( (v2 & 0x30000) != 0 )
        LODWORD(v2) = PopDirectedDripsStartDisengageTimer(1LL);
    }
  }
  return v2;
}
