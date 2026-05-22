/*
 * XREFs of ?OnHeadUpdateEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@4@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D7F40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180069708 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?PrepareAndSendInputInfo@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEADK_JPEAUISpatialGraphNodeReference@Holographic@34@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D1D30 (-PrepareAndSendInputInfo@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@W.c)
 *     ?SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D24D8 (-SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEAUIPerceptionTimestamp@Perception@4@PEA_J@Z @ 0x1800DA74C (-UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windo.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnHeadUpdateEvent(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        const struct MPCMatrix4x4 *a2,
        struct Windows::Perception::IPerceptionTimestamp *a3,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a4)
{
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference *v7; // rbx
  __int64 *v8; // rdi
  __int64 v9; // rbx
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v10; // rcx
  char v11; // al
  int v12; // eax
  unsigned int *v13; // rcx
  __int64 v14; // rdx
  __int64 v16; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+48h] [rbp-40h] BYREF
  __int64 v18; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference *v20; // [rsp+90h] [rbp+8h] BYREF

  v20 = 0LL;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::UpdateRigTransforms(
    (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)((char *)this - 8),
    a3,
    &v18);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  v7 = (struct Windows::Internal::Holographic::ISpatialGraphNodeReference *)*((_QWORD *)this + 52);
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*((_QWORD *)this + 52));
    v17 = 0LL;
    v20 = v7;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v17);
  }
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-352LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 424));
  v8 = (__int64 *)*((_QWORD *)this + 58);
  v9 = *v8;
  v16 = *v8;
  while ( (__int64 *)v9 != v8 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 40) + 32LL))(*(_QWORD *)(v9 + 40))
      && *(_BYTE *)(*(_QWORD *)(v9 + 40) + 107LL)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 40) + 72LL))(*(_QWORD *)(v9 + 40))
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 40) + 80LL))(*(_QWORD *)(v9 + 40)) )
    {
      Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::PrepareAndSendInputInfo(
        (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)((char *)this - 8),
        *(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice **)(v9 + 40),
        0LL,
        0,
        v18,
        v20,
        a4);
    }
    else
    {
      v10 = *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection **)(v9 + 40);
      v11 = *((_BYTE *)v10 + 105);
      *((_BYTE *)v10 + 105) = 0;
      if ( v11 )
      {
        v12 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SendDeviceUpdate(
                v10,
                *(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice **)(v9 + 40),
                a4);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            539LL,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
            (const char *)(unsigned int)v12);
      }
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v16);
    v9 = v16;
  }
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-424LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 424));
  v13 = (unsigned int *)*((_QWORD *)this + 85);
  if ( v13 )
  {
    v14 = *v13;
    *(_OWORD *)(v13 + 239) = *(_OWORD *)a2;
    *(_OWORD *)(v13 + 243) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v13 + 247) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(v13 + 251) = *((_OWORD *)a2 + 3);
    (*(void (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *, __int64))(*(_QWORD *)a4 + 32LL))(
      a4,
      v14);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v20);
  return 0LL;
}
