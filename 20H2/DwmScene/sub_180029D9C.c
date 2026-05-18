/*
 * XREFs of sub_180029D9C @ 0x180029D9C
 * Callers:
 *     sub_1800293C0 @ 0x1800293C0 (sub_1800293C0.c)
 *     sub_18002ADC0 @ 0x18002ADC0 (sub_18002ADC0.c)
 *     sub_18002B270 @ 0x18002B270 (sub_18002B270.c)
 *     sub_18002C8D0 @ 0x18002C8D0 (sub_18002C8D0.c)
 *     sub_18002CC84 @ 0x18002CC84 (sub_18002CC84.c)
 *     sub_18002E920 @ 0x18002E920 (sub_18002E920.c)
 *     sub_18002F578 @ 0x18002F578 (sub_18002F578.c)
 *     sub_180030E0C @ 0x180030E0C (sub_180030E0C.c)
 *     sub_180034930 @ 0x180034930 (sub_180034930.c)
 *     sub_180039880 @ 0x180039880 (sub_180039880.c)
 *     _setlocale_set_cat @ 0x18003A1F0 (_setlocale_set_cat.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180029D9C(int a1, int a2)
{
  unsigned int v3; // edx
  int v4; // r8d
  __int64 *v6; // rax
  _OWORD pExceptionObject[6]; // [rsp+30h] [rbp-59h] BYREF
  int v8; // [rsp+90h] [rbp+7h]
  _QWORD v9[4]; // [rsp+A0h] [rbp+17h] BYREF
  _QWORD v10[4]; // [rsp+C0h] [rbp+37h] BYREF

  pExceptionObject[0] = _mm_load_si128((const __m128i *)&xmmword_18013CD30);
  pExceptionObject[1] = _mm_load_si128((const __m128i *)&xmmword_18013CD40);
  pExceptionObject[2] = _mm_load_si128((const __m128i *)&xmmword_18013CD10);
  pExceptionObject[3] = _mm_load_si128((const __m128i *)&xmmword_18013CD20);
  pExceptionObject[4] = _mm_load_si128((const __m128i *)&xmmword_18013CD50);
  pExceptionObject[5] = _mm_load_si128((const __m128i *)&xmmword_18013CD60);
  v8 = 107;
  v3 = *((_DWORD *)pExceptionObject + a1);
  if ( !a2 )
    return v3;
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      sub_18000FD48(v10);
      v6 = sub_18000FD48(v9);
      sub_180027FF4(pExceptionObject, v6, 165, (__int64)v10, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    return v3;
  }
  switch ( v3 )
  {
    case 0x1Cu:
      return 29;
    case 0x47u:
      return 72;
    case 0x4Au:
      return 75;
    case 0x4Du:
      return 78;
    case 0x57u:
      return 91;
    case 0x58u:
      return 93;
    case 0x5Au:
      return 91;
    case 0x5Cu:
      return 93;
    case 0x62u:
      return 99;
  }
  return v3;
}
