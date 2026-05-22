/*
 * XREFs of std::function_void___cdecl(Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks__)_::function_void___cdecl(Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks__)___lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_ @ 0x1800D4930
 * Callers:
 *     ?OnInputSourceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800D8230 (-OnInputSourceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::function_void___cdecl_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks____::function_void___cdecl_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks______lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // rax
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // rcx

  a1[7] = 0LL;
  *a1 = off_1801AC470;
  v2 = a2 + 1;
  a1[1] = *a2;
  v4 = a1 + 2;
  *v4 = 0LL;
  if ( v4 != a2 + 1 )
  {
    *v4 = *v2;
    *v2 = 0LL;
  }
  a1[3] = 0LL;
  a1[4] = 0LL;
  v5 = a2[3];
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  a1[3] = a2[2];
  a1[4] = a2[3];
  a1[7] = a1;
  v6 = (std::_Ref_count_base *)a2[3];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = *v2;
  if ( *v2 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return a1;
}
