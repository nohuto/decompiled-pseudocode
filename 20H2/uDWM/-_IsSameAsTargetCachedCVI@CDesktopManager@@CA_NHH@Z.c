/*
 * XREFs of ?_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z @ 0x18000C2B8
 * Callers:
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18000B87C (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z @ 0x18002A9E8 (-FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z.c)
 * Callees:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18000C484 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 */

char __fastcall CDesktopManager::_IsSameAsTargetCachedCVI(int a1, int a2)
{
  __m128i v4; // xmm6
  float ScalingFactorForCVI; // xmm0_4
  char v6; // cl
  int v7; // r8d
  int v8; // edx
  int v9; // eax
  int v11; // eax
  __m128i v12; // [rsp+20h] [rbp-28h] BYREF

  v12 = *(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 460);
  v4 = v12;
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(
                          CDesktopManager::s_pDesktopManagerInstance,
                          (const struct tagRECT *)&v12);
  v6 = 0;
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 8)) - _mm_cvtsi128_si32(v4);
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v4, 4));
  v9 = 0;
  if ( v7 >= 0 )
    v9 = v7;
  if ( a1 == (int)(float)((float)v9 * ScalingFactorForCVI) )
  {
    v11 = 0;
    if ( v8 >= 0 )
      v11 = v8;
    if ( a2 == (int)(float)((float)v11 * ScalingFactorForCVI) )
      return 1;
  }
  return v6;
}
