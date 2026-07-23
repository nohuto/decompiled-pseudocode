/*
 * XREFs of PiGetTargetDeviceNode @ 0x14073710C
 * Callers:
 *     PiProcessQueryRemoveNoFdo @ 0x140731884 (PiProcessQueryRemoveNoFdo.c)
 *     PiCheckRemovalPreconditions @ 0x140736A68 (PiCheckRemovalPreconditions.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140736FA0 (PnpRecordBlackboxPnpEventInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiGetTargetDeviceNode(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 152);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  return result;
}
