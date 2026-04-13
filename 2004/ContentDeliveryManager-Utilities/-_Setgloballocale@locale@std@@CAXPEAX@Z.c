/*
 * XREFs of ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800B13D0
 * Callers:
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800B1140 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 * Callees:
 *     ?_Atexit@@YAXP6AXXZ@Z @ 0x1800B8ED0 (-_Atexit@@YAXP6AXXZ@Z.c)
 */

void __fastcall std::locale::_Setgloballocale(__int64 a1)
{
  if ( !byte_1801984B8 )
  {
    byte_1801984B8 = 1;
    _Atexit(tidy_global);
  }
  qword_180198478 = a1;
}
