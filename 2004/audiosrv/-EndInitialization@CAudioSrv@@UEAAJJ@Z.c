/*
 * XREFs of ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x180064180
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180052AB8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x180061BBC (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x1800643D0 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     ??$?4VCStreamConnectionManager@@@?$weak_ptr@VCStreamConnectionManager@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VCStreamConnectionManager@@@1@@Z @ 0x180066014 (--$-4VCStreamConnectionManager@@@-$weak_ptr@VCStreamConnectionManager@@@std@@QEAAAEAV01@AEBV-$sh.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B7ADC (_tlgKeywordOn.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x1800BBF8C (McTemplateU0zq_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioSrv::EndInitialization(CAudioSrv *this, signed int a2)
{
  signed int LastError; // ebx
  std::_Ref_count_base *v4; // rax
  std::_Ref_count_base *v5; // rdx
  std::_Ref_count_base *v6; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  signed int pvData; // [rsp+40h] [rbp-9h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-1h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp+7h] BYREF
  std::_Ref_count_base *v13; // [rsp+58h] [rbp+Fh] BYREF
  std::_Ref_count_base *v14; // [rsp+60h] [rbp+17h]
  char v15[32]; // [rsp+68h] [rbp+1Fh] BYREF
  signed int *p_pvData; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+90h] [rbp+47h]
  int v18; // [rsp+94h] [rbp+4Bh]

  LastError = a2;
  SecurityDescriptor = 0LL;
  if ( a2 )
    goto LABEL_24;
  if ( !*((_QWORD *)this + 25) )
    *((_QWORD *)this + 25) = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CAudioSrv *))(*(_QWORD *)ThreadPool + 56LL))(
                               ThreadPool,
                               CAudioSrv::OnDeviceWorkItem,
                               this);
  LastError = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&g_DeviceEnumerator + 48LL))(
                *(_QWORD *)&g_DeviceEnumerator,
                ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  if ( LastError < 0 )
  {
LABEL_23:
    if ( !LastError )
      goto LABEL_18;
    goto LABEL_24;
  }
  *((_DWORD *)this + 27) = 1;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-405489"
           "3335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
          1u,
          &SecurityDescriptor,
          0LL) )
    LastError = GetLastError();
  if ( LastError )
    goto LABEL_24;
  LastError = StartRpcServer((unsigned __int16 *)this, L"Audiosrv", &unk_18014A5A0, SecurityDescriptor);
  *((_DWORD *)this + 14) = LastError == 0;
  if ( LastError
    || (LastError = StartRpcServer((unsigned __int16 *)this, L"PlaybackManagerRpc", &unk_18014A540, 0LL),
        *((_DWORD *)this + 15) = LastError == 0,
        LastError)
    || (LastError = StartRpcServer((unsigned __int16 *)this, L"AudioSrvDiagnosticsRpc", &unk_18014A4E0, 0LL),
        *((_DWORD *)this + 16) = LastError == 0,
        LastError)
    || (LastError = StartRpcServer(
                      (unsigned __int16 *)this,
                      L"SpatialSoundDataManagerRpc",
                      &unk_18014A480,
                      SecurityDescriptor),
        *((_DWORD *)this + 17) = LastError == 0,
        LastError) )
  {
LABEL_24:
    v8 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                 (__int64)this,
                                 _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                   + 1);
    if ( *v8 > 2u && (unsigned __int8)tlgKeywordOn(v8, 0x400000000000LL) )
    {
      pvData = LastError;
      p_pvData = &pvData;
      v17 = 4;
      v18 = 0;
      tlgWriteTransfer_EtwEventWriteTransfer(v9, byte_18016714B, 0LL, 0LL, 3, (__int64)v15);
    }
    goto LABEL_18;
  }
  pcbData = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"EnableCaptureMonitor",
         0x18u,
         0LL,
         &pvData,
         &pcbData)
    || pvData )
  {
    CStreamConnectionManagerImpl::GetInstance(&v13);
    v4 = v13;
    v5 = v14;
    v13 = 0LL;
    v14 = 0LL;
    g_streamMonitorManager = (__int64)v4;
    v6 = qword_18019FF10;
    qword_18019FF10 = v5;
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    if ( g_streamMonitorManager )
    {
      std::weak_ptr<CStreamConnectionManager>::operator=<CStreamConnectionManager>();
      goto LABEL_18;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
    {
      McTemplateU0zq_EtwEventWriteTransfer(v6, v5, L"ListenTo", 0LL);
      goto LABEL_23;
    }
  }
LABEL_18:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return (unsigned int)LastError;
}
