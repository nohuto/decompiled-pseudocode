/*
 * XREFs of ?RuntimeClassInitialize@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJXZ @ 0x18002C8E4
 * Callers:
 *     ??$MakeAndInitialize@VSpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceCollection@234@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@@Z @ 0x18002C840 (--$MakeAndInitialize@VSpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$00@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x18002C930 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180067514 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RuntimeClassInitialize(
        char *pv)
{
  _QWORD *v1; // rbx
  PTP_WORK ThreadpoolWork; // rax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = pv + 576;
  ThreadpoolWork = CreateThreadpoolWork(
                     Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::StaticExecuteWorkItems,
                     pv,
                     0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<1>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
    v1,
    ThreadpoolWork);
  if ( *v1 )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x66,
             (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevi"
                           "cecollection.cpp",
             v3);
}
