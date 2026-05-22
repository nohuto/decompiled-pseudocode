/*
 * XREFs of ?AddSource@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEBU_GUID@@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800D6D04
 * Callers:
 *     ?OnInputSourceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBU_GUID@@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800D8160 (-OnInputSourceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Window.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJV?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800D1EEC (-QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddSource(
        RTL_SRWLOCK *a1,
        __int128 *a2,
        _QWORD *a3)
{
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // rdx
  __int128 v9; // xmm0
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rax
  __int128 v12; // [rsp+28h] [rbp-21h]
  _QWORD v13[2]; // [rsp+48h] [rbp-1h] BYREF
  __int128 v14; // [rsp+58h] [rbp+Fh]
  __int128 v15; // [rsp+68h] [rbp+1Fh]
  _QWORD *v16; // [rsp+80h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 128LL))(*a3);
  if ( v6 < 0 )
  {
    result = 2147942450LL;
    if ( v6 == -2147024846 )
      return result;
    v8 = 446LL;
    goto LABEL_4;
  }
  v9 = *a2;
  v10 = (volatile signed __int32 *)a3[1];
  v12 = *a2;
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 2);
    v10 = (volatile signed __int32 *)a3[1];
    v9 = v12;
  }
  v16 = 0LL;
  v11 = *a3;
  v13[0] = off_1801AC4D0;
  v13[1] = a1;
  v14 = v9;
  v15 = 0LL;
  if ( v10 )
    _InterlockedIncrement(v10 + 2);
  *(_QWORD *)&v15 = v11;
  v16 = v13;
  *((_QWORD *)&v15 + 1) = v10;
  if ( v10 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
  v6 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback(
         a1,
         (__int64)v13);
  if ( v6 < 0 )
  {
    v8 = 454LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  return 0LL;
}
