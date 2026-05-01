/*
 * XREFs of ?HampUtilIsOverlappingInterval@@YAK_K000@Z @ 0x180011F68
 * Callers:
 *     ?HampUsageInfoMergeVectors@@YA?AU_HAM_APPLICATION_USAGE_INFO@@PEAU1@0@Z @ 0x180011ECC (-HampUsageInfoMergeVectors@@YA-AU_HAM_APPLICATION_USAGE_INFO@@PEAU1@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampUtilIsOverlappingInterval(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  bool v4; // cc

  v4 = a1 <= a2;
  if ( a1 < a2 )
  {
    if ( a3 < a4 )
      return a1 <= a4 && a2 >= a3;
    if ( a3 > a4 )
      return a3 <= a2;
    v4 = a1 <= a2;
  }
  if ( v4 || a3 >= a4 )
    return 1LL;
  return a1 <= a4;
}
