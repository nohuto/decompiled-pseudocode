/*
 * XREFs of ??A?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEBAAEBURampPair@CoordMap@@_J@Z @ 0x18001105C
 * Callers:
 *     ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x180010EBC (--$ComputeTexPositionsWorker@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@d.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall gsl::span<CoordMap::RampPair const,-1>::operator[](unsigned __int64 *a1, unsigned __int64 a2)
{
  if ( a2 >= *a1 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a1[1] + 12 * a2;
}
