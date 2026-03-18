/*
 * XREFs of WmipUnreferenceRegEntry @ 0x14023FFF4
 * Callers:
 *     WmipDeregisterRegEntry @ 0x140370AA4 (WmipDeregisterRegEntry.c)
 *     WmipForwardWmiIrp @ 0x140647D4C (WmipForwardWmiIrp.c)
 *     WmipQueryWmiDataBlock @ 0x14065C130 (WmipQueryWmiDataBlock.c)
 *     IoWMISystemControl @ 0x1406DF9A4 (IoWMISystemControl.c)
 *     WmipUpdateRegistration @ 0x14074CB5C (WmipUpdateRegistration.c)
 *     WmipDeregisterDevice @ 0x14074E030 (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x14074E0D0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14074E1A8 (WmipRegisterDevice.c)
 *     WmipEventNotification @ 0x14074F740 (WmipEventNotification.c)
 *     WmipRegistrationWorker @ 0x140768A40 (WmipRegistrationWorker.c)
 *     WmipFreeTraceDeviceList @ 0x1407BD1E0 (WmipFreeTraceDeviceList.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
