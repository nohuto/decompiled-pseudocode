/*
 * XREFs of ?_Destroy@?$_Ref_count@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@EEAAXXZ @ 0x180167110
 * Callers:
 *     <none>
 * Callees:
 *     ??_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180159140 (--_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 */

Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *__fastcall std::_Ref_count<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::_Destroy(
        __int64 a1)
{
  Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *v1; // rcx
  Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *result; // rax

  v1 = *(Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper **)(a1 + 16);
  if ( v1 )
    return Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::`scalar deleting destructor'(v1, 1);
  return result;
}
