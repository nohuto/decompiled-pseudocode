/*
 * XREFs of ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C8020
 * Callers:
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18008C294 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x18008E62C (--1CTreeData@@UEAA@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800D3590 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x180232820 (--1CProjectedShadow@@MEAA@XZ.c)
 *     ?OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180234FA0 (-OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // r8

  result = 0xAAAAAAAAAAAAAAABuLL;
  v2 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v2 )
    return detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL,
             v2);
  return result;
}
