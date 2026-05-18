/*
 * XREFs of sub_18002F66C @ 0x18002F66C
 * Callers:
 *     sub_18002EC90 @ 0x18002EC90 (sub_18002EC90.c)
 *     sub_180030690 @ 0x180030690 (sub_180030690.c)
 *     sub_180030B40 @ 0x180030B40 (sub_180030B40.c)
 *     sub_1800321A0 @ 0x1800321A0 (sub_1800321A0.c)
 *     sub_180032554 @ 0x180032554 (sub_180032554.c)
 *     sub_1800341F0 @ 0x1800341F0 (sub_1800341F0.c)
 *     sub_180034E48 @ 0x180034E48 (sub_180034E48.c)
 *     sub_1800366DC @ 0x1800366DC (sub_1800366DC.c)
 *     sub_18003A200 @ 0x18003A200 (sub_18003A200.c)
 *     sub_18003F150 @ 0x18003F150 (sub_18003F150.c)
 *     _setlocale_set_cat @ 0x18003FAC0 (_setlocale_set_cat.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002F66C(int a1, int a2)
{
  unsigned int v3; // edx
  int v4; // r8d
  __int64 *v6; // rax
  _OWORD pExceptionObject[6]; // [rsp+30h] [rbp-59h] BYREF
  int v8; // [rsp+90h] [rbp+7h]
  _QWORD v9[4]; // [rsp+A0h] [rbp+17h] BYREF
  _QWORD v10[4]; // [rsp+C0h] [rbp+37h] BYREF

  pExceptionObject[0] = _mm_load_si128((const __m128i *)&xmmword_180143080);
  pExceptionObject[1] = _mm_load_si128((const __m128i *)&xmmword_180143090);
  pExceptionObject[2] = _mm_load_si128((const __m128i *)&xmmword_180143060);
  pExceptionObject[3] = _mm_load_si128((const __m128i *)&xmmword_180143070);
  pExceptionObject[4] = _mm_load_si128((const __m128i *)&xmmword_1801430A0);
  pExceptionObject[5] = _mm_load_si128((const __m128i *)&xmmword_1801430B0);
  v8 = 107;
  v3 = *((_DWORD *)pExceptionObject + a1);
  if ( !a2 )
    return v3;
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      sub_18000FE28(v10);
      v6 = sub_18000FE28(v9);
      sub_18002D8C4(pExceptionObject, v6, 165, (__int64)v10, 0);
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
