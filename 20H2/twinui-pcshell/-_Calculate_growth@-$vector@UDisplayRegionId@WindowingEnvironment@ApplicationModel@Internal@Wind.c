/*
 * XREFs of ?_Calculate_growth@?$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1802B9EB4
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@?$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@QEAAPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAU23456@AEBU23456@@Z @ 0x1802AFEE0 (--$_Emplace_reallocate@AEBUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>::_Calculate_growth(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax

  v2 = (__int64)(a1[2] - *a1) >> 2;
  v3 = v2 >> 1;
  if ( v2 > 0x3FFFFFFFFFFFFFFFLL - (v2 >> 1) )
    return a2;
  result = v3 + v2;
  if ( v3 + v2 < a2 )
    return a2;
  return result;
}
