/*
 * XREFs of Controller_EvtDeviceFileCreate @ 0x1C0032330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_EvtDeviceFileCreate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax

  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00613D8)
                 + 8);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a3,
         off_1C00613B0);
  *(_QWORD *)(v6 + 32) = v5;
  *(_BYTE *)(v6 + 40) = 0;
  *(_BYTE *)(v6 + 52) = 1;
  *(_QWORD *)(v6 + 16) = a3;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           0LL);
}
