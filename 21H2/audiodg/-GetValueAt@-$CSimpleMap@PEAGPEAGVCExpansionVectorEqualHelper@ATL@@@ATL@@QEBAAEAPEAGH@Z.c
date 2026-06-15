/*
 * XREFs of ?GetValueAt@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEBAAEAPEAGH@Z @ 0x14005D850
 * Callers:
 *     ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x14005CB9C (-ClearReplacements@CExpansionVector@ATL@@QEAAJXZ.c)
 *     ?StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z @ 0x14005F48C (-StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x14003E948 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::GetValueAt(
        __int64 a1,
        int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 16) )
  {
    ATL::_AtlRaiseException(0xC000008C);
    JUMPOUT(0x14005D878LL);
  }
  return *(_QWORD *)(a1 + 8) + 8LL * a2;
}
