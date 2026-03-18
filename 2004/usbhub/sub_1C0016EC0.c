/*
 * XREFs of sub_1C0016EC0 @ 0x1C0016EC0
 * Callers:
 *     sub_1C0018BE0 @ 0x1C0018BE0 (sub_1C0018BE0.c)
 *     sub_1C003AEF8 @ 0x1C003AEF8 (sub_1C003AEF8.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0015C80 @ 0x1C0015C80 (sub_1C0015C80.c)
 *     sub_1C0016670 @ 0x1C0016670 (sub_1C0016670.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C0016EC0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _DWORD *v5; // rax

  v4 = sub_1C0015C80(a1, a2, a2, 0x44726261u);
  if ( v4 )
  {
    v5 = sub_1C000F050(a1);
    if ( *((_QWORD *)v5 + 564) )
      (*((void (__fastcall **)(_QWORD, __int64))v5 + 564))(*((_QWORD *)v5 + 529), v4);
    sub_1C0016670(a1, v4, a2, 0x44726261u);
  }
}
