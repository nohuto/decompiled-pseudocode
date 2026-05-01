/*
 * XREFs of sub_180067614 @ 0x180067614
 * Callers:
 *     sub_180010810 @ 0x180010810 (sub_180010810.c)
 *     sub_18003E350 @ 0x18003E350 (sub_18003E350.c)
 * Callees:
 *     sub_18000FFAC @ 0x18000FFAC (sub_18000FFAC.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800671F0 @ 0x1800671F0 (sub_1800671F0.c)
 */

void __fastcall sub_180067614(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v12[6]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v13; // [rsp+90h] [rbp+8h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+A8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v2 + 1272) & 4) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    v6 = a2;
    if ( v5 < a2 )
      v6 = *(_QWORD *)(a1 + 56);
    v7 = a2 - v6;
    *(_QWORD *)(a1 + 56) = v5 - v6;
    *(_QWORD *)(v2 + 128) += a2 - v6;
    if ( a2 != v6 )
      sub_18000FFAC(a1);
    if ( (unsigned int)dword_1800B31E0 > 4 )
    {
      if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      {
        v13 = *(_QWORD *)(a1 + 56);
        v14 = *(_QWORD *)(v2 + 128);
        v15 = v6;
        v11 = v7;
        v12[0] = a2;
        sub_1800671F0(
          v8,
          byte_18009AE7E,
          v9,
          v10,
          (__int64)v12,
          (__int64)&v11,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13);
      }
    }
  }
}
