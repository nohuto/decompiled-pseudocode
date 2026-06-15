/*
 * XREFs of sub_18013D350 @ 0x18013D350
 * Callers:
 *     sub_1800561E0 @ 0x1800561E0 (sub_1800561E0.c)
 *     sub_18013D520 @ 0x18013D520 (sub_18013D520.c)
 *     sub_18013D630 @ 0x18013D630 (sub_18013D630.c)
 *     sub_18013E170 @ 0x18013E170 (sub_18013E170.c)
 *     sub_18013E380 @ 0x18013E380 (sub_18013E380.c)
 *     sub_18013E5F0 @ 0x18013E5F0 (sub_18013E5F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18013D350(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rcx

  if ( !a2 )
    return 2147500035LL;
  *a2 = *a1;
  v3 = *a1;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return 0LL;
}
