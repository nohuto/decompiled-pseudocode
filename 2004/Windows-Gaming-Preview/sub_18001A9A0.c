/*
 * XREFs of sub_18001A9A0 @ 0x18001A9A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001A184 @ 0x18001A184 (sub_18001A184.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001A9A0(__int64 a1, char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_18001A184(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 64LL);
  return a1;
}
