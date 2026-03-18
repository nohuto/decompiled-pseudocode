/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800AF1F8
 * Callers:
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x1800AF280 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800AF3A8 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x1800AF3E0 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180111B30 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v5 = detail::pointer_buffer_impl<CDrawListEntry *>::size();
  v6 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) + 8 * v5;
  v7 = (v6 - detail::pointer_buffer_impl<CDrawListEntry *>::first(a1)) >> 3;
  if ( a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_5;
  }
  v8 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
  v9 = v8 + 8 * v7;
  if ( a3 != v7 )
  {
LABEL_5:
    v12 = 0LL;
    *(_QWORD *)&v11 = v8;
    *((_QWORD *)&v11 + 1) = v7;
    v14 = 0LL;
    v13 = v11;
    ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
      &v11,
      v8 + 8 * a3,
      v9,
      &v13);
  }
  return detail::pointer_buffer_impl<CDrawListEntry *>::consume(a1, -(__int64)a3, v9);
}
