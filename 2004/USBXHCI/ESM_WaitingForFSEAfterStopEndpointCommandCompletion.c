/*
 * XREFs of ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x1C000E230
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C0007E70 (ESM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ESM_WaitingForFSEAfterStopEndpointCommandCompletion(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx

  v1 = *(KSPIN_LOCK **)(a1 + 960);
  _m_prefetchw(v1 + 4);
  if ( (_InterlockedXor((volatile signed __int32 *)v1 + 8, 8u) & 8) != 0 )
    ESM_AddEvent(v1 + 36, 118);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, KSPIN_LOCK, __int64))(WdfFunctions_01023 + 2552))(
    WdfDriverGlobals,
    v1[162],
    -20000000LL);
  return 1000LL;
}
