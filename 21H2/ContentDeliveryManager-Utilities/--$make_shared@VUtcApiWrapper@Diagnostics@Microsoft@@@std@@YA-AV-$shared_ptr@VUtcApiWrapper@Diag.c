/*
 * XREFs of ??$make_shared@VUtcApiWrapper@Diagnostics@Microsoft@@@std@@YA?AV?$shared_ptr@VUtcApiWrapper@Diagnostics@Microsoft@@@0@XZ @ 0x180019980
 * Callers:
 *     ?DownloadLatestUtcSettings@FeatureManager@ContentManagement@@UEAAJXZ @ 0x180010460 (-DownloadLatestUtcSettings@FeatureManager@ContentManagement@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800B2468 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Microsoft::Diagnostics::UtcApiWrapper>(_QWORD *a1)
{
  _DWORD *v2; // rax

  v2 = operator new(0x20uLL);
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    *((_OWORD *)v2 + 1) = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 2) = &Microsoft::Diagnostics::UtcWrapperBase::`vftable';
  }
  a1[1] = v2;
  *a1 = v2 + 4;
  return a1;
}
