/*
 * XREFs of sub_180010070 @ 0x180010070
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000336C @ 0x18000336C (sub_18000336C.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180010070(__int64 a1, char a2)
{
  void *v4; // rcx
  __int64 v5; // rcx

  v4 = *(void **)(a1 + 56);
  if ( v4 )
    sub_18000336C(v4);
  *(_DWORD *)(a1 + 44) = -1073741823;
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 64LL);
  return a1;
}
