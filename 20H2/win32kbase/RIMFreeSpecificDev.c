/*
 * XREFs of RIMFreeSpecificDev @ 0x1C0075854
 * Callers:
 *     RIMUnregisterForInput @ 0x1C0026970 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C007574C (RIMRemoveDevOfInputType.c)
 *     RIMFreeDev @ 0x1C0150B40 (RIMFreeDev.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01579E4 (RIMIDERemoveInjectionDevice.c)
 * Callees:
 *     rimDoRimDevChange @ 0x1C002575C (rimDoRimDevChange.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     rimDereferenceDev @ 0x1C0075E48 (rimDereferenceDev.c)
 *     RIMRemoveHoldingFrame @ 0x1C0077A20 (RIMRemoveHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeSpecificDev(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v7; // eax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v11; // rdx

  v4 = *(_QWORD *)(a2 + 336);
  if ( !v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    v4 = *(_QWORD *)(a2 + 336);
  }
  if ( a1 != v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !*(_QWORD *)(a1 + 640) || *(_DWORD *)(a1 + 864) )
    v7 = 1;
  else
    v7 = (unsigned __int16)(~(unsigned __int16)*(_DWORD *)(a2 + 184) & 0x2000) >> 13;
  if ( v7 )
    rimDoRimDevChange(a1, a2, 4LL, a4);
  v8 = (_QWORD *)(a2 + 104);
  v9 = *(_QWORD *)(a2 + 104);
  if ( v9 != a2 + 104 )
  {
    if ( *(_QWORD **)(v9 + 8) != v8 || (v11 = *(_QWORD **)(a2 + 112), (_QWORD *)*v11 != v8) )
      __fastfail(3u);
    *v11 = v9;
    *(_QWORD *)(v9 + 8) = v11;
    *(_QWORD *)(a2 + 112) = a2 + 104;
    *v8 = v8;
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
  {
    RIMLockExclusive((__int64)&gObListLock);
    *(_DWORD *)(a2 + 200) |= 4u;
    qword_1C024E368 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *(_BYTE *)(a2 + 48) == 2 )
    RIMRemoveHoldingFrame(a1, a2);
  return rimDereferenceDev(a2);
}
