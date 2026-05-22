/*
 * XREFs of ?MatchValueCaps@Internal@SpatialInteractionDevices@@YA_NGGGGPEAU_HIDP_VALUE_CAPS@@@Z @ 0x1800C94B8
 * Callers:
 *     SpatialInteractionDevices::StoreCapsIfMatches_1_ @ 0x1800C7B90 (SpatialInteractionDevices--StoreCapsIfMatches_1_.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_2_ @ 0x1800C7C34 (SpatialInteractionDevices--StoreCapsIfMatches_2_.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_3_ @ 0x1800C7CD8 (SpatialInteractionDevices--StoreCapsIfMatches_3_.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_4_ @ 0x1800C7D7C (SpatialInteractionDevices--StoreCapsIfMatches_4_.c)
 *     ?GetValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@W4_HIDP_REPORT_TYPE@@GGGGPEAPEAU_HIDP_VALUE_CAPS@@@Z @ 0x1800CB894 (-GetValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@W4_HIDP_REPORT_TYPE@@GGGGP.c)
 * Callees:
 *     <none>
 */

char __fastcall SpatialInteractionDevices::Internal::MatchValueCaps(
        SpatialInteractionDevices::Internal *this,
        __int16 a2,
        __int16 a3,
        __int16 a4,
        __int64 a5)
{
  char v5; // r10

  v5 = 0;
  if ( (!(_WORD)this || *(_WORD *)(a5 + 10) == (_WORD)this)
    && (!a2 || *(_WORD *)(a5 + 8) == a2)
    && *(_WORD *)a5 == a3
    && !*(_BYTE *)(a5 + 12)
    && *(_WORD *)(a5 + 56) == a4 )
  {
    return 1;
  }
  return v5;
}
