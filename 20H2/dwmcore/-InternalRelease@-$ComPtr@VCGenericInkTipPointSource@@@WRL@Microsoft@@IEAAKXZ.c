/*
 * XREFs of ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x18019C968
 * Callers:
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18019C4EC (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x1801C2B80 (-ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBU.c)
 *     ??1CSuperWetSource@@UEAA@XZ @ 0x1801C2E94 (--1CSuperWetSource@@UEAA@XZ.c)
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z @ 0x1802005F8 (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18005EDD0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(CDrawListEntry **a1)
{
  CDrawListEntry *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CDrawListEntry::Release(v1);
  }
  return result;
}
