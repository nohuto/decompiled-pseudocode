/*
 * XREFs of _UmfdTrueTypeFreeGlyphset@12 @ 0xD3248
 * Callers:
 *     ?vFreepfdg@PFEOBJ@@QAEXXZ @ 0x8404C (-vFreepfdg@PFEOBJ@@QAEXXZ.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SGXPAX@Z @ 0xD3290 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SGXPAX@Z.c)
 */

void __fastcall UmfdTrueTypeFreeGlyphset(int a1, int a2, void *a3)
{
  _DWORD v5[8]; // [esp+8h] [ebp-20h] BYREF

  FontDriverDdiRequest::FontDriverDdiRequest(v5, 15);
  v5[0] = &TrueTypeFreeGlyphsetRequest::`vftable';
  v5[6] = a1;
  v5[7] = a2;
  UmfdClientSendAndWaitForCompletion(0, (int)v5);
  UmfdAllocation::ReleaseKernelmodeAllocation(a3);
}
