/*
 * XREFs of sub_180039810 @ 0x180039810
 * Callers:
 *     sub_18003911C @ 0x18003911C (sub_18003911C.c)
 * Callees:
 *     sub_1800398DC @ 0x1800398DC (sub_1800398DC.c)
 *     sub_180039910 @ 0x180039910 (sub_180039910.c)
 */

__int64 __fastcall sub_180039810(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rbx
  __int64 v9; // r8
  __int16 v11; // [rsp+20h] [rbp-38h] BYREF
  char v12; // [rsp+22h] [rbp-36h]
  int v13; // [rsp+24h] [rbp-34h]
  __int16 v14; // [rsp+28h] [rbp-30h]
  __int128 v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v11 = *(_WORD *)(a1 + 6);
  v12 = *(_BYTE *)(a1 + 8);
  v6 = a3;
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  while ( v6 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    v16 = a2 + *(_QWORD *)(a1 + 16) * (v6 >> 1);
    sub_180039910(&v11, &v16, v9);
    if ( (int)sub_1800398DC(&v11, a4, a5) <= 0 )
    {
      v6 >>= 1;
    }
    else
    {
      a2 = v16;
      v6 += -1LL - (v6 >> 1);
    }
  }
  return a2;
}
