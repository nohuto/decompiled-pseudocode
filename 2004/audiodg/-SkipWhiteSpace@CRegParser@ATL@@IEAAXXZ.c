/*
 * XREFs of ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x140056860
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140053998 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140054EA0 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x140055CC4 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x1400567D4 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 * Callees:
 *     ?IsSpace@CRegParser@ATL@@IEAAHG@Z @ 0x140054E74 (-IsSpace@CRegParser@ATL@@IEAAHG@Z.c)
 */

void __fastcall ATL::CRegParser::SkipWhiteSpace(ATL::CRegParser **this)
{
  const WCHAR *v2; // rcx

  while ( ATL::CRegParser::IsSpace(*this, *(_WORD *)*this) )
    *this = (ATL::CRegParser *)CharNextW(v2);
}
