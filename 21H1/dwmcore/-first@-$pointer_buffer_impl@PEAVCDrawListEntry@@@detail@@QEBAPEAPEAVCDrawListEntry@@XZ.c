/*
 * XREFs of ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18004D540
 * Callers:
 *     ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18004CBC8 (-Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x18004CE0C (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@.c)
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_K@Z @ 0x18004D070 (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_K@Z.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18004D2B0 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x18004D38C (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x18004D578 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180050610 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801A2BF8 (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@de.c)
 *     ?consume@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_J@Z @ 0x1801A2C9C (-consume@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_J@Z.c)
 *     ?last@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1801A2CF4 (-last@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@QEBA_KXZ @ 0x1801A2D2C (-size@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@d.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CDrawListEntry *>::first(_QWORD *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*a1 & 3) == 0 )
    return (unsigned __int64)a1;
  if ( (*(_DWORD *)a1 & 3) == 1 )
    return *a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_DWORD *)a1 & 3) != 2 )
  {
    if ( (*(_DWORD *)a1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    return (unsigned __int64)a1;
  }
  return 0LL;
}
