/*
 * XREFs of ??$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@CAJPEAPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@W4Behavior@012@@Z @ 0x1801515A0
 * Callers:
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800D0DEC (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B060 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$AsWeak@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@YAJPEAUISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@PEAVWeakRef@01@@Z @ 0x1800D4ADC (--$AsWeak@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Micro.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800D61D8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18013D550 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014E490 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$MakeAndInitialize@V?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x18014F6E0 (--$MakeAndInitialize@V-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::_Create<Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory>(
        _QWORD *a1)
{
  int v2; // edi
  __int64 (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx
  std::_Ref_count_base *v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rcx
  std::_Ref_count_base *v10; // rcx
  __int64 v11; // rcx
  std::_Ref_count_base *v13[2]; // [rsp+28h] [rbp-18h]
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 *v16; // [rsp+88h] [rbp+48h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  AcquireSRWLockShared(&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton);
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>(
         &Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton,
         (__int64 *)&v14);
  ReleaseSRWLockShared(&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton);
  if ( v2 >= 0 )
  {
    v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v14;
    if ( !v14 )
    {
      AcquireSRWLockExclusive(&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton);
      v2 = Microsoft::WRL::WeakRef::As<IInspectable>(
             &Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton,
             (__int64 *)&v14);
      if ( v2 >= 0 && !v14 )
      {
        *(_OWORD *)v13 = 0LL;
        if ( *((_QWORD *)&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent
             + 1)
          && std::_Ref_count_base::_Incref_nz(*((std::_Ref_count_base **)&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent
                                              + 1)) )
        {
          *(_OWORD *)v13 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent;
        }
        if ( v13[0] )
        {
          WaitForSingleObject(*((HANDLE *)v13[0] + 1), 0xFFFFFFFF);
          v4 = (std::_Ref_count_base *)*((_QWORD *)&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent
                                       + 1);
          Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent = 0uLL;
          if ( v4 )
            std::_Ref_count_base::_Decwref(v4);
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v14);
        v2 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>,IInspectable,>(&v14);
        if ( v2 < 0 )
        {
          v11 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton;
          Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton = 0LL;
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        else
        {
          v16 = &Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton;
          v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v14;
          v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v16);
          v2 = Microsoft::WRL::AsWeak<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>(
                 v5,
                 v6);
          v15 = 0LL;
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v15);
          if ( (**v14)(v14, &GUID_9082dcb1_33fd_45f0_93e1_9152c2118ee8, &v15) >= 0 )
          {
            v7 = v15;
            v8 = *(volatile signed __int32 **)(v15 + 16);
            if ( v8 )
            {
              _InterlockedIncrement(v8 + 2);
              v8 = *(volatile signed __int32 **)(v7 + 16);
            }
            v9 = *(_QWORD *)(v7 + 8);
            if ( v8 )
              _InterlockedIncrement(v8 + 3);
            *(_QWORD *)&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent = v9;
            v10 = (std::_Ref_count_base *)*((_QWORD *)&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent
                                          + 1);
            *((_QWORD *)&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent
            + 1) = v8;
            if ( v10 )
              std::_Ref_count_base::_Decwref(v10);
            if ( v8 )
              std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
          }
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v15);
        }
        if ( v13[1] )
          std::_Ref_count_base::_Decref(v13[1]);
      }
      ReleaseSRWLockExclusive(&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton);
      v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v14;
    }
    if ( v2 >= 0 && v3 )
      v2 = (**v3)(v3, &GUID_537f320e_1d62_448c_aa6c_a47a3cf3285a, a1);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v2;
}
