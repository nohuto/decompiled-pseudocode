/*
 * XREFs of sub_1800D5640 @ 0x1800D5640
 * Callers:
 *     sub_1800D56E8 @ 0x1800D56E8 (sub_1800D56E8.c)
 * Callees:
 *     sub_180025928 @ 0x180025928 (sub_180025928.c)
 *     sub_1800D6650 @ 0x1800D6650 (sub_1800D6650.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D5640(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rbx
  __int64 *v4; // rcx
  __int64 v5; // rcx

  `eh vector destructor iterator'(a1 + 8, 0x10uLL, 5uLL, (void (*)(void *))unknown_libname_98);
  v2 = a1[6];
  v3 = *(__int64 **)(v2 + 8);
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      sub_180025928((__int64)(a1 + 6), (__int64)(a1 + 6), (__int64 *)v3[2]);
      v4 = v3;
      v3 = (__int64 *)*v3;
      j_j__o_free(v4);
    }
    while ( !*((_BYTE *)v3 + 25) );
    v2 = a1[6];
  }
  j_j__o_free(v2);
  sub_1800D6650(a1 + 1);
  v5 = a1[1];
  a1[1] = 0LL;
  j_j__o_free(v5);
  return sub_18011C1A0(a1);
}
