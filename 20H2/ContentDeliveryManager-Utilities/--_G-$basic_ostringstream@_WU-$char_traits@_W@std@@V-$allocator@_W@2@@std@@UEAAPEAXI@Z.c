/*
 * XREFs of ??_G?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAAPEAXI@Z @ 0x180079634
 * Callers:
 *     ??_E?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x18007BC90 (--_E-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@$4PPPPPPPM@A@EAAPEAXI.c)
 * Callees:
 *     ??1?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x1800794BC (--1-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800B104C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 */

char *__fastcall std::wostringstream::`scalar deleting destructor'(struct std::ios_base *this, char a2)
{
  char *v3; // rsi

  v3 = (char *)this - 136;
  std::wostringstream::~wostringstream((__int64)this);
  *(_QWORD *)this = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(this);
  if ( (a2 & 1) != 0 )
    operator delete(v3);
  return v3;
}
