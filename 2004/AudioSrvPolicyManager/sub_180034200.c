/*
 * XREFs of sub_180034200 @ 0x180034200
 * Callers:
 *     sub_1800338E0 @ 0x1800338E0 (sub_1800338E0.c)
 *     sub_180033B5C @ 0x180033B5C (sub_180033B5C.c)
 *     sub_180034504 @ 0x180034504 (sub_180034504.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18000F150 @ 0x18000F150 (sub_18000F150.c)
 *     sub_1800362DC @ 0x1800362DC (sub_1800362DC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180034200(__int64 a1, __int64 a2, int a3, char a4, char a5)
{
  _QWORD *v9; // rsi
  void *v10; // rdi
  DWORD LengthSid; // eax
  int v13; // eax

  *(_QWORD *)a1 = &off_18003F678;
  v9 = (_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = off_18003F6E0;
  *(_BYTE *)(a1 + 84) = *(_BYTE *)(a2 + 76);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 80);
  sub_18000F150((_QWORD *)(a1 + 96), (const void **)(a2 + 88));
  sub_18000F150(v9 + 12, (const void **)(a2 + 96));
  sub_18000F150(v9 + 13, (const void **)(a2 + 104));
  v9[14] = ((__int64 (__fastcall *)(__int64 (__fastcall ***)()))off_18004F098[3])(&off_18004F098) + 24;
  if ( *(_BYTE *)(a2 + 76) )
  {
    v10 = (void *)(a2 + 8);
    if ( !IsValidSid(v10) )
      sub_18000A174(-2147024809);
    LengthSid = GetLengthSid(v10);
    if ( !CopySid(LengthSid, v9 + 1, v10) )
    {
      v13 = sub_1800362DC();
      sub_18000A174(v13);
    }
  }
  *(_DWORD *)(a1 + 128) = a3;
  *(_BYTE *)(a1 + 132) = a4;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)a1 = off_18003F610;
  *(_BYTE *)(a1 + 144) = a5;
  return a1;
}
