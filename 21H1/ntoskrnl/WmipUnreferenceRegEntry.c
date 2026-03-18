/*
 * XREFs of WmipUnreferenceRegEntry @ 0x1402DF324
 * Callers:
 *     WmipDeregisterRegEntry @ 0x14036DF24 (WmipDeregisterRegEntry.c)
 *     WmipForwardWmiIrp @ 0x1406818BC (WmipForwardWmiIrp.c)
 *     WmipQueryWmiDataBlock @ 0x1406BCBE0 (WmipQueryWmiDataBlock.c)
 *     IoWMISystemControl @ 0x1406E9744 (IoWMISystemControl.c)
 *     WmipUpdateRegistration @ 0x14073C3F8 (WmipUpdateRegistration.c)
 *     WmipDeregisterDevice @ 0x14073D8D0 (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x14073D970 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14073DA48 (WmipRegisterDevice.c)
 *     WmipEventNotification @ 0x14073EFE0 (WmipEventNotification.c)
 *     WmipRegistrationWorker @ 0x140758830 (WmipRegistrationWorker.c)
 *     WmipFreeTraceDeviceList @ 0x1407AC140 (WmipFreeTraceDeviceList.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
