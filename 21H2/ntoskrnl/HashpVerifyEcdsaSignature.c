/*
 * XREFs of HashpVerifyEcdsaSignature @ 0x140A374B0
 * Callers:
 *     MinCryptVerifySignedHash2 @ 0x140659E70 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 *     SymCryptEcurveFree @ 0x1404000C8 (SymCryptEcurveFree.c)
 *     SymCryptEckeyAllocate @ 0x140400108 (SymCryptEckeyAllocate.c)
 *     SymCryptEckeyFree @ 0x1404001EC (SymCryptEckeyFree.c)
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 */

__int64 __fastcall HashpVerifyEcdsaSignature(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7)
{
  int v7; // edi
  __int64 v8; // rbp
  int v11; // ecx
  unsigned int v12; // ebx
  __int64 *v13; // rcx
  volatile signed __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi

  v7 = 0;
  v8 = a3;
  v11 = a1 - 11777;
  if ( v11 )
  {
    if ( v11 != 1 )
      return (unsigned int)-1073740760;
    v13 = (__int64 *)SymCryptEcurveParamsNistP384;
    v14 = (volatile signed __int64 *)&g_pEcurveP384;
  }
  else
  {
    v13 = (__int64 *)SymCryptEcurveParamsNistP256;
    v14 = (volatile signed __int64 *)&g_pEcurveP256;
  }
  if ( !*v14 )
  {
    v15 = SymCryptEcurveAllocate(v13);
    if ( !v15 )
      return (unsigned int)-1073741801;
    if ( _InterlockedCompareExchange64(v14, v15, 0LL) )
      SymCryptEcurveFree(v15);
  }
  v16 = SymCryptEckeyAllocate(*v14);
  v17 = v16;
  if ( !v16 )
    return (unsigned int)-1073741801;
  if ( (unsigned int)SymCryptEckeySetValue(0LL, 0LL, a2, v8, 2u, 2, 0, v16) )
  {
    v12 = -1073740760;
  }
  else
  {
    if ( (unsigned int)SymCryptEcDsaVerify(v17, a4, a5, a6, a7, 2, 0) )
      v7 = -1073740760;
    v12 = v7;
  }
  SymCryptEckeyFree(v17);
  return v12;
}
