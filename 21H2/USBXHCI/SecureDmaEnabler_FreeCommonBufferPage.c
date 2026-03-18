/*
 * XREFs of SecureDmaEnabler_FreeCommonBufferPage @ 0x1C004FDB8
 * Callers:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000182C (CommonBuffer_ReleaseBuffer.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0015B94 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C0050B4C (XilCoreCommonBuffer_FreeUnusedResources.c)
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall SecureDmaEnabler_FreeCommonBufferPage(__int64 a1, __int64 a2)
{
  char v4; // di
  char result; // al

  v4 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 8));
    v4 = 1;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1664))(
             WdfDriverGlobals,
             *(_QWORD *)(a2 + 16));
  if ( v4 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}
