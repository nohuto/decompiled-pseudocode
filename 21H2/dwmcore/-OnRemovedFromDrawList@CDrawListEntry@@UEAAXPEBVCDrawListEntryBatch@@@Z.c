/*
 * XREFs of ?OnRemovedFromDrawList@CDrawListEntry@@UEAAXPEBVCDrawListEntryBatch@@@Z @ 0x1800BF810
 * Callers:
 *     <none>
 * Callees:
 *     ?clear_region@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18001A544 (-clear_region@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEntr.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawListEntry::OnRemovedFromDrawList(CDrawListEntry *this, const struct CDrawListEntryBatch *a2)
{
  int v2; // eax
  __int64 v4; // rdx
  __int64 *v5; // rcx
  unsigned __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_DWORD *)this + 2);
  if ( v2 == 1 )
  {
    v4 = *((_QWORD *)this + 7);
    v5 = (__int64 *)((char *)this + 48);
    v6 = (__int64)((unsigned __int128)((v4 - *v5) * (__int128)0x6BCA1AF286BCA1BLL) >> 64) >> 1;
    v7 = (v6 >> 63) + v6 == 0;
    v8 = (v6 >> 63) + v6;
    v2 = 1;
    if ( v7 )
      goto LABEL_3;
    detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::clear_region(
      v5,
      0LL,
      v8);
    v2 = *((_DWORD *)this + 2);
  }
  if ( !v2 )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
LABEL_3:
  *((_DWORD *)this + 2) = v2 - 1;
}
