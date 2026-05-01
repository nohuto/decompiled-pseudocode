/*
 * XREFs of ?allocate@?$allocator@Uguid@winrt@@@std@@QEAAPEAUguid@winrt@@_K@Z @ 0x1800CF48C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUguid@winrt@@@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAPEAUguid@winrt@@QEAU23@AEBU23@@Z @ 0x1800C5FC4 (--$_Emplace_reallocate@AEBUguid@winrt@@@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@s.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::allocator<winrt::guid>::allocate(__int64 a1, unsigned __int64 a2)
{
  size_t v2; // rcx

  v2 = 16 * a2;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    v2 = -1LL;
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
