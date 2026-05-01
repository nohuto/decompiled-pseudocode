/*
 * XREFs of sub_18001AA00 @ 0x18001AA00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019324 @ 0x180019324 (sub_180019324.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001AA00(__int64 a1, char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_180019324(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 56LL);
  return a1;
}
