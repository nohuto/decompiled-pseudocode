/*
 * XREFs of ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800B9BE8
 * Callers:
 *     ??$assign@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@0@Z @ 0x180005608 (--$assign@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x18001CB7C (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18001CDE8 (-PushCandidates@COverlayContext@@AEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x1800B9510 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x1800B9AA0 (-BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800C68E4 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x1800C69B8 (--1COverlayContext@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // r8

  result = 0x6DB6DB6DB6DB6DB7LL;
  v2 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 5);
  if ( v2 )
    return detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL,
             v2);
  return result;
}
