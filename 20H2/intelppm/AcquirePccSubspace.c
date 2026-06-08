/*
 * XREFs of AcquirePccSubspace @ 0x1C0032430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     StartPccCommand @ 0x1C003297C (StartPccCommand.c)
 */

__int64 AcquirePccSubspace()
{
  unsigned int v0; // ebx
  __int64 *v1; // rdi
  int started; // eax

  v0 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001C938,
    0LL);
  v1 = (__int64 *)qword_1C001C940;
  while ( v1 != &qword_1C001C940 )
  {
    started = StartPccCommand(v1);
    v1 = (__int64 *)*v1;
    if ( started < 0 )
      v0 = started;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001C938);
  return v0;
}
