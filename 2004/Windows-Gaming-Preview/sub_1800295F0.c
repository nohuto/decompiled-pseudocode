/*
 * XREFs of sub_1800295F0 @ 0x1800295F0
 * Callers:
 *     sub_1800296C0 @ 0x1800296C0 (sub_1800296C0.c)
 *     sub_180029930 @ 0x180029930 (sub_180029930.c)
 * Callees:
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_1800280C8 @ 0x1800280C8 (sub_1800280C8.c)
 *     sub_1800285F8 @ 0x1800285F8 (sub_1800285F8.c)
 *     sub_1800391C0 @ 0x1800391C0 (sub_1800391C0.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800295F0(_QWORD *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !(_BYTE)a2 )
  {
    v3 = sub_1800280C8((__int64)a1);
    if ( v3 < 0 )
      sub_180012300(retaddr, 812, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v3);
  }
  if ( !a1[32] || !a1[30] )
  {
    v4 = a1[26];
    if ( v4 )
    {
      a1[26] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    sub_1800285F8((__int64)a1, a2);
  }
  v5 = a1[27];
  if ( v5 )
  {
    a1[27] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = sub_1800391C0(a1[35], 24LL, a1 + 29);
  if ( v6 < 0 )
    sub_180012300(retaddr, 826, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v6);
}
