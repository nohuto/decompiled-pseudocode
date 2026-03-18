/*
 * XREFs of ?FastMul64by64@@YG_J_J0@Z @ 0x156EF2
 * Callers:
 *     ??DPrediction@@YG?AVCFixPred@0@ABV10@0@Z @ 0x156AD9 (--DPrediction@@YG-AVCFixPred@0@ABV10@0@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall FastMul64by64(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  int v3; // ecx
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  __int64 v9; // [esp+8h] [ebp-10h]
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]
  int v12; // [esp+24h] [ebp+Ch]

  v2 = HIDWORD(a1);
  v10 = HIDWORD(a1);
  v11 = HIDWORD(a2);
  v3 = a1;
  v9 = (HIDWORD(a2) ^ HIDWORD(a1)) >> 31;
  v12 = a1;
  if ( v10 < 0 )
  {
    v3 = -(int)a1;
    v12 = -(int)a1;
    v2 = (unsigned __int64)-__SPAIR64__(v2, a1) >> 32;
  }
  v4 = a2;
  if ( a2 < 0 )
  {
    v4 = -(int)a2;
    v11 = (unsigned __int64)-a2 >> 32;
  }
  v5 = v4 * v3;
  v6 = v11 * v12 + ((__PAIR64__(v2, v3) * (unsigned int)v4) >> 32);
  v7 = HIDWORD(v9) ^ v6;
  if ( !v5 )
    return (v6 ^ HIDWORD(v9)) - HIDWORD(v9);
  return v7;
}
