/*
 * XREFs of sub_18013EA30 @ 0x18013EA30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18013EA30(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  if ( a2 )
  {
    *a2 = *(_QWORD *)(a1 + 24);
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return 0LL;
}
