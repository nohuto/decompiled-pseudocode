/*
 * XREFs of _std::shared_ptr_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper_::_Setp_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__::_1_::catch$1 @ 0x180155AA3
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ??_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x1801590E0 (--_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 */

void __fastcall __noreturn std::shared_ptr_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper_::_Setp_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *v2; // rcx

  v2 = *(Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper **)(a2 + 56);
  if ( v2 )
    Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::`scalar deleting destructor'(v2, 1u);
  throw;
}
