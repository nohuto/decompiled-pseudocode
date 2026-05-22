/*
 * XREFs of ??$?0AEAY0BA@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BA@$$CBG$$QEAM@Z @ 0x18018A5A4
 * Callers:
 *     _lambda_c5f59095f0ae3e38eeaa5c86892cff4d_::operator() @ 0x18018BF28 (_lambda_c5f59095f0ae3e38eeaa5c86892cff4d_--operator().c)
 *     _lambda_c78139b4692b055c43ac45a1104373ed_::operator() @ 0x180191E04 (_lambda_c78139b4692b055c43ac45a1104373ed_--operator().c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18002B7B4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

__int64 __fastcall std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 result; // rax

  std::wstring::wstring((_QWORD *)a1, (__int64)L"TriggerDeadzone");
  *(_DWORD *)(a1 + 32) = *a3;
  result = a1;
  *(_BYTE *)(a1 + 36) = 2;
  return result;
}
