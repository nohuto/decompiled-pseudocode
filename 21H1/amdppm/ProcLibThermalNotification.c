/*
 * XREFs of ProcLibThermalNotification @ 0x1C0028C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcLibThermalNotification(__int64 a1, int a2)
{
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00133F8,
    0LL);
  if ( *(_DWORD *)(a1 + 720) != a2 )
  {
    *(_DWORD *)(a1 + 720) = a2;
    ((void (__fastcall *)(__int64))qword_1C00137C8)(a1);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           qword_1C00133F8);
}
