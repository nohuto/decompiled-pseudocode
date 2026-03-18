/*
 * XREFs of ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00412F0
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C000AD60 (EngUpdateDeviceSurface.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0037C30 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreOffsetRgn @ 0x1C0037F80 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00411F0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     GreExtCreateRegion @ 0x1C005B540 (GreExtCreateRegion.c)
 *     GreCopyVisRgn @ 0x1C00900F0 (GreCopyVisRgn.c)
 *     GreGetRgnBox @ 0x1C0096390 (GreGetRgnBox.c)
 *     ?IsEmpty@CRegion@@UEBA_NXZ @ 0x1C00A0E50 (-IsEmpty@CRegion@@UEBA_NXZ.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00C4CFC (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0141EE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
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
