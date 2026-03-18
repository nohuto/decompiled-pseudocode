/*
 * XREFs of ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C007FF20
 * Callers:
 *     GreCopyVisRgn @ 0x1C0016B90 (GreCopyVisRgn.c)
 *     GreGetRgnBox @ 0x1C001C210 (GreGetRgnBox.c)
 *     ?IsEmpty@CRegion@@UEBA_NXZ @ 0x1C002F210 (-IsEmpty@CRegion@@UEBA_NXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C004A300 (EngUpdateDeviceSurface.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0075A70 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreOffsetRgn @ 0x1C0076320 (GreOffsetRgn.c)
 *     GreExtCreateRegion @ 0x1C0076840 (GreExtCreateRegion.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C007FE20 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00C52FC (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C014A6C0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
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
