/*
 * XREFs of sub_18000688C @ 0x18000688C
 * Callers:
 *     sub_180006D18 @ 0x180006D18 (sub_180006D18.c)
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 * Callees:
 *     sub_180008F9C @ 0x180008F9C (sub_180008F9C.c)
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 */

__int64 __fastcall sub_18000688C(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  char v4; // al

  result = *(_QWORD *)(a1 + 80);
  v3 = *(_QWORD *)(result + 688);
  if ( v3 && !*(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 544) & 2) == 0 )
  {
    sub_18000E1BC(*(_QWORD *)(result + 688));
    v4 = sub_180008F9C(v3, *(_QWORD *)(a1 + 80) + 616LL);
    *(_DWORD *)(a1 + 544) &= ~2u;
    *(_DWORD *)(a1 + 544) |= 2 * (v4 & 1);
    return sub_18000E244(v3);
  }
  return result;
}
