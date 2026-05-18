/*
 * XREFs of ?dtor$1@?0??str@?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEGBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ@4HA @ 0x18012DAF3
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011454 @ 0x180011454 (sub_180011454.c)
 */

__int64 __fastcall `std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str'::`1'::dtor$1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return sub_180011454();
  }
  return result;
}
