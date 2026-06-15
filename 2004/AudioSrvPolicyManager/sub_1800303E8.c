/*
 * XREFs of sub_1800303E8 @ 0x1800303E8
 * Callers:
 *     sub_180017100 @ 0x180017100 (sub_180017100.c)
 *     sub_18002FEBC @ 0x18002FEBC (sub_18002FEBC.c)
 *     sub_1800302A0 @ 0x1800302A0 (sub_1800302A0.c)
 * Callees:
 *     sub_180030914 @ 0x180030914 (sub_180030914.c)
 */

__int64 __fastcall sub_1800303E8(__int64 a1, _DWORD *a2, int *a3, __int64 a4)
{
  int v5; // r8d
  unsigned int v6; // ebx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+44h] [rbp-24h]
  __int64 v14; // [rsp+48h] [rbp-20h]
  char v15; // [rsp+50h] [rbp-18h]
  float v16; // [rsp+70h] [rbp+8h] BYREF

  if ( a3 )
    v5 = *a3;
  else
    v5 = 21;
  v6 = 2;
  if ( a2 )
    v7 = *a2 == 1;
  else
    v7 = 2;
  v12 = v7;
  v8 = *(_QWORD *)(a1 + 120);
  v11[0] = &off_18003F570;
  v9 = *(_QWORD *)(a1 + 128);
  v13 = v5;
  v14 = a4;
  v11[1] = v9;
  v15 = 0;
  v16 = 1.0;
  ((void (__fastcall *)(__int64, _QWORD *, _QWORD, float *, _QWORD, int))sub_180030914)(v8, v11, 0LL, &v16, 0LL, 1);
  if ( v16 < 1.0 )
    return v16 > 0.0;
  return v6;
}
