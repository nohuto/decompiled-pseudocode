/*
 * XREFs of ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18007E664
 * Callers:
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x180006A04 (--1CProjectedShadow@@MEAA@XZ.c)
 *     ?OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001DAD0 (-OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18003CCB0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x180045CA0 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x18007E69C (--1CTreeData@@UEAA@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800C1190 (-Clear@CTreeData@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  unsigned __int64 v1; // rax

  v1 = (unsigned __int64)((unsigned __int128)((a1[1] - *a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  if ( (a1[1] - *a1) / 24 )
    LODWORD(v1) = detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
                    a1,
                    0LL,
                    (a1[1] - *a1) / 24);
  return v1;
}
