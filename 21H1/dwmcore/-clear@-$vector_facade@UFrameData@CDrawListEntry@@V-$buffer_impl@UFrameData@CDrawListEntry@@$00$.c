/*
 * XREFs of ?clear@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801A6710
 * Callers:
 *     ??1CWARPDrawListEntry@@EEAA@XZ @ 0x1801A5B30 (--1CWARPDrawListEntry@@EEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18001C8C4 (-clear_region@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEntr.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  unsigned __int64 result; // rax

  result = (unsigned __int64)((unsigned __int128)((a1[1] - *a1) * (__int128)0x6BCA1AF286BCA1BLL) >> 64) >> 63;
  if ( (a1[1] - *a1) / 76 )
    return detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL,
             (a1[1] - *a1) / 76);
  return result;
}
