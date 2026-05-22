/*
 * XREFs of _MPCConstantManager::GetConstantNamesString_::_1_::dtor$0 @ 0x18006EC2A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@XZ @ 0x180036420 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@@s.c)
 */

void __fastcall MPCConstantManager::GetConstantNamesString_::_1_::dtor_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>(
      *(void **)(a2 + 64),
      a2,
      a3,
      a4);
  }
}
