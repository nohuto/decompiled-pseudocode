/*
 * XREFs of PopPlIdleDeviceIterator @ 0x140579030
 * Callers:
 *     <none>
 * Callees:
 *     PoFxIdleDevice @ 0x14036B584 (PoFxIdleDevice.c)
 *     PopPlLookupDevicePowerProfile @ 0x1405790E8 (PopPlLookupDevicePowerProfile.c)
 */

char __fastcall PopPlIdleDeviceIterator(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 32);
  if ( PopPlLookupDevicePowerProfile(*(_QWORD *)(a2 + 8), v2 + 216) )
    PoFxIdleDevice(*(_QWORD *)(*(_QWORD *)(v2 + 48) + 32LL));
  return 1;
}
