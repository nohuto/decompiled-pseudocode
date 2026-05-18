/*
 * XREFs of sub_180070900 @ 0x180070900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall sub_180070900(__int64 a1, _DWORD *a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL))(a1);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, 0LL) )
    *a2 &= ~2u;
  return a2;
}
