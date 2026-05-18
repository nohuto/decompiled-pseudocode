/*
 * XREFs of sub_180010040 @ 0x180010040
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028A8C @ 0x180028A8C (sub_180028A8C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180010040(__int64 a1, char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 1696);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 1696) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_180028A8C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
