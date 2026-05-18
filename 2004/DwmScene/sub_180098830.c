/*
 * XREFs of sub_180098830 @ 0x180098830
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E544 @ 0x18007E544 (sub_18007E544.c)
 *     sub_1800EB1E0 @ 0x1800EB1E0 (sub_1800EB1E0.c)
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

bool __fastcall sub_180098830(_DWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  int v5; // xmm1_4
  _DWORD *v6; // rdi
  int v7; // xmm0_4
  unsigned int v8; // xmm1_4
  int v9; // xmm1_4
  int v10; // xmm0_4
  unsigned int v11; // xmm1_4
  unsigned __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  int v14; // [rsp+38h] [rbp-18h]
  unsigned __int64 v15; // [rsp+3Ch] [rbp-14h] BYREF
  int v16; // [rsp+44h] [rbp-Ch]

  if ( !(unsigned __int8)sub_1800EB1E0() )
    return 0;
  v4 = (_DWORD *)_RTDynamicCast(
                   a2,
                   0LL,
                   &Spectre::Engine::Component `RTTI Type Descriptor',
                   &Spectre::Engine::Bounds `RTTI Type Descriptor',
                   1);
  v5 = a1[23];
  LODWORD(v13) = a1[22];
  v6 = v4;
  v7 = a1[24];
  HIDWORD(v13) = v5;
  v8 = v4[22];
  v14 = v7;
  v15 = __PAIR64__(v4[23], v8);
  v16 = v4[24];
  if ( sub_18007E544(&v15, &v13) )
    return 0;
  v9 = a1[26];
  LODWORD(v15) = a1[25];
  v10 = a1[27];
  HIDWORD(v15) = v9;
  v11 = v6[25];
  v16 = v10;
  v13 = __PAIR64__(v6[26], v11);
  v14 = v6[27];
  return !sub_18007E544(&v13, &v15);
}
