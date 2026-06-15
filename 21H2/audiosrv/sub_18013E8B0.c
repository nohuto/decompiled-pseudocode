/*
 * XREFs of sub_18013E8B0 @ 0x18013E8B0
 * Callers:
 *     sub_18013E9D0 @ 0x18013E9D0 (sub_18013E9D0.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_18013E8B0(_QWORD *a1))()
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 (__fastcall **result)(); // rax

  *a1 = off_180147278;
  a1[1] = off_180147250;
  v2 = a1[22];
  if ( v2 >= 8 )
    sub_1800472E0(a1[19], 2 * v2 + 2);
  a1[21] = 0LL;
  a1[22] = 7LL;
  *((_WORD *)a1 + 76) = 0;
  v3 = a1[18];
  if ( v3 >= 8 )
    sub_1800472E0(a1[15], 2 * v3 + 2);
  a1[17] = 0LL;
  a1[18] = 7LL;
  *((_WORD *)a1 + 60) = 0;
  v4 = a1[11];
  if ( v4 >= 8 )
    sub_1800472E0(a1[8], 2 * v4 + 2);
  a1[10] = 0LL;
  a1[11] = 7LL;
  *((_WORD *)a1 + 32) = 0;
  v5 = a1[7];
  if ( v5 >= 8 )
    sub_1800472E0(a1[4], 2 * v5 + 2);
  a1[6] = 0LL;
  a1[7] = 7LL;
  *((_WORD *)a1 + 16) = 0;
  v6 = a1[3];
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  result = &off_180147338;
  a1[1] = &off_180147338;
  return result;
}
