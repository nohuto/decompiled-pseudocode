/*
 * XREFs of ??0range_error@std@@QEAA@PEBD@Z @ 0x18004A044
 * Callers:
 *     ?to_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x18004ECC0 (-to_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D.c)
 *     ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18004EF2C (-from_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator.c)
 * Callees:
 *     <none>
 */

std::range_error *__fastcall std::range_error::range_error(std::range_error *this, const char *a2)
{
  const char *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = "bad conversion";
  exception::exception(this, &v4);
  *(_QWORD *)this = &std::range_error::`vftable';
  return this;
}
