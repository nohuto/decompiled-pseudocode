/*
 * XREFs of ??$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z @ 0x14005077C
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x14005C538 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x14005E9FC (-RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z.c)
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x140019D5C (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DEFC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::AtlMultiplyThrow<unsigned __int64>(unsigned __int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = ATL::AtlMultiply<unsigned __int64>(&v4, a1, a2);
  if ( v2 < 0 )
    ATL::AtlThrowImpl(v2);
  return v4;
}
