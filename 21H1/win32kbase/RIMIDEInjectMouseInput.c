/*
 * XREFs of RIMIDEInjectMouseInput @ 0x1C0171F00
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0171CC8 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     RIMQueueMouseInput @ 0x1C017295C (RIMQueueMouseInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectMouseInput(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // esi

  v1 = *(_QWORD *)(a1 + 424);
  v2 = a1 + 88;
  v3 = v1 + 104;
  RIMLockExclusive(v1 + 104);
  if ( *(_BYTE *)(v1 + 81) )
  {
    v7 = -1073741637;
  }
  else
  {
    if ( (*(_DWORD *)(v2 + 184) & 0x2000) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
    RIMLockExclusive(v1 + 568);
    v5 = RIMQueueMouseInput((struct RawInputManagerObject *)v1, (struct RIMDEV *)v2);
    *(_QWORD *)(v1 + 576) = 0LL;
    v6 = v1 + 568;
    v7 = v5;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}
