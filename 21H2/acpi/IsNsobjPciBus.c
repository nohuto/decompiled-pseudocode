/*
 * XREFs of IsNsobjPciBus @ 0x1C0094D74
 * Callers:
 *     ACPIBusIrpStartDeviceWorker @ 0x1C008F350 (ACPIBusIrpStartDeviceWorker.c)
 *     IsPciBus @ 0x1C0091898 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1C0094CC0 (EnableDisableRegions.c)
 *     ACPIInternalIsPci @ 0x1C00A0FB0 (ACPIInternalIsPci.c)
 *     ACPIBusIrpStopDevice @ 0x1C00ACBF0 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x1C00AEBD0 (ACPIFilterIrpStopDevice.c)
 *     ACPIInitStopDevice @ 0x1C00AEFEC (ACPIInitStopDevice.c)
 *     IsPciBusExtension @ 0x1C00B024C (IsPciBusExtension.c)
 * Callees:
 *     AMLIGetNSObjectContext @ 0x1C0001768 (AMLIGetNSObjectContext.c)
 *     IsPciBusAsync @ 0x1C001B660 (IsPciBusAsync.c)
 */

char __fastcall IsNsobjPciBus(volatile signed __int32 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  char result; // al
  _BYTE Event[32]; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+68h] [rbp+10h] BYREF

  memset(Event, 0, sizeof(Event));
  v2 = AMLIGetNSObjectContext((__int64)a1);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    if ( (v3 & 0x2000000) != 0 )
      return 1;
    if ( (v3 & 0x100000000LL) != 0 )
      return 0;
  }
  KeInitializeEvent((PRKEVENT)Event, SynchronizationEvent, 0);
  *(_DWORD *)&Event[24] = -1073741275;
  v6 = 0;
  if ( (unsigned int)IsPciBusAsync(a1, (KSPIN_LOCK)AmlisuppCompletePassive, (KSPIN_LOCK)Event, &v6) != 259 )
    return v6;
  KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
  result = v6;
  if ( *(int *)&Event[24] < 0 )
    return 0;
  return result;
}
