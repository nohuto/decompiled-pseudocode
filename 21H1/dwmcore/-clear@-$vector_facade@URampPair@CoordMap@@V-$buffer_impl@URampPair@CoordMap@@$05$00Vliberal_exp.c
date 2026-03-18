/*
 * XREFs of ?clear@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180011D18
 * Callers:
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x180010C2C (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ?GetRampValues@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEAV?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@3@@Z @ 0x180011D54 (-GetRampValues@CoordMap@@AEBAXAEBV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry.c)
 * Callees:
 *     ?clear_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180011CAC (-clear_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vlibe.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx

  result = (unsigned __int64)((unsigned __int128)((a1[1] - *a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  v2 = (a1[1] - *a1) / 12;
  if ( v2 )
    return detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             v2,
             (a1[1] - *a1) / 12);
  return result;
}
