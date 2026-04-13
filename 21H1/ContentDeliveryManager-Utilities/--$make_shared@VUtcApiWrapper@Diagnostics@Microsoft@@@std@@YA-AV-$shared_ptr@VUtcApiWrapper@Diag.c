/*
 * XREFs of ??$make_shared@VUtcApiWrapper@Diagnostics@Microsoft@@@std@@YA?AV?$shared_ptr@VUtcApiWrapper@Diagnostics@Microsoft@@@0@XZ @ 0x1800185C0
 * Callers:
 *     ?DownloadLatestUtcSettings@FeatureManager@ContentManagement@@UEAAJXZ @ 0x1800103B0 (-DownloadLatestUtcSettings@FeatureManager@ContentManagement@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800ADD58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<Microsoft::Diagnostics::UtcApiWrapper>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  volatile signed __int32 *v4; // rsi

  v2 = operator new(0x20uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    *((_OWORD *)v2 + 1) = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 2) = &Microsoft::Diagnostics::UtcWrapperBase::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = (volatile signed __int32 *)a1[1];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  a1[1] = v3;
  *a1 = v3 + 4;
  return a1;
}
