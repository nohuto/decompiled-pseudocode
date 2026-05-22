/*
 * XREFs of ??$?0AEAY0BD@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BD@$$CBG$$QEAM@Z @ 0x18002B5D4
 * Callers:
 *     _lambda_f0f9811b609bc44f6b5f596bb37acf9a_::operator() @ 0x18002B398 (_lambda_f0f9811b609bc44f6b5f596bb37acf9a_--operator().c)
 *     _lambda_b16aee874608ec8ce55934157fa7dff9_::operator() @ 0x18007D7E8 (_lambda_b16aee874608ec8ce55934157fa7dff9_--operator().c)
 *     _lambda_c5f59095f0ae3e38eeaa5c86892cff4d_::operator() @ 0x18018BF28 (_lambda_c5f59095f0ae3e38eeaa5c86892cff4d_--operator().c)
 *     _lambda_c78139b4692b055c43ac45a1104373ed_::operator() @ 0x180191E04 (_lambda_c78139b4692b055c43ac45a1104373ed_--operator().c)
 *     _lambda_a2967a5fef4bd4911d3370ff5cbae9e9_::operator() @ 0x1801984D0 (_lambda_a2967a5fef4bd4911d3370ff5cbae9e9_--operator().c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18002B7B4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

__int64 __fastcall std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 result; // rax

  std::wstring::wstring(a1, a2);
  *(_DWORD *)(a1 + 32) = *a3;
  result = a1;
  *(_BYTE *)(a1 + 36) = 2;
  return result;
}
