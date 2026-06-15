/*
 * XREFs of ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800EC77C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_49e61b4b5e107012da56e971e0ef5073__void_::_Do_call @ 0x1800EE010 (std--_Func_impl_no_alloc__lambda_49e61b4b5e107012da56e971e0ef5073__void_--_Do_call.c)
 * Callees:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180012180 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046308 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004AFCC (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18004B530 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800688EC (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800BB410 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CD47C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E3BCC (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800ED748 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800EE0F0 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CAudioResourceManager::ReevaluateSaDeviceSettings(
        CAudioResourceManager *this,
        const unsigned __int16 *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  char v5; // r12
  int v6; // r13d
  struct tWAVEFORMATEX *v7; // rdi
  struct tWAVEFORMATEX *v8; // rsi
  __int64 *i; // rbx
  char v10; // al
  __int64 v11; // r9
  __int64 *v12; // r14
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // r14
  struct CEndpointCharacteristics *v16; // r14
  unsigned int v17; // eax
  int v18; // eax
  struct tWAVEFORMATEX *v19; // r14
  struct CEndpointCharacteristics *v20; // r15
  int v21; // eax
  __int64 v22; // rax
  const struct tWAVEFORMATEX *v23; // rax
  __int64 v24; // r15
  __int64 v25; // r14
  void *v26; // rbx
  void *v27; // rbx
  SaDeviceParams *v28; // [rsp+70h] [rbp-90h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h] BYREF
  __int64 v30; // [rsp+80h] [rbp-80h] BYREF
  struct CEndpointCharacteristics *v31; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID v32; // [rsp+90h] [rbp-70h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-60h]
  struct tWAVEFORMATEX *v34; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID pv; // [rsp+B8h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *v36; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v37; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-28h]
  struct tWAVEFORMATEX *v39; // [rsp+E0h] [rbp-20h] BYREF
  struct tWAVEFORMATEX *v40; // [rsp+E8h] [rbp-18h]
  struct tWAVEFORMATEX *v41; // [rsp+F0h] [rbp-10h]
  CAudioResourceManager *v42; // [rsp+F8h] [rbp-8h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _GUID v44; // [rsp+110h] [rbp+10h] BYREF
  struct _GUID v45; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v46[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v47[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v48[16]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v49[16]; // [rsp+160h] [rbp+60h] BYREF

  v42 = this;
  v31 = 0LL;
  v3 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v31);
  v4 = 0LL;
  v29 = 0LL;
  if ( v3 >= 0 )
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
    v3 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
           g_DeviceGraphStore,
           a2,
           &v29);
    v4 = v29;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids, a2);
    v4 = v29;
  }
  if ( v3 >= 0 )
  {
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v4 + 112LL))(v4, lpCriticalSection);
    while ( 1 )
    {
      v5 = 1;
      v37 = 0LL;
      v38 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v29 + 80LL))(v29, &v37);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Eu,
          (__int64)&WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids,
          (__int64)(*((_QWORD *)&v37 + 1) - v37) >> 3);
      }
      if ( v6 >= 0 )
        break;
LABEL_44:
      v27 = (void *)v37;
      if ( (_QWORD)v37 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v37,
          *((__int64 **)&v37 + 1));
        std::_Deallocate<16,0>(v27, (const struct std::nothrow_t *)((v38 - (_QWORD)v27) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      if ( v6 < 0 || v5 )
      {
        if ( lpCriticalSection[0] )
          LeaveCriticalSection(lpCriticalSection[0]);
        goto LABEL_50;
      }
    }
    v30 = 0LL;
    v7 = 0LL;
    v40 = 0LL;
    v8 = 0LL;
    v41 = 0LL;
    for ( i = (__int64 *)v37; ; ++i )
    {
      if ( i == *((__int64 **)&v37 + 1) )
      {
LABEL_43:
        CoTaskMemFree(v8);
        CoTaskMemFree(v7);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v30);
        goto LABEL_44;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 152LL))(*i)
        && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 120LL))(*i) )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 136LL))(*i);
        v11 = *i;
        if ( v10 )
        {
          v32 = 0LL;
          v33 = 0LL;
          if ( (*(int (__fastcall **)(__int64, __int64, struct _GUID *))(*(_QWORD *)v29 + 104LL))(v29, v11, &v32) < 0 )
            goto LABEL_26;
          v12 = *(__int64 **)&v32.Data1;
          if ( (__int64)(*(_QWORD *)v32.Data4 - *(_QWORD *)&v32.Data1) >> 3 == 1 )
          {
            v28 = 0LL;
            if ( (*(int (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*i + 104LL))(*i, &v28) >= 0 )
            {
              v13 = *i;
              v14 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&v32.Data1 + 104LL))(**(_QWORD **)&v32.Data1);
              if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13) != v14 )
              {
                v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
                if ( GetTickCount64() - v15 >= 0x2700 )
                {
                  Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v30, i);
                  v7 = (struct tWAVEFORMATEX *)*((_QWORD *)v28 + 2);
                  *((_QWORD *)v28 + 2) = 0LL;
                  CoTaskMemFree(0LL);
                  v40 = v7;
                  v8 = (struct tWAVEFORMATEX *)*((_QWORD *)v28 + 3);
                  *((_QWORD *)v28 + 3) = 0LL;
                  CoTaskMemFree(0LL);
                  v41 = v8;
                  v25 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&v32.Data1 + 104LL))(**(_QWORD **)&v32.Data1);
                  if ( v28 )
                    SaDeviceParams::`scalar deleting destructor'((LPVOID *)v28);
                  v28 = 0LL;
                  v26 = *(void **)&v32.Data1;
                  if ( *(_QWORD *)&v32.Data1 )
                  {
                    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
                      *(__int64 **)&v32.Data1,
                      *(__int64 **)v32.Data4);
                    std::_Deallocate<16,0>(
                      v26,
                      (const struct std::nothrow_t *)((v33 - (_QWORD)v26) & 0xFFFFFFFFFFFFFFF8uLL));
                  }
                  goto LABEL_41;
                }
              }
            }
            if ( v28 )
              SaDeviceParams::`scalar deleting destructor'((LPVOID *)v28);
LABEL_26:
            v12 = *(__int64 **)&v32.Data1;
          }
          if ( v12 )
          {
            std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v12, *(__int64 **)v32.Data4);
            std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)((v33 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL));
          }
          continue;
        }
        LODWORD(v28) = 0;
        v39 = 0LL;
        v34 = 0LL;
        v36 = 0LL;
        pv = 0LL;
        v44 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 40LL))(v11, v46);
        v45 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v47);
        v32 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v48);
        v16 = v31;
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
        v18 = DeriveDeviceGraphFormatsForStream(
                v16,
                0,
                (struct _GUID *)v17,
                AUDCLNT_SHAREMODE_SHARED,
                0,
                &v32,
                &v45,
                &v44,
                0LL,
                &v36,
                (struct tWAVEFORMATEX **)&pv,
                &v34,
                &v39);
        v19 = v39;
        if ( v18 >= 0 )
        {
          v32 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v49);
          v20 = v31;
          v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
          if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                      (__int64)v20,
                      v21,
                      v19,
                      &v32,
                      0,
                      &v28,
                      0LL,
                      0LL,
                      0LL) >= 0 )
          {
            v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 32LL))(*i);
            if ( v22 != (int)((double)(int)v28 * 10000000.0 / (double)(int)v19->nSamplesPerSec + 0.5)
              || (v23 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 48LL))(*i),
                  !(unsigned int)CompareWaveFormat(v19, v23)) )
            {
              v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
              if ( GetTickCount64() - v24 >= 0x2700 )
              {
                Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v30, i);
                CoTaskMemFree(0LL);
                v7 = v19;
                v40 = v19;
                CoTaskMemFree(0LL);
                v8 = v34;
                v41 = v34;
                v25 = (unsigned int)(int)((double)(int)v28 * 10000000.0 / (double)(int)v19->nSamplesPerSec + 0.5);
                CoTaskMemFree(pv);
                CoTaskMemFree(v36);
                CoTaskMemFree(0LL);
                CoTaskMemFree(0LL);
LABEL_41:
                v5 = 0;
                if ( v30 )
                {
                  std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v37);
                  v6 = CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(v42, v31, v29, v7, v8, v25, &v30);
                }
                goto LABEL_43;
              }
            }
          }
        }
        CoTaskMemFree(pv);
        CoTaskMemFree(v36);
        CoTaskMemFree(v34);
        CoTaskMemFree(v19);
      }
    }
  }
LABEL_50:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
  if ( v31 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v31 + 16LL))(v31);
}
