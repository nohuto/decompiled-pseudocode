/*
 * XREFs of Endpoint_UcxEvtEndpointStart @ 0x1C000FD90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStart(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int i; // esi

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             a2,
             off_1C00611A8);
  v3 = result;
  if ( !*(_BYTE *)(result + 37) )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1232))(
             WdfDriverGlobals,
             *(_QWORD *)(*(_QWORD *)(result + 88) + 72LL));
  v4 = *(_QWORD *)(result + 136);
  for ( i = 1; i <= *(_DWORD *)(v4 + 8); ++i )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1232))(
               WdfDriverGlobals,
               *(_QWORD *)(*(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(v3 + 136) + 48) + 72LL));
  return result;
}
