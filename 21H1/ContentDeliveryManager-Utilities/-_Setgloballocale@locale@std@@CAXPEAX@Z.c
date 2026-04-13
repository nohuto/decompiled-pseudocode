/*
 * XREFs of ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800AED70
 * Callers:
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800AEAE0 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 * Callees:
 *     ?_Atexit@@YAXP6AXXZ@Z @ 0x1800B6870 (-_Atexit@@YAXP6AXXZ@Z.c)
 */

void __fastcall std::locale::_Setgloballocale(__int64 a1)
{
  if ( !byte_1801934A8 )
  {
    byte_1801934A8 = 1;
    _Atexit(tidy_global);
  }
  qword_180193468 = a1;
}
