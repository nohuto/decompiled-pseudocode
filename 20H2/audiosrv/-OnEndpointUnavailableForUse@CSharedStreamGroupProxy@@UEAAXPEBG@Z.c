/*
 * XREFs of ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800E59B0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180027470 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046308 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18005261C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052730 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056070 (--2@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180060190 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18006727C (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BB1A8 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800E2390 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1800E289C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CSharedStreamGroupProxy::OnEndpointUnavailableForUse(
        CSharedStreamGroupProxy *this,
        unsigned __int16 *a2)
{
  unsigned __int16 *v2; // rsi
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // r14
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  const char *v15; // r9
  unsigned __int16 *v16; // [rsp+30h] [rbp-A8h] BYREF
  const CHAR *v17; // [rsp+38h] [rbp-A0h] BYREF
  volatile signed __int32 *v18; // [rsp+40h] [rbp-98h]
  volatile signed __int32 *v19; // [rsp+48h] [rbp-90h]
  _QWORD *v20; // [rsp+50h] [rbp-88h]
  __int64 v21; // [rsp+58h] [rbp-80h]
  _QWORD v22[13]; // [rsp+70h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  __int64 v24; // [rsp+E0h] [rbp+8h] BYREF
  const unsigned __int16 *v25; // [rsp+E8h] [rbp+10h]
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+F0h] [rbp+18h] BYREF
  volatile signed __int32 *v27; // [rsp+F8h] [rbp+20h] BYREF

  v25 = a2;
  v2 = a2;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>((__int64 *)&v26, (__int64)this - 8);
  v24 = 0LL;
  v3 = (volatile signed __int32 *)operator new(0x30uLL);
  try
  {
    v4 = v3;
    v27 = v3;
    if ( v3 )
    {
      *((_DWORD *)v3 + 2) = 1;
      *((_DWORD *)v3 + 3) = 1;
      *(_QWORD *)v3 = &std::_Ref_count_obj<std::wstring>::`vftable';
      std::wstring::wstring((__int64)(v3 + 4), v2);
    }
    else
    {
      v4 = 0LL;
    }
    v5 = v4 + 4;
    v18 = v4 + 4;
    v19 = v4;
    v27 = (volatile signed __int32 *)&v24;
    v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v27);
    if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v26, v6) >= 0 )
    {
      v20 = v22;
      v7 = v24;
      v21 = v24;
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
      if ( v4 )
      {
        _InterlockedIncrement(v4 + 2);
        v2 = (unsigned __int16 *)v25;
        v5 = v18;
        v7 = v21;
      }
      v22[0] = off_18014A498;
      v22[1] = v7;
      v22[2] = v5;
      v22[3] = v4;
      v22[7] = v22;
      v8 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
      v9 = CSerialWorkQueue::QueueWorkItem(v8, (__int64)v22);
      v10 = retaddr;
      if ( v9 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          1298LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v9);
      v11 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                    (__int64)v10,
                                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 1);
      if ( *v11 > 4u )
      {
        v17 = "OnEndpointUnavailableForUse";
        v16 = v2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (__int64)v11,
          byte_18016798B,
          v12,
          v13,
          (void **)&v16,
          &v17);
      }
    }
    if ( v4 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
    v14 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v26);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x51B,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      v15);
  }
}
