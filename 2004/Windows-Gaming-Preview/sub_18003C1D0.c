/*
 * XREFs of sub_18003C1D0 @ 0x18003C1D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E744 @ 0x18000E744 (sub_18000E744.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003C1D0(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
    FreeGameConfigStoreClient(v4);
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  sub_18000E744(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 120LL);
  return a1;
}
