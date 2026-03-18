/*
 * XREFs of WmipUnreferenceRegEntry @ 0x1402729C4
 * Callers:
 *     WmipDeregisterRegEntry @ 0x14036EB54 (WmipDeregisterRegEntry.c)
 *     WmipForwardWmiIrp @ 0x14064675C (WmipForwardWmiIrp.c)
 *     WmipQueryWmiDataBlock @ 0x1406DDF70 (WmipQueryWmiDataBlock.c)
 *     IoWMISystemControl @ 0x14070D574 (IoWMISystemControl.c)
 *     WmipUpdateRegistration @ 0x14073DF78 (WmipUpdateRegistration.c)
 *     WmipDeregisterDevice @ 0x14073F450 (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x14073F4F0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14073F5C8 (WmipRegisterDevice.c)
 *     WmipEventNotification @ 0x140740B60 (WmipEventNotification.c)
 *     WmipRegistrationWorker @ 0x14075A280 (WmipRegistrationWorker.c)
 *     WmipFreeTraceDeviceList @ 0x1407AF2A0 (WmipFreeTraceDeviceList.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
