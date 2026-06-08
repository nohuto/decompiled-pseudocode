/*
 * XREFs of AddSubspace @ 0x1C00055B4
 * Callers:
 *     RegisterSubspace @ 0x1C0025614 (RegisterSubspace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AddSubspace(_QWORD *a1)
{
  _QWORD *v2; // rax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0014948,
    0LL);
  while ( 1 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      qword_1C0014940);
    if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) >= 0 )
      break;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_1C0014940);
  }
  v2 = (_QWORD *)qword_1C0014958;
  if ( *(__int64 **)qword_1C0014958 != &qword_1C0014950 )
    __fastfail(3u);
  *a1 = &qword_1C0014950;
  a1[1] = v2;
  *v2 = a1;
  ++dword_1C0014960;
  qword_1C0014958 = (__int64)a1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(WdfDriverGlobals, qword_1C0014940);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           qword_1C0014948);
}
