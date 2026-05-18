/*
 * XREFs of sub_18006E8C4 @ 0x18006E8C4
 * Callers:
 *     sub_18006E8C4 @ 0x18006E8C4 (sub_18006E8C4.c)
 *     sub_18006F860 @ 0x18006F860 (sub_18006F860.c)
 *     sub_18006FAB4 @ 0x18006FAB4 (sub_18006FAB4.c)
 *     sub_18011B25C @ 0x18011B25C (sub_18011B25C.c)
 *     sub_18011B290 @ 0x18011B290 (sub_18011B290.c)
 *     sub_18011B768 @ 0x18011B768 (sub_18011B768.c)
 *     sub_1801201DC @ 0x1801201DC (sub_1801201DC.c)
 *     sub_180121500 @ 0x180121500 (sub_180121500.c)
 *     sub_180122950 @ 0x180122950 (sub_180122950.c)
 *     sub_180122A80 @ 0x180122A80 (sub_180122A80.c)
 *     sub_180122C70 @ 0x180122C70 (sub_180122C70.c)
 *     sub_180130940 @ 0x180130940 (sub_180130940.c)
 *     sub_180139420 @ 0x180139420 (sub_180139420.c)
 * Callees:
 *     sub_18006E8C4 @ 0x18006E8C4 (sub_18006E8C4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006E8C4(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 *v8; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v7) )
  {
    sub_18006E8C4(a1, a2, i[2]);
    v7 = i;
    i = (__int64 *)*i;
    v8 = (__int64 *)v7[12];
    if ( v8 )
    {
      LOBYTE(v6) = v8 != v7 + 5;
      (*(void (__fastcall **)(__int64 *, __int64))(*v8 + 32))(v8, v6);
      v7[12] = 0LL;
    }
  }
  return result;
}
