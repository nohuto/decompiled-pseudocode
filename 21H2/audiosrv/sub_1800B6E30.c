/*
 * XREFs of sub_1800B6E30 @ 0x1800B6E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800B6E30(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = dword_18019DA04;
  dword_18019DA04 = *(_DWORD *)(a2 + 8);
  if ( v2 != dword_18019DA04 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 16LL))(a1, 0LL, a2);
  return 1;
}
