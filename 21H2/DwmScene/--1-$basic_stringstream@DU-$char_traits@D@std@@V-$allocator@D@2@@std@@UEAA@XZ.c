/*
 * XREFs of ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180033A50
 * Callers:
 *     sub_1800340CC @ 0x1800340CC (sub_1800340CC.c)
 *     sub_180034144 @ 0x180034144 (sub_180034144.c)
 *     sub_180036BB8 @ 0x180036BB8 (sub_180036BB8.c)
 *     sub_180036CE8 @ 0x180036CE8 (sub_180036CE8.c)
 * Callees:
 *     sub_180037194 @ 0x180037194 (sub_180037194.c)
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
  sub_180037194(a1 - 128);
  std::streambuf::~streambuf<char,std::char_traits<char>>(v1);
  return std::iostream::~basic_iostream<char,std::char_traits<char>>(a1 - 120);
}
