/*
 * XREFs of ??$emplace@IIVDisplayId@@W4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIVDisplayId@@W4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180266A90
 * Callers:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x1800571E0 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800574D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18005750C (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 */

_QWORD *__fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace<unsigned int,unsigned int,DisplayId,enum DXGI_COLOR_SPACE_TYPE,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        CDrawListEntry **a8)
{
  __int64 v11; // rdi
  CDrawListCacheSet::ContentEntry *v12; // rax
  CDrawListEntry *v13; // rcx

  v11 = (*a3 - *a1) / 24;
  v12 = detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
          a1,
          v11);
  *((_DWORD *)v12 + 1) = a5;
  *((_DWORD *)v12 + 2) = a6;
  *((_DWORD *)v12 + 3) = a7;
  *(_DWORD *)v12 = a4;
  v13 = *a8;
  *((_QWORD *)v12 + 2) = *a8;
  if ( v13 )
    _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
  *a2 = *a1 + 24 * v11;
  if ( *a8 )
    CDrawListEntry::Release(*a8);
  return a2;
}
