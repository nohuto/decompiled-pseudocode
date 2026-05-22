/*
 * XREFs of ?OnTrackingTimeoutExpired@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJK@Z @ 0x1800D1B78
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_538a60f2dfb0de3d5e0ccb23ebc37905__void_::_Do_call @ 0x1800D3D40 (std--_Func_impl_no_alloc__lambda_538a60f2dfb0de3d5e0ccb23ebc37905__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKKPEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800D0174 (-GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800D1F88 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnTrackingTimeoutExpired(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        int a2,
        __int64 a3)
{
  int CacheEntry; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  std::_Ref_count_base *v9[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v10[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *(_OWORD *)v9 = 0LL;
  CacheEntry = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::GetCacheEntry(
                 (__int64)this,
                 a2,
                 a3,
                 v9);
  v5 = CacheEntry;
  if ( CacheEntry < 0 )
  {
    v6 = 855LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)CacheEntry);
    goto LABEL_8;
  }
  if ( (*(unsigned __int8 (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)v9[0] + 112LL))(v9[0]) )
  {
    v10[0] = off_1801B19F0;
    v10[1] = this;
    v10[7] = v10;
    LOBYTE(v7) = 1;
    CacheEntry = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
                   this,
                   v9,
                   v10,
                   v7,
                   v9[0]);
    v5 = CacheEntry;
    if ( CacheEntry < 0 )
    {
      v6 = 870LL;
      goto LABEL_6;
    }
  }
  v5 = 0;
LABEL_8:
  if ( v9[1] )
    std::_Ref_count_base::_Decref(v9[1]);
  return v5;
}
