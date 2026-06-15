/*
 * XREFs of ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18002C270
 * Callers:
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x18002ADA8 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x18002AF34 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800B9618 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ??1CAudioSessionManagerProvider@@UEAA@XZ @ 0x1800D0B20 (--1CAudioSessionManagerProvider@@UEAA@XZ.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800D82E0 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800ED288 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18002C4A0 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x18002C520 (-FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA-AV-$uniqu.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046308 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047588 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800BB410 (WPP_SF_S.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800C2C34 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800C7478 (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CD3CC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CD438 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CD47C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800CD4B4 (--$_Emplace_reallocate@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800CF35C (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioSessionManager::Disconnect(__int64 a1, unsigned int a2, char a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r12
  __int64 v9; // rax
  LPCRITICAL_SECTION *v10; // rsi
  void *v11; // r12
  int i; // r13d
  __int64 v13; // rbx
  LPCRITICAL_SECTION *j; // r15
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  __int64 v18; // r8
  CAudioSession **v19; // rax
  _QWORD *v20; // rax
  int v21; // [rsp+20h] [rbp-A8h]
  __int64 v22; // [rsp+20h] [rbp-A8h]
  _QWORD *v23; // [rsp+20h] [rbp-A8h]
  __int64 v24; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+30h] [rbp-98h] BYREF
  __int128 v26; // [rsp+38h] [rbp-90h] BYREF
  LPCRITICAL_SECTION *v27; // [rsp+48h] [rbp-80h]
  __int64 v28; // [rsp+50h] [rbp-78h]
  __int64 v29; // [rsp+58h] [rbp-70h]
  __int64 v30; // [rsp+60h] [rbp-68h]
  void *Block; // [rsp+68h] [rbp-60h] BYREF
  __int64 v32; // [rsp+70h] [rbp-58h]
  __int64 v33; // [rsp+78h] [rbp-50h]
  int v34; // [rsp+80h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+E8h] [rbp+20h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      50LL,
      &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
      *(_QWORD *)(a1 + 296));
  }
  v26 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
         g_DeviceGraphStore,
         *(_QWORD *)(a1 + 296),
         &v25);
  v7 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x604,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v5,
      v21);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
    return v7;
  }
  else
  {
    if ( a2 == 6 || a2 == 1 )
    {
      v10 = (LPCRITICAL_SECTION *)*((_QWORD *)&v26 + 1);
    }
    else
    {
      CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection(v6, &lpCriticalSection, v25);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      v29 = a1 + 128;
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
      v28 = a1 + 128;
      v8 = *(_QWORD *)(a1 + 168);
      v9 = *(_QWORD *)(a1 + 176);
      v22 = v9;
      v10 = (LPCRITICAL_SECTION *)*((_QWORD *)&v26 + 1);
      while ( 1 )
      {
        v30 = v8;
        if ( v8 == v9 )
          break;
        v24 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v8, &v24) >= 0 && v24 )
        {
          lpCriticalSection = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v24, &lpCriticalSection) >= 0 )
          {
            (*(void (__fastcall **)(LPCRITICAL_SECTION, _QWORD))&lpCriticalSection->DebugInfo[7].EntryCount)(
              lpCriticalSection,
              *(_QWORD *)(a1 + 296));
            if ( v27 == v10 )
            {
              std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
                &v26,
                v10,
                &lpCriticalSection);
              v10 = (LPCRITICAL_SECTION *)*((_QWORD *)&v26 + 1);
            }
            else
            {
              *v10 = lpCriticalSection;
              Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v10++);
              *((_QWORD *)&v26 + 1) = v10;
            }
          }
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&lpCriticalSection);
        }
        v16 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v8 += 8LL;
        v9 = v22;
      }
      if ( a1 != -128 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
    }
    Block = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    v28 = a1 + 16;
    if ( a2 == 1 )
      JUMPOUT(0x180091EF1LL);
    lpCriticalSection = (LPCRITICAL_SECTION)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(a1 + 56);
    while ( lpCriticalSection )
    {
      v17 = *(_QWORD **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                          a1 + 56,
                          &lpCriticalSection);
      v23 = v17;
      if ( v17 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v17 + 8LL))(v17);
        LOBYTE(v18) = a3;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v23[2] + 32LL))(v23 + 2, a2, v18);
        (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
      }
    }
    v11 = Block;
    if ( a1 != -16 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    for ( i = 0; i < (int)v32; ++i )
    {
      v19 = (CAudioSession **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&Block);
      CAudioSession::ForceExpire(*v19);
      v20 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&Block);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 16LL))(*v20);
    }
    if ( a2 == 6 )
    {
      v13 = v26;
    }
    else
    {
      v13 = v26;
      for ( j = (LPCRITICAL_SECTION *)v26; j != v10; ++j )
        (*(void (__fastcall **)(LPCRITICAL_SECTION, _QWORD))&(*j)->DebugInfo[7].Flags)(*j, *(_QWORD *)(a1 + 296));
    }
    if ( v11 )
      free(v11);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v13 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v13);
      std::_Deallocate<16,0>(v13, ((unsigned __int64)v27 - v13) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    return 0LL;
  }
}
