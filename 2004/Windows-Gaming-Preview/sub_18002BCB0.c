/*
 * XREFs of sub_18002BCB0 @ 0x18002BCB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002BCB0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 288);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *a2 = *(_QWORD *)(a1 + 288);
  }
  return 0LL;
}
