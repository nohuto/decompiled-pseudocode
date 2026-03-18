/*
 * XREFs of ?last@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1801A2CF4
 * Callers:
 *     ?size@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@QEBA_KXZ @ 0x1801A2D2C (-size@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@d.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18004D540 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x18004D578 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CDrawListEntry *>::last(_QWORD *a1)
{
  __int64 v2; // rbx

  v2 = 8 * detail::pointer_buffer_impl<CDrawListEntry *>::size(a1);
  return v2 + detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
}
