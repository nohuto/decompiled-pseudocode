/*
 * XREFs of ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x18002CBA0
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18002C8F0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?LockEndpointForUse@CPolicyConfig@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x18002CB40 (-LockEndpointForUse@CPolicyConfig@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AC8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CE10C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char *v4; // rbx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  _QWORD *v7; // r15
  _QWORD *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r13
  char v11; // si
  int v12; // eax
  char v13; // al
  char *v14; // rsi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  _WORD *v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rbx
  int v23; // [rsp+20h] [rbp-E0h]
  _BYTE v24[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+40h] [rbp-C0h] BYREF
  char *v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h]
  _DWORD v34[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  _QWORD v40[9]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 *v41; // [rsp+110h] [rbp+10h]
  int v42; // [rsp+118h] [rbp+18h]
  int v43; // [rsp+11Ch] [rbp+1Ch]
  void *v44; // [rsp+120h] [rbp+20h]
  int v45; // [rsp+128h] [rbp+28h]
  int v46; // [rsp+12Ch] [rbp+2Ch]
  _WORD *v47; // [rsp+130h] [rbp+30h]
  int v48; // [rsp+138h] [rbp+38h]
  int v49; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  __int64 *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  _BYTE *v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v33 = a2;
  v31 = a2;
  v4 = 0LL;
  v27 = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 112LL))(a3);
  v27 = 1;
  v29 = 0LL;
  v30 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 96LL))(a3, &v29);
  v6 = retaddr;
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB7E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v5,
      v23);
  v7 = (_QWORD *)*((_QWORD *)&v29 + 1);
  v8 = (_QWORD *)v29;
  v9 = (__int64)(*((_QWORD *)&v29 + 1) - v29) >> 3;
  v10 = 0LL;
  v11 = 0;
  v24[0] = 0;
  if ( (_QWORD)v29 != *((_QWORD *)&v29 + 1) )
  {
    while ( 1 )
    {
      v25 = 0LL;
      v26 = v4;
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)a3 + 104LL))(a3, *v8, &v25);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB87,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v12,
          v23);
      v10 += (__int64)(*((_QWORD *)&v25 + 1) - v25) >> 3;
      v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 88LL))(*v8);
      v14 = (char *)*((_QWORD *)&v25 + 1);
      v4 = (char *)v25;
      if ( !v13 )
        break;
      v24[0] = 1;
      v38 = *((_QWORD *)&v25 + 1);
      v39 = v25;
      if ( (_QWORD)v25 != *((_QWORD *)&v25 + 1) )
      {
        v24[8] = 0;
        do
        {
          v16 = *(_QWORD *)v4;
          v40[0] = off_180156658;
          v40[7] = v40;
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v16 + 352LL))(v16, v40);
          v4 += 8;
        }
        while ( v4 != v14 );
LABEL_16:
        v4 = (char *)v25;
      }
      if ( v4 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v4);
        std::_Deallocate<16,0>(v4, (v26 - v4) & 0xFFFFFFFFFFFFFFF8uLL);
        v25 = 0LL;
        v4 = 0LL;
        v26 = 0LL;
      }
      if ( ++v8 == v7 )
      {
        v11 = v24[0];
        goto LABEL_21;
      }
    }
    v36 = *((_QWORD *)&v25 + 1);
    v37 = v25;
    while ( v4 != v14 )
    {
      v15 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                    + 40LL))(
              g_DeviceGraphManager,
              *(_QWORD *)v4,
              *v8);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB90,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v15,
          v23);
      v4 += 8;
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v8);
    goto LABEL_16;
  }
LABEL_21:
  v17 = *((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      (__int64)v6,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
        + 1);
  if ( *(_DWORD *)v17 > 4u )
  {
    v24[0] = v11;
    v32 = v10;
    v28 = v9;
    v18 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3);
    v54 = v24;
    v55 = 1LL;
    v52 = &v32;
    v53 = 8LL;
    v50 = &v28;
    v51 = 8LL;
    if ( v18 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v18[v19] );
      v20 = 2 * v19 + 2;
    }
    else
    {
      v18 = &unk_18015D734;
      v20 = 2;
    }
    v47 = v18;
    v48 = v20;
    v49 = 0;
    v34[0] = 184549376;
    v34[1] = 4;
    v35 = 0LL;
    v41 = *(unsigned __int16 **)(v17 + 8);
    v42 = *v41;
    v43 = 2;
    v44 = &unk_180168D99;
    v45 = 91;
    v46 = 1;
    LODWORD(v31) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v17 + 32), v34, 0LL);
  }
  v21 = v29;
  if ( (_QWORD)v29 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v29);
    std::_Deallocate<16,0>(v21, (v30 - v21) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return v33;
}
