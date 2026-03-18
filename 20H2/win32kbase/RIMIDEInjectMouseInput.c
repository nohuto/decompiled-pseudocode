/*
 * XREFs of RIMIDEInjectMouseInput @ 0x1C0169650
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0169418 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     RIMQueueMouseInput @ 0x1C016A0AC (RIMQueueMouseInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectMouseInput(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // esi

  v1 = *(_QWORD *)(a1 + 424);
  v2 = a1 + 88;
  v3 = v1 + 104;
  RIMLockExclusive(v1 + 104);
  if ( *(_BYTE *)(v1 + 81) )
  {
    v10 = -1073741637;
  }
  else
  {
    if ( (*(_DWORD *)(v2 + 184) & 0x2000) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
    RIMLockExclusive(v1 + 568);
    v8 = RIMQueueMouseInput((struct RawInputManagerObject *)v1, (struct RIMDEV *)v2);
    *(_QWORD *)(v1 + 576) = 0LL;
    v9 = v1 + 568;
    v10 = v8;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v10;
}
