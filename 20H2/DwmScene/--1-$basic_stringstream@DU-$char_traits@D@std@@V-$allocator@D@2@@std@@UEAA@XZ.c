/*
 * XREFs of ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x18002E180
 * Callers:
 *     sub_18002E7FC @ 0x18002E7FC (sub_18002E7FC.c)
 *     sub_18002E874 @ 0x18002E874 (sub_18002E874.c)
 *     sub_1800312E8 @ 0x1800312E8 (sub_1800312E8.c)
 *     sub_180031418 @ 0x180031418 (sub_180031418.c)
 * Callees:
 *     sub_1800318C4 @ 0x1800318C4 (sub_1800318C4.c)
 */

__int64 __fastcall std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = a1 - 128;
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
  v3 = *(int *)(*(_QWORD *)(a1 - 152) + 4LL);
  *(_DWORD *)(v3 + a1 - 156) = v3 - 152;
  *(_QWORD *)(a1 - 128) = &std::stringbuf::`vftable';
  sub_1800318C4(a1 - 128);
  std::streambuf::~streambuf<char,std::char_traits<char>>(v1);
  return std::iostream::~basic_iostream<char,std::char_traits<char>>(a1 - 120);
}
