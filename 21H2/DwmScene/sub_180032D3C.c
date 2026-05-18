/*
 * XREFs of sub_180032D3C @ 0x180032D3C
 * Callers:
 *     sub_180038950 @ 0x180038950 (sub_180038950.c)
 *     sub_18003A930 @ 0x18003A930 (sub_18003A930.c)
 *     sub_18003AAF0 @ 0x18003AAF0 (sub_18003AAF0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180032D3C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 128);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
