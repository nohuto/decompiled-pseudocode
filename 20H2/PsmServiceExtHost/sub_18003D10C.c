/*
 * XREFs of sub_18003D10C @ 0x18003D10C
 * Callers:
 *     sub_1800197C0 @ 0x1800197C0 (sub_1800197C0.c)
 *     sub_180035188 @ 0x180035188 (sub_180035188.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18003D1D8 @ 0x18003D1D8 (sub_18003D1D8.c)
 *     sub_18003D210 @ 0x18003D210 (sub_18003D210.c)
 *     sub_18003D258 @ 0x18003D258 (sub_18003D258.c)
 *     sub_1800816C4 @ 0x1800816C4 (sub_1800816C4.c)
 */

__int64 __fastcall sub_18003D10C(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  unsigned int v5; // r12d
  __int64 i; // rsi
  int v7; // edi
  __int64 v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+B0h] [rbp+40h] BYREF
  int v17; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+58h] BYREF

  v2 = a1 + 88;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 160) + 88LL);
  ((void (*)(void))sub_18003D210)();
  for ( i = *(_QWORD *)(a1 + 184); ; i = *(_QWORD *)(a1 + 184) )
  {
    sub_18003D1D8(a1);
    v7 = sub_18003D258(v5, v2, &v18);
    if ( v7 < 0 )
      break;
    sub_18003D210(a1);
    if ( i == *(_QWORD *)(a1 + 184) )
    {
      v8 = v18;
      *(_DWORD *)(a1 + 192) |= 2u;
      *(_QWORD *)(a1 + 184) = v8;
      sub_18003D1D8(a1);
      v7 = 0;
      *a2 = v18;
      break;
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v14 = *a2;
    v13 = i;
    v15 = v2;
    v16 = v5;
    v17 = v7;
    sub_1800816C4(
      v9,
      (unsigned int)&unk_1800A1E94,
      v10,
      v11,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
  return (unsigned int)v7;
}
