/*
 * XREFs of ?OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800E07E4
 * Callers:
 *     ?OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800E0E80 (-OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@E.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D4A3C (--$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@U_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@V?$_Uhash_compare@U_GUID@@UGuidHash@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@U?$equal_to@U_GUID@@@std@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800DE5A4 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBU_GUID@@@2@V-$tuple@$$V@2@@-$_Hash@V-$_Uma.c)
 *     ??$make_shared@VSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@PEAUISpatialObjectDevice@Holographic@34@PEAUISpatialObject@634@@std@@YA?AV?$shared_ptr@VSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@0@$$QEAPEAUISpatialObjectDevice@Holographic@Internal@Windows@@$$QEAPEAUISpatialObject@345@@Z @ 0x1800DE7E0 (--$make_shared@VSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@PEAUISpatialO.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@U_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@V?$_Uhash_compare@U_GUID@@UGuidHash@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@U?$equal_to@U_GUID@@@std@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x1800E28C8 (-lower_bound@-$_Hash@V-$_Umap_traits@U_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@Spati.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnHandSpatialObjectAdded(
        RTL_SRWLOCK *this,
        const struct _GUID *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r8
  std::_Ref_count_base **v13; // rax
  std::_Ref_count_base *v14; // rdx
  std::_Ref_count_base *v15; // rcx
  struct Windows::Internal::Holographic::ISpatialObjectDevice *Ptr; // [rsp+30h] [rbp-68h] BYREF
  std::_Ref_count_base **v17; // [rsp+38h] [rbp-60h] BYREF
  _OWORD *v18[2]; // [rsp+40h] [rbp-58h] BYREF
  std::_Ref_count_base *v19[2]; // [rsp+50h] [rbp-48h] BYREF
  std::_Ref_count_base *v20[2]; // [rsp+60h] [rbp-38h] BYREF
  std::_Ref_count_base **v21; // [rsp+70h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v23; // [rsp+A0h] [rbp+8h] BYREF
  struct Windows::Internal::Holographic::ISpatialObject *v24; // [rsp+B0h] [rbp+18h] BYREF
  struct Windows::Internal::Holographic::ISpatialObject *v25; // [rsp+B8h] [rbp+20h] BYREF

  v23 = 0LL;
  v4 = Microsoft::WRL::WeakRef::As<Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal>(
         &this[9].Ptr,
         &v23);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( v23 )
    {
      v24 = 0LL;
      try
      {
        v7 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)this[15].Ptr + 136LL))(this[15].Ptr);
        v8 = v7;
        if ( v7 >= 0 )
        {
          v25 = v24;
          Ptr = (struct Windows::Internal::Holographic::ISpatialObjectDevice *)this[15].Ptr;
          std::make_shared<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand,Windows::Internal::Holographic::ISpatialObjectDevice *,Windows::Internal::Holographic::ISpatialObject *>(
            v19,
            &Ptr,
            &v25);
          *(_OWORD *)v20 = 0LL;
          if ( v19[1] )
            _InterlockedIncrement((volatile signed __int32 *)v19[1] + 2);
          *(_OWORD *)v20 = *(_OWORD *)v19;
          v10 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK *, const struct _GUID *, std::_Ref_count_base **))(*(_QWORD *)v23 + 48LL))(
                  v23,
                  this,
                  a2,
                  v20);
          v11 = v10;
          if ( v10 >= 0 )
          {
            AcquireSRWLockExclusive(this + 24);
            v18[1] = &this[24];
            std::_Hash<std::_Umap_traits<_GUID,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>,std::_Uhash_compare<_GUID,Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>,0>>::lower_bound(
              &this[16],
              &v17,
              a2);
            v13 = v17;
            if ( v17 == this[17].Ptr )
            {
              v18[0] = &a2->Data1;
              std::_Hash<std::_Umap_traits<_GUID,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>,std::_Uhash_compare<_GUID,Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<_GUID const &>,std::tuple<>>(
                (__int64)&this[16],
                (__int64)&v21,
                v12,
                v18);
              v13 = v21;
            }
            else
            {
              v21 = v17;
            }
            v14 = v19[1];
            if ( v19[1] )
            {
              _InterlockedIncrement((volatile signed __int32 *)v19[1] + 2);
              v14 = v19[1];
            }
            v13[4] = v19[0];
            v15 = v13[5];
            v13[5] = v14;
            if ( v15 )
              std::_Ref_count_base::_Decref(v15);
            if ( this != (RTL_SRWLOCK *)-192LL )
              ReleaseSRWLockExclusive(this + 24);
            if ( v20[1] )
              std::_Ref_count_base::_Decref(v20[1]);
            if ( v19[1] )
              std::_Ref_count_base::_Decref(v19[1]);
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v24);
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v23);
            result = 0LL;
          }
          else if ( v10 == -2147024846 )
          {
            if ( v20[1] )
              std::_Ref_count_base::_Decref(v20[1]);
            if ( v19[1] )
              std::_Ref_count_base::_Decref(v19[1]);
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v24);
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v23);
            result = 2147942450LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x373,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
              (const char *)(unsigned int)v10);
            if ( v20[1] )
              std::_Ref_count_base::_Decref(v20[1]);
            if ( v19[1] )
              std::_Ref_count_base::_Decref(v19[1]);
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v24);
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v23);
            result = v11;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x36F,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
            (const char *)(unsigned int)v7);
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v24);
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v23);
          result = v8;
        }
      }
      catch ( ... )
      {
        LODWORD(v23) = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0x379,
                         (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
                         v9);
        return (unsigned int)v23;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36C,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)0x8000FFFFLL);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v23);
      return 2147549183LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36B,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v23);
    return v5;
  }
  return result;
}
