/*
 * XREFs of ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x18024C6AC
 * Callers:
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x18024C6E0 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??_E?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x18024D0A0 (--_E-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IEAAXXZ @ 0x180254E68 (-_Tidy@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::~basic_stringbuf<unsigned short>(_QWORD *a1)
{
  *a1 = &std::basic_stringbuf<unsigned short>::`vftable';
  std::basic_stringbuf<unsigned short>::_Tidy();
  return std::basic_streambuf<unsigned short>::~basic_streambuf<unsigned short,std::char_traits<unsigned short>>(a1);
}
