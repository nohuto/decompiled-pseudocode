/*
 * XREFs of ??$reset@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXPEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@Z @ 0x180156238
 * Callers:
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x18015A0B8 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Setp@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEAAXPEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@U?$integral_constant@_N$0A@@1@@Z @ 0x1801555F8 (--$_Setp@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@-$shared_ptr@VSpatialGr.c)
 */

void __fastcall std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::reset<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>(
        __int64 a1,
        Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *a2)
{
  std::_Ref_count_base *v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::_Setp<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>(
    (Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper **)&v4,
    a2);
  v3 = *(std::_Ref_count_base **)(a1 + 8);
  *(_OWORD *)a1 = v4;
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
