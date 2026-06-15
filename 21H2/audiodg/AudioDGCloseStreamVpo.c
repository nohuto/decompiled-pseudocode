/*
 * XREFs of AudioDGCloseStreamVpo @ 0x14004B670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioDGCloseStreamVpo(__int64 a1, _QWORD *a2)
{
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  *a2 = 0LL;
  return 0LL;
}
