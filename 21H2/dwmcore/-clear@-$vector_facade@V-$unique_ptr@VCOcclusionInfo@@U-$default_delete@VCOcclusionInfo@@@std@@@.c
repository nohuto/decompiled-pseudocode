/*
 * XREFs of ?clear@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18004A8EC
 * Callers:
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x18004A820 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x18008E62C (--1CTreeData@@UEAA@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800D3590 (-Clear@CTreeData@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( (__int64)(a1[1] - *a1) >> 3 )
    return detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL);
  return result;
}
