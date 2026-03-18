/*
 * XREFs of ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x1800555A8
 * Callers:
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x1800552E0 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x1800553BC (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?last@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1801A0154 (-last@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x180055570 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall detail::pointer_buffer_impl<CDrawListEntry *>::size(_QWORD *a1)
{
  int v1; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_DWORD *)a1 & 3;
  if ( !v1 )
    return 1LL;
  if ( v1 == 1 )
    return *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 16);
  if ( (unsigned int)(v1 - 2) > 1 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  return 0LL;
}
