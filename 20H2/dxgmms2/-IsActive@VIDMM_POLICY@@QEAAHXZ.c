/*
 * XREFs of ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C006D7E8
 * Callers:
 *     ?QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C00254E4 (-QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS.c)
 *     ?QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1C002573C (-QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTIC.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006D800 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C00BAE4C (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_POLICY::IsActive(VIDMM_POLICY *this)
{
  unsigned int v1; // eax
  unsigned int v2; // eax

  v1 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 1) != 0 )
    v2 = v1 >> 2;
  else
    v2 = v1 >> 1;
  return v2 & 1;
}
