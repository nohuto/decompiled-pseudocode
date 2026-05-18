/*
 * XREFs of ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ_0 @ 0x1800720D0
 * Callers:
 *     sub_180072ACC @ 0x180072ACC (sub_180072ACC.c)
 *     sub_180072B44 @ 0x180072B44 (sub_180072B44.c)
 *     sub_18007565C @ 0x18007565C (sub_18007565C.c)
 * Callees:
 *     sub_18007B7E8 @ 0x18007B7E8 (sub_18007B7E8.c)
 */

__int64 __fastcall std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = a1 - 128;
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vftable';
  v3 = *(int *)(*(_QWORD *)(a1 - 152) + 4LL);
  *(_DWORD *)(v3 + a1 - 156) = v3 - 152;
  *(_QWORD *)(a1 - 128) = &std::wstringbuf::`vftable';
  sub_18007B7E8(a1 - 128);
  std::wstreambuf::~wstreambuf<wchar_t,std::char_traits<wchar_t>>(v1);
  return std::wiostream::~basic_iostream<wchar_t,std::char_traits<wchar_t>>(a1 - 120);
}
