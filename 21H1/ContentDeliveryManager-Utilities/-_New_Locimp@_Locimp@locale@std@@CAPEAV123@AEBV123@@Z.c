/*
 * XREFs of ?_New_Locimp@_Locimp@locale@std@@CAPEAV123@AEBV123@@Z @ 0x1800AECB8
 * Callers:
 *     ??0?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18004C014 (--0-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@std.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800ADD58 (--2@YAPEAX_K@Z.c)
 *     ??0_Locimp@locale@std@@AEAA@AEBV012@@Z @ 0x1800AE9A0 (--0_Locimp@locale@std@@AEAA@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct std::locale::_Locimp *__fastcall std::locale::_Locimp::_New_Locimp(const struct std::locale::_Locimp *a1)
{
  std::locale::_Locimp *v2; // rcx
  struct std::locale::_Locimp *result; // rax

  v2 = (std::locale::_Locimp *)operator new(0x38uLL);
  result = 0LL;
  if ( v2 )
    return std::locale::_Locimp::_Locimp(v2, a1);
  return result;
}
