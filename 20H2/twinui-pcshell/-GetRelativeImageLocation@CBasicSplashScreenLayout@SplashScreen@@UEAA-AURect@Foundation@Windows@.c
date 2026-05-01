/*
 * XREFs of ?GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x18046BC80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_PhysicalRectToScaledRectWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA?AURect@Foundation@Windows@@IAEBU345@@Z @ 0x18046BCF0 (-_PhysicalRectToScaledRectWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA-AURect@Foundati.c)
 */

__m128i *__fastcall SplashScreen::CBasicSplashScreenLayout::GetRelativeImageLocation(unsigned int *a1, __m128i *a2)
{
  __m128i v4; // xmm0
  __m128i *result; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  (*(void (__fastcall **)(unsigned int *, _BYTE *))(*(_QWORD *)a1 + 32LL))(a1, v7);
  v4 = _mm_loadu_si128((const __m128i *)SplashScreen::CBasicSplashScreenLayout::_PhysicalRectToScaledRectWithRounding(
                                          v6,
                                          a1[6],
                                          v7));
  result = a2;
  *a2 = v4;
  return result;
}
