/*
 * XREFs of Controller_WdfEvtCleanupCallback @ 0x1C00341E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Controller_DeallocateIrqlTrackingArray @ 0x1C0030940 (Controller_DeallocateIrqlTrackingArray.c)
 *     Controller_RemoveControllerFromGlobalControllerList @ 0x1C0032204 (Controller_RemoveControllerFromGlobalControllerList.c)
 *     Etw_ControllerDelete @ 0x1C00475D0 (Etw_ControllerDelete.c)
 *     Controller_DestroySecureObject @ 0x1C0074504 (Controller_DestroySecureObject.c)
 */

void __fastcall Controller_WdfEvtCleanupCallback(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx

  v1 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C0060428);
  Controller_DestroySecureObject(v1);
  Controller_RemoveControllerFromGlobalControllerList(v1);
  Etw_ControllerDelete(v2, v1);
  Controller_DeallocateIrqlTrackingArray((__int64)v1);
}
