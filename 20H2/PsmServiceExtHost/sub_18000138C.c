/*
 * XREFs of sub_18000138C @ 0x18000138C
 * Callers:
 *     sub_180001164 @ 0x180001164 (sub_180001164.c)
 *     sub_1800765F8 @ 0x1800765F8 (sub_1800765F8.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180076564 @ 0x180076564 (sub_180076564.c)
 */

__int64 __fastcall sub_18000138C(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // esi
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  _QWORD v13[15]; // [rsp+40h] [rbp-78h] BYREF
  int v14; // [rsp+C8h] [rbp+10h] BYREF
  bool v15; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v16; // [rsp+D8h] [rbp+20h] BYREF

  if ( a3 )
    v5 = *(unsigned __int8 *)(a1 + 32);
  else
    v5 = 0LL;
  memset(v13, 0, 0x60uLL);
  v6 = *(_QWORD *)(a2 + 48);
  v7 = *(unsigned int *)(a2 + 624);
  HIDWORD(v13[4]) = 1;
  v13[10] = v5;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)(v6 + 40) + 136LL))(
         a2 + 552,
         *(unsigned int *)(a2 + 620),
         a2 + 88,
         v7,
         *(_QWORD *)(a2 + 32),
         v13);
  sub_1800093A0(a2 + 64, 0LL);
  if ( v8 < 0 )
  {
    if ( !a3 )
      *(_BYTE *)(a2 + 1196) &= ~4u;
  }
  else
  {
    *(_BYTE *)(a2 + 1196) &= ~4u;
    *(_BYTE *)(a2 + 1196) |= 4 * (a3 & 1);
    v8 = 0;
  }
  sub_18000A110(a2 + 64);
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 17LL) )
  {
    v16 = *(_QWORD *)(a2 + 32);
    v14 = v8;
    v15 = a3 != 0;
    sub_180076564(v9, (unsigned int)&unk_18009E696, v10, v11, (__int64)&v14, (__int64)&v16, (__int64)&v15);
  }
  return (unsigned int)v8;
}
