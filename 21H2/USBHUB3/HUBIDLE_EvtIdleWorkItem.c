/*
 * XREFs of HUBIDLE_EvtIdleWorkItem @ 0x1C003C610
 * Callers:
 *     <none>
 * Callees:
 *     HUBIDLE_AddEvent @ 0x1C003C168 (HUBIDLE_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBIDLE_EvtIdleWorkItem(__int64 a1)
{
  __int64 *v1; // rax

  v1 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_1C00672D8);
  return HUBIDLE_AddEvent(*v1, 6010, 0LL);
}
