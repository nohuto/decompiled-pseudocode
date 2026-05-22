/*
 * XREFs of ??_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180159140
 * Callers:
 *     _std::shared_ptr_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper_::_Setp_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__::_1_::catch$1 @ 0x180155B03 (_std--shared_ptr_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper_--_Setp_Windows.c)
 *     ?_Destroy@?$_Ref_count@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@EEAAXXZ @ 0x180167110 (-_Destroy@-$_Ref_count@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@EEAA.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x180158138 (--1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *__fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::`scalar deleting destructor'(
        Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *this,
        char a2)
{
  Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::~SpatialGraphDriverHandleWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x188);
  return this;
}
