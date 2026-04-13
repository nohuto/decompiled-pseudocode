/*
 * XREFs of ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800322CC
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18002BD80 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 * Callees:
 *     ??0?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180034BD0 (--0-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU-$c.c)
 *     ??0?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@PEAV?$basic_streambuf@GU?$char_traits@G@std@@@1@_N@Z @ 0x180034F48 (--0-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@PEAV-$basic_streambuf@GU-$char_traits@G@std.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::basic_istringstream<unsigned short>::basic_istringstream<unsigned short>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = &std::wistringstream::`vbtable';
  a1[18] = &std::wios::`vftable';
  std::basic_istream<unsigned short>::basic_istream<unsigned short>(a1, a1 + 2);
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_istringstream<unsigned short>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 144;
  std::basic_stringbuf<unsigned short>::basic_stringbuf<unsigned short>(a1 + 2, a2, 1LL);
  return a1;
}
