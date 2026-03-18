/*
 * XREFs of ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0086FC0
 * Callers:
 *     GreCopyVisRgn @ 0x1C0026650 (GreCopyVisRgn.c)
 *     GreGetRgnBox @ 0x1C00304D0 (GreGetRgnBox.c)
 *     ?IsEmpty@CRegion@@UEBA_NXZ @ 0x1C003DA30 (-IsEmpty@CRegion@@UEBA_NXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C0058010 (EngUpdateDeviceSurface.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007B580 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreOffsetRgn @ 0x1C007BAB0 (GreOffsetRgn.c)
 *     GreExtCreateRegion @ 0x1C007C1C0 (GreExtCreateRegion.c)
 *     GreCombineRgn @ 0x1C0084B00 (GreCombineRgn.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0086EC0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00C5AFC (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0144370 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNOBJ::iComplexity(RGNOBJ *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 84LL) != 1 )
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 80LL) > 0x38u) + 2;
  return result;
}
