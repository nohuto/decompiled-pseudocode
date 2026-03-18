/*
 * XREFs of ESM_WaitingToReissueStopEndpointCommand1 @ 0x1C004FCC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ESM_WaitingToReissueStopEndpointCommand1(__int64 a1)
{
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 1296LL),
    -2000000LL);
  return 1000LL;
}
