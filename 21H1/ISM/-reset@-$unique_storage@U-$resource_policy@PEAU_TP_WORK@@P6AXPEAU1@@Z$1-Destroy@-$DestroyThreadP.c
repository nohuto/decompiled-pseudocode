/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$00@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x18002C930
 * Callers:
 *     ?RuntimeClassInitialize@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJXZ @ 0x18002C8E4 (-RuntimeClassInitialize@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 *     ?OnFinalRelease@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D1680 (-OnFinalRelease@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@U.c)
 * Callees:
 *     ?Destroy@?$DestroyThreadPoolWork@$00@details@wil@@SAXPEAU_TP_WORK@@@Z @ 0x1800CF740 (-Destroy@-$DestroyThreadPoolWork@$00@details@wil@@SAXPEAU_TP_WORK@@@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<1>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::DestroyThreadPoolWork<1>::Destroy(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
