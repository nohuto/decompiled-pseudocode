/*
 * XREFs of sub_1800312E0 @ 0x1800312E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E744 @ 0x18000E744 (sub_18000E744.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800312E0(__int64 a1, char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  WindowsDeleteString(*(HSTRING *)(a1 + 72));
  *(_QWORD *)(a1 + 72) = 0LL;
  WindowsDeleteString(*(HSTRING *)(a1 + 64));
  *(_QWORD *)(a1 + 64) = 0LL;
  sub_18000E744(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 88LL);
  return a1;
}
