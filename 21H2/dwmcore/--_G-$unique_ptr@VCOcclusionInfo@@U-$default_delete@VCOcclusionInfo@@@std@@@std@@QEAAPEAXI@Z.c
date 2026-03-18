/*
 * XREFs of ??_G?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAPEAXI@Z @ 0x1800C8DC4
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@_K0@Z @ 0x1800C8B9C (-reserve_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo.c)
 *     ??$destruct_range@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@detail@@YAXPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@0@Z @ 0x1800C8D8C (--$destruct_range@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@std@@.c)
 * Callees:
 *     ??R?$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z @ 0x1800C8FB8 (--R-$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z.c)
 */

_QWORD *__fastcall std::unique_ptr<COcclusionInfo>::`scalar deleting destructor'(_QWORD *a1)
{
  if ( *a1 )
    std::default_delete<COcclusionInfo>::operator()();
  return a1;
}
