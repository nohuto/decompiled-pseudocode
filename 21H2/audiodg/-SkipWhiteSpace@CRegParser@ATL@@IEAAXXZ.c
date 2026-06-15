/*
 * XREFs of ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x14005F400
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x14005C538 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x14005DA40 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x14005E864 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x14005F374 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 * Callees:
 *     ?IsSpace@CRegParser@ATL@@IEAAHG@Z @ 0x14005DA14 (-IsSpace@CRegParser@ATL@@IEAAHG@Z.c)
 */

void __fastcall ATL::CRegParser::SkipWhiteSpace(ATL::CRegParser **this)
{
  const WCHAR *v2; // rcx

  while ( ATL::CRegParser::IsSpace(*this, *(_WORD *)*this) )
    *this = (ATL::CRegParser *)CharNextW(v2);
}
