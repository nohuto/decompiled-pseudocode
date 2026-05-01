/*
 * XREFs of sub_18001B7CC @ 0x18001B7CC
 * Callers:
 *     sub_18001B2D8 @ 0x18001B2D8 (sub_18001B2D8.c)
 * Callees:
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_18001B888 @ 0x18001B888 (sub_18001B888.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001B7CC(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = (_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = sub_18001B888(a1, 3LL, v1, a1 + 40);
  if ( v4 < 0 )
    sub_180012300(retaddr, 232, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v4);
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = sub_18001B888(a1, 0LL, a1 + 72, a1 + 48);
  if ( v6 < 0 )
    sub_180012300(retaddr, 238, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v6);
  return 0LL;
}
