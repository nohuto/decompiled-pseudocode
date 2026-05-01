/*
 * XREFs of sub_180021E08 @ 0x180021E08
 * Callers:
 *     sub_180002F50 @ 0x180002F50 (sub_180002F50.c)
 *     sub_180007A80 @ 0x180007A80 (sub_180007A80.c)
 *     sub_18001F8F0 @ 0x18001F8F0 (sub_18001F8F0.c)
 *     sub_180044710 @ 0x180044710 (sub_180044710.c)
 *     sub_18006AE28 @ 0x18006AE28 (sub_18006AE28.c)
 *     sub_18006B240 @ 0x18006B240 (sub_18006B240.c)
 *     sub_18006B6B4 @ 0x18006B6B4 (sub_18006B6B4.c)
 * Callees:
 *     sub_180021F28 @ 0x180021F28 (sub_180021F28.c)
 *     sub_180021FFC @ 0x180021FFC (sub_180021FFC.c)
 *     sub_18006A7AC @ 0x18006A7AC (sub_18006A7AC.c)
 */

__int64 __fastcall sub_180021E08(__int64 a1, unsigned __int64 *a2, _QWORD *a3, unsigned __int64 *a4)
{
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  bool v12; // sf
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdi
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v18[13]; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int64 v19; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int64 *v20; // [rsp+E8h] [rbp+6Fh]

  v20 = a2;
  result = sub_180021F28(
             *(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL),
             (int)a1 + 88,
             (int)a1 + 552,
             *(_DWORD *)(a1 + 620),
             *(_DWORD *)(a1 + 624),
             *(_QWORD *)(a1 + 32),
             (__int64)&v19,
             (__int64)v18);
  if ( (int)result >= 0 )
  {
    v8 = sub_180021FFC(a1, &v17);
    v10 = v19;
    v11 = v17;
    v12 = v8 < 0;
    v13 = v19;
    if ( v12 )
      v11 = 0LL;
    v17 = v11;
    if ( v11 < v19 )
      v13 = v11;
    v14 = v19 - v13;
    if ( v19 && v14 <= 1 )
      v14 = 1LL;
    v15 = v18[0];
    v16 = v14 + v18[0];
    if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    {
      LODWORD(v19) = *(_DWORD *)(a1 + 624);
      v18[4] = a1 + 88;
      v18[5] = *(_QWORD *)(a1 + 32);
      v18[0] = v11;
      v18[1] = v15;
      v18[2] = v10;
      v18[3] = v16;
      sub_18006A7AC(v9, &unk_18009C3A1);
    }
    if ( v20 )
      *v20 = v14;
    if ( a3 )
      *a3 = v10 + v15;
    if ( a4 )
      *a4 = v16;
    return 0LL;
  }
  return result;
}
