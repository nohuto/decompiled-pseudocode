/*
 * XREFs of PopPlActivateDeviceIterator @ 0x140578EE0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxActivateDevice @ 0x14036B720 (PopFxActivateDevice.c)
 *     PopPlLookupDevicePowerProfile @ 0x1405790E8 (PopPlLookupDevicePowerProfile.c)
 */

char __fastcall PopPlActivateDeviceIterator(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 32);
  if ( PopPlLookupDevicePowerProfile(*(_QWORD *)(a2 + 8), v2 + 216) )
    PopFxActivateDevice(*(_QWORD *)(*(_QWORD *)(v2 + 48) + 32LL), 0, 0);
  return 1;
}
