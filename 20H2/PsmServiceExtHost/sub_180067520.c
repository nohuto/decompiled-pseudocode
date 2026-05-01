/*
 * XREFs of sub_180067520 @ 0x180067520
 * Callers:
 *     sub_18003E350 @ 0x18003E350 (sub_18003E350.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800671F0 @ 0x1800671F0 (sub_1800671F0.c)
 */

void __fastcall sub_180067520(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+88h] [rbp+10h] BYREF
  __int64 v16; // [rsp+90h] [rbp+18h] BYREF
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  v16 = a3;
  v3 = a1[4];
  a1[6] += a2;
  if ( (*(_BYTE *)(v3 + 1272) & 4) == 0 )
  {
    v4 = *(_QWORD *)(v3 + 128);
    v5 = v4;
    if ( a2 < v4 )
      v5 = a2;
    v6 = a2 - v5;
    *(_QWORD *)(v3 + 128) = v4 - v5;
    a1[7] += a2 - v5;
    v7 = a1[7];
    if ( (unsigned int)dword_1800B31E0 > 4 )
    {
      if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      {
        v14 = *(_QWORD *)(v11 + 128);
        v16 = v7;
        v15 = v6;
        v17 = v12;
        v13[0] = v10;
        sub_1800671F0(
          v8,
          byte_18009ACB0,
          v9,
          v10,
          (__int64)v13,
          (__int64)&v17,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v16);
      }
    }
  }
}
