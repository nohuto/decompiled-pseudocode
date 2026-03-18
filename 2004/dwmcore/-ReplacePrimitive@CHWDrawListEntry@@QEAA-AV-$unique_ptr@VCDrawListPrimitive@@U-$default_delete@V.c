/*
 * XREFs of ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180083684
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800807F4 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180083A10 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ @ 0x1800B2350 (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801BCD20 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E16F4 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 * Callees:
 *     ??4?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180045C98 (--4-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV.c)
 */

__int64 *__fastcall CHWDrawListEntry::ReplacePrimitive(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // r11
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int64 *v10; // rcx
  __int64 v11; // rax

  v4 = a1[8];
  if ( (a1[9] - v4) / 76 )
  {
    v6 = *(_DWORD *)(a4 + 64);
    v7 = *(_OWORD *)(a4 + 16);
    v8 = *(_OWORD *)(a4 + 32);
    v9 = *(_OWORD *)(a4 + 48);
    *(_OWORD *)(v4 + 8) = *(_OWORD *)a4;
    *(_OWORD *)(v4 + 24) = v7;
    *(_OWORD *)(v4 + 40) = v8;
    *(_OWORD *)(v4 + 56) = v9;
    *(_DWORD *)(v4 + 72) = v6;
  }
  v10 = a1 + 23;
  v11 = *v10;
  *v10 = 0LL;
  *a2 = v11;
  std::unique_ptr<CDrawListPrimitive>::operator=(v10, a3);
  return a2;
}
