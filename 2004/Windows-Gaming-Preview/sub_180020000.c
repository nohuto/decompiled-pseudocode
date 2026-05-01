/*
 * XREFs of sub_180020000 @ 0x180020000
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180020000(__int64 a1, char a2)
{
  __int64 v4; // rcx

  *(_DWORD *)(a1 + 60) = -1073741823;
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 64LL);
  return a1;
}
