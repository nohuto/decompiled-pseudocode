/*
 * XREFs of ExecutePccWrite @ 0x1C00254F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     ExecutePccCommand @ 0x1C00254BC (ExecutePccCommand.c)
 */

__int64 ExecutePccWrite()
{
  unsigned int v0; // ebx
  __int64 *v1; // rdi
  int v2; // eax

  v0 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0014948,
    0LL);
  v1 = (__int64 *)qword_1C0014950;
  while ( v1 != &qword_1C0014950 )
  {
    v2 = ExecutePccCommand((__int64)v1);
    v1 = (__int64 *)*v1;
    if ( v2 < 0 )
      v0 = v2;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0014948);
  return v0;
}
