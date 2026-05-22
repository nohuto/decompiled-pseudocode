/*
 * XREFs of ?InitializeStreamReaderHelpers@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@MEAAJXZ @ 0x1800DFE10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18003D384 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?Init@?$PayloadFieldHelper@E@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800DB6A8 (-Init@-$PayloadFieldHelper@E@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@23.c)
 *     ?Init@?$PayloadFieldHelper@UPERCEPTION_STATE_STREAM_TIMESTAMPS@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800DB710 (-Init@-$PayloadFieldHelper@UPERCEPTION_STATE_STREAM_TIMESTAMPS@@@Holographic@Internal@Windows@@Q.c)
 *     ??$HandStateReaderInitialized@U_GUID@@AEB_NAEB_NAEB_NAEB_NAEA_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEB_N111AEA_N@Z @ 0x1800DD5A0 (--$HandStateReaderInitialized@U_GUID@@AEB_NAEB_NAEB_NAEB_NAEA_N@SpatialInteractionTrace@SpatialI.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBW4HandJointKind@People@Perception@Windows@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@W4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@U?$less@W4HandJointKind@People@Perception@Windows@@@std@@V?$allocator@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBW4HandJointKind@People@Perception@Windows@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800DE128 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBW4HandJointKind@People@Perception@Win.c)
 *     ?Init@?$PayloadFieldHelper@UHAND_POSE_OFFSET@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800DFC80 (-Init@-$PayloadFieldHelper@UHAND_POSE_OFFSET@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPa.c)
 *     ?Init@?$PayloadFieldHelper@UJOINT_OFFSET@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800DFCE8 (-Init@-$PayloadFieldHelper@UJOINT_OFFSET@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloa.c)
 *     ?Init@?$PayloadFieldHelper@W4SPATIAL_SYSTEM_READY_STATE@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800DFD50 (-Init@-$PayloadFieldHelper@W4SPATIAL_SYSTEM_READY_STATE@@@Holographic@Internal@Windows@@QEAAJPEA.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@U?$less@W4HandJointKind@People@Perception@Windows@@@std@@V?$allocator@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@$0A@@std@@@std@@QEAA_KAEBW4HandJointKind@People@Perception@Windows@@@Z @ 0x1800E2258 (-erase@-$_Tree@V-$_Tmap_traits@W4HandJointKind@People@Perception@Windows@@UJointHel_ea_1800E2258.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::InitializeStreamReaderHelpers(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rcx
  bool v9; // di
  bool v10; // al
  __int64 v11; // rcx
  __int64 v12; // r9
  bool v13; // r14
  unsigned int i; // esi
  char *v15; // rdi
  __int64 *v16; // rax
  __int64 *v17; // rcx
  int v18; // edx
  __int64 *v19; // r15
  size_t v20; // rax
  void *v21; // rax
  const struct std::nothrow_t *v22; // rdx
  void *v23; // rcx
  struct _GUID *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // [rsp+30h] [rbp-58h] BYREF
  __int64 v27; // [rsp+38h] [rbp-50h] BYREF
  bool v28; // [rsp+40h] [rbp-48h] BYREF
  bool v29; // [rsp+41h] [rbp-47h] BYREF
  bool v30; // [rsp+42h] [rbp-46h] BYREF
  _DWORD *v31; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v32[2]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v27 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 16) + 104LL))(*((_QWORD *)this + 16), &v27);
  v2 = Windows::Internal::Holographic::PayloadFieldHelper<PERCEPTION_STATE_STREAM_TIMESTAMPS>::Init(
         (__int64 *)this + 20,
         v27);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v6 = Windows::Internal::Holographic::PayloadFieldHelper<unsigned char>::Init(
           (__int64 *)this + 21,
           v27,
           (__int64)&SPATIALFIELD_Hand_Pressed);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *((_DWORD *)this + 66) = 8;
      v9 = (int)Windows::Internal::Holographic::PayloadFieldHelper<unsigned char>::Init(
                  (__int64 *)this + 22,
                  v27,
                  (__int64)&SPATIALFIELD_Hand_Bloom) >= 0;
      v10 = (int)Windows::Internal::Holographic::PayloadFieldHelper<enum SPATIAL_SYSTEM_READY_STATE>::Init(
                   (__int64 *)this + 23,
                   v27) >= 0
         && (int)Windows::Internal::Holographic::PayloadFieldHelper<unsigned char>::Init(
                   (__int64 *)this + 24,
                   v27,
                   (__int64)&SPATIALFIELD_SystemGesture_Completed) >= 0;
      v28 = v10;
      if ( v9 && v10 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEA,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
          (const char *)0x8000FFFFLL);
        v11 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        return 2147549183LL;
      }
      else
      {
        *((_BYTE *)this + 158) = v10;
        if ( (int)Windows::Internal::Holographic::PayloadFieldHelper<unsigned char>::Init(
                    (__int64 *)this + 25,
                    v27,
                    (__int64)&SPATIALFIELD_Hand_Grasp) < 0 )
        {
          LOBYTE(v26) = 0;
        }
        else
        {
          LOBYTE(v26) = 1;
          *((_DWORD *)this + 66) |= 0x10u;
        }
        v29 = (int)Windows::Internal::Holographic::PayloadFieldHelper<HAND_POSE_OFFSET>::Init(
                     (__int64 *)this + 26,
                     v27,
                     (__int64)&SPATIALFIELD_HoldingPoseOffset) >= 0;
        v13 = *((_BYTE *)this + 384)
           && (int)Windows::Internal::Holographic::PayloadFieldHelper<HAND_POSE_OFFSET>::Init(
                     (__int64 *)this + 27,
                     v27,
                     (__int64)&SPATIALFIELD_PointingPoseOffset) >= 0;
        v30 = v13;
        if ( *((_BYTE *)this + 384) )
        {
          for ( i = 0; i < 0x1A; ++i )
          {
            v15 = (char *)&unk_180207740 + 32 * i;
            v16 = (__int64 *)*((_QWORD *)this + 43);
            v17 = (__int64 *)v16[1];
            if ( *((_BYTE *)v17 + 25) )
              goto LABEL_36;
            v18 = *(_DWORD *)v15;
            do
            {
              if ( *((_DWORD *)v17 + 8) >= v18 )
              {
                v16 = v17;
                v17 = (__int64 *)*v17;
              }
              else
              {
                v17 = (__int64 *)v17[2];
              }
            }
            while ( !*((_BYTE *)v17 + 25) );
            if ( v16 == *((__int64 **)this + 43) || v18 < *((_DWORD *)v16 + 8) )
            {
LABEL_36:
              v31 = (_DWORD *)((char *)&unk_180207740 + 32 * i);
              v16 = (__int64 *)*std::_Tree<std::_Tmap_traits<enum Windows::Perception::People::HandJointKind,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper,std::less<enum Windows::Perception::People::HandJointKind>,std::allocator<std::pair<enum Windows::Perception::People::HandJointKind const,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<enum Windows::Perception::People::HandJointKind const &>,std::tuple<>>(
                                  (__int64 *)this + 43,
                                  v32,
                                  v16,
                                  v12,
                                  &v31);
            }
            v19 = v16 + 5;
            if ( (int)Windows::Internal::Holographic::PayloadFieldHelper<JOINT_OFFSET>::Init(
                        v16 + 5,
                        v27,
                        (__int64)(v15 + 4)) >= 0 )
              v19[6] = *((_QWORD *)v15 + 3);
            else
              std::_Tree<std::_Tmap_traits<enum Windows::Perception::People::HandJointKind,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper,std::less<enum Windows::Perception::People::HandJointKind>,std::allocator<std::pair<enum Windows::Perception::People::HandJointKind const,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper>>,0>>::erase(
                (char *)this + 344,
                (char *)&unk_180207740 + 32 * i);
          }
        }
        *((_BYTE *)this + 156) = v13;
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27);
        *((_QWORD *)this + 28) = v20;
        v21 = operator new[](v20);
        v23 = (void *)*((_QWORD *)this + 29);
        *((_QWORD *)this + 29) = v21;
        if ( v23 )
          operator delete(v23, v22);
        v24 = (struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 15) + 48LL))(
                                *((_QWORD *)this + 15),
                                v32);
        SpatialInteractionDevices::SpatialInteractionTrace::HandStateReaderInitialized<_GUID,bool const &,bool const &,bool const &,bool const &,bool &>(
          v24,
          &v30,
          &v29,
          &v28,
          (bool *)&v26,
          (bool *)this + 385);
        v25 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
        return 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE0,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)(unsigned int)v6);
      v8 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
      (const char *)(unsigned int)v2);
    v4 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    return v3;
  }
}
