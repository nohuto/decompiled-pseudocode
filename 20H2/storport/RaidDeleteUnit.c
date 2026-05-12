/*
 * XREFs of RaidDeleteUnit @ 0x1C0015AA0
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C0016540 (RaidDeleteBusEnumerator.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C001C818 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitAdapterRemove @ 0x1C0046A40 (RaUnitAdapterRemove.c)
 * Callees:
 *     RaidUnitFreeResources @ 0x1C0015B28 (RaidUnitFreeResources.c)
 *     RaidUnitSavePowerCycleCount @ 0x1C0018960 (RaidUnitSavePowerCycleCount.c)
 *     RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C002C66C (RaidAdapterDisableQosWaitTimeoutCheck.c)
 *     RaidSecondaryDumpDeregister @ 0x1C0057DE0 (RaidSecondaryDumpDeregister.c)
 */

void __fastcall RaidDeleteUnit(__int64 a1)
{
  __int64 v2; // rax

  RaidUnitSavePowerCycleCount(a1);
  if ( (*(_BYTE *)(a1 + 450) & 1) != 0 && BootDriveExtension == a1 )
    RaidSecondaryDumpDeregister();
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    if ( a1 == *(_QWORD *)(v2 + 5144) )
    {
      *(_QWORD *)(v2 + 5144) = 0LL;
      v2 = *(_QWORD *)(a1 + 24);
    }
    if ( v2 && *(_BYTE *)(a1 + 3216) && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3248), 0, 1) == 1 )
      RaidAdapterDisableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  RaidUnitFreeResources(a1);
  if ( *(_QWORD *)(a1 + 1840) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1832));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}
