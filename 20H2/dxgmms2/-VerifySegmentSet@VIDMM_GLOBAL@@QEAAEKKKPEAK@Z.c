/*
 * XREFs of ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C008B608
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E110 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C0084040 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C008ADC8 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::VerifySegmentSet(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5)
{
  __int64 v5; // rbx
  char v6; // r11
  unsigned int v7; // edi
  unsigned int v8; // edx

  v5 = *((_QWORD *)this + 5027);
  v6 = 0;
  v7 = *(_DWORD *)(1584LL * a2 + v5 + 20);
  v8 = 0;
  if ( a5 )
  {
    *a5 = 0;
    v5 = *((_QWORD *)this + 5027);
  }
  if ( (~*(_DWORD *)(v5 + 16) & a3) != 0 )
    return 0;
  for ( ; a3; a3 >>= 1 )
  {
    if ( (a3 & 1) != 0 && a4 != (a4 & *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v7) + 80LL)) )
      v8 |= 1 << v6;
    ++v6;
    ++v7;
  }
  if ( a5 )
    *a5 = v8;
  return v8 == 0;
}
