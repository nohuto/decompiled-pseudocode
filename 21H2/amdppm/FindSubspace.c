/*
 * XREFs of FindSubspace @ 0x1C0025588
 * Callers:
 *     RegisterSubspace @ 0x1C0025614 (RegisterSubspace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FindSubspace(int a1)
{
  __int64 v2; // rbx
  __int64 i; // rax

  v2 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0014948,
    0LL);
  for ( i = qword_1C0014950; (__int64 *)i != &qword_1C0014950; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 48) == a1 )
    {
      v2 = i;
      break;
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0014948);
  return v2;
}
