/*
 * XREFs of ??$destruct_range@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@detail@@YAXPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@0@Z @ 0x1800C8D8C
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C8C7C (-ensure_extra_capacity@-$buffer_impl@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusio.c)
 * Callees:
 *     ??_G?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAPEAXI@Z @ 0x1800C8DC4 (--_G-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall detail::destruct_range<std::unique_ptr<COcclusionInfo>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::unique_ptr<COcclusionInfo>::`scalar deleting destructor'(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
