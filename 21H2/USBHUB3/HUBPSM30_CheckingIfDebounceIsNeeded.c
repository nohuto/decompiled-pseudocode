/*
 * XREFs of HUBPSM30_CheckingIfDebounceIsNeeded @ 0x1C0011880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 HUBPSM30_CheckingIfDebounceIsNeeded()
{
  __int64 v0; // rax
  bool v1; // zf
  bool v2; // sf
  __int64 result; // rax

  v0 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00661C0);
  if ( (*(_DWORD *)(v0 + 4) & 0x10000) != 0 )
    return 3005LL;
  v1 = *(_DWORD *)(v0 + 88) == 0;
  v2 = *(int *)(v0 + 88) < 0;
  result = 3089LL;
  if ( v2 || v1 )
    return 3005LL;
  return result;
}
