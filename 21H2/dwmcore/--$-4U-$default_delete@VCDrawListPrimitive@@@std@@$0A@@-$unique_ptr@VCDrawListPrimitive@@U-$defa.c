/*
 * XREFs of ??$?4U?$default_delete@VCDrawListPrimitive@@@std@@$0A@@?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801E8BB8
 * Callers:
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@@Z @ 0x1801E8BF0 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 * Callees:
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x1801E308C (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<CDrawListPrimitive>::operator=<std::default_delete<CDrawListPrimitive>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*a1;
    *a1 = v3;
    if ( v4 )
      std::default_delete<CDrawListPrimitive>::operator()((__int64)a1, v4);
  }
  return a1;
}
