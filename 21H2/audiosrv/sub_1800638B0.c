/*
 * XREFs of sub_1800638B0 @ 0x1800638B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_1800612F4 @ 0x1800612F4 (sub_1800612F4.c)
 *     sub_180063B00 @ 0x180063B00 (sub_180063B00.c)
 *     sub_1800652C4 @ 0x1800652C4 (sub_1800652C4.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800BB410 @ 0x1800BB410 (sub_1800BB410.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800638B0(__int64 a1, signed int a2)
{
  signed int LastError; // ebx
  std::_Ref_count_base *v4; // rax
  std::_Ref_count_base *v5; // rdx
  std::_Ref_count_base *v6; // rcx
  __vcrt_trace_logging_provider *v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  signed int pvData; // [rsp+40h] [rbp-9h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-1h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp+7h] BYREF
  std::_Ref_count_base *v14; // [rsp+58h] [rbp+Fh] BYREF
  std::_Ref_count_base *v15; // [rsp+60h] [rbp+17h]
  char v16[32]; // [rsp+68h] [rbp+1Fh] BYREF
  signed int *p_pvData; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+90h] [rbp+47h]
  int v19; // [rsp+94h] [rbp+4Bh]

  LastError = a2;
  SecurityDescriptor = 0LL;
  if ( a2 )
    goto LABEL_24;
  if ( !*(_QWORD *)(a1 + 200) )
    *(_QWORD *)(a1 + 200) = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, __int64), __int64))(*(_QWORD *)qword_18019E640 + 56LL))(
                              qword_18019E640,
                              sub_180035610,
                              a1);
  LastError = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&dwCreationFlags + 48LL))(
                *(_QWORD *)&dwCreationFlags,
                (a1 + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64));
  if ( LastError < 0 )
  {
LABEL_23:
    if ( !LastError )
      goto LABEL_18;
    goto LABEL_24;
  }
  *(_DWORD *)(a1 + 108) = 1;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-405489"
           "3335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
          1u,
          &SecurityDescriptor,
          0LL) )
    LastError = GetLastError();
  if ( LastError )
    goto LABEL_24;
  LastError = sub_180063B00(a1, L"Audiosrv", &unk_1801495A0, SecurityDescriptor);
  *(_DWORD *)(a1 + 56) = LastError == 0;
  if ( LastError
    || (LastError = sub_180063B00(a1, L"PlaybackManagerRpc", &unk_180149540, 0LL),
        *(_DWORD *)(a1 + 60) = LastError == 0,
        LastError)
    || (LastError = sub_180063B00(a1, L"AudioSrvDiagnosticsRpc", &unk_1801494E0, 0LL),
        *(_DWORD *)(a1 + 64) = LastError == 0,
        LastError)
    || (LastError = sub_180063B00(a1, L"SpatialSoundDataManagerRpc", &unk_180149480, SecurityDescriptor),
        *(_DWORD *)(a1 + 68) = LastError == 0,
        LastError) )
  {
LABEL_24:
    v8 = (__vcrt_trace_logging_provider *)sub_180008448(a1, sub_1800B6240)[1];
    if ( *(_DWORD *)v8 > 2u
      && __vcrt_trace_logging_provider::_TlgKeywordOn(v8, (const struct _TlgProvider_t *)0x400000000000LL, v9) )
    {
      pvData = LastError;
      p_pvData = &pvData;
      v18 = 4;
      v19 = 0;
      sub_1800521E8(v10, byte_18016620B, 0LL, 0LL, 3, (__int64)v16);
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
    sub_1800612F4(&v14);
    v4 = v14;
    v5 = v15;
    v14 = 0LL;
    v15 = 0LL;
    qword_18019EED8 = (__int64)v4;
    v6 = qword_18019EEE0;
    qword_18019EEE0 = v5;
    if ( v6 )
      sub_180052600(v6);
    if ( qword_18019EED8 )
    {
      sub_1800652C4();
      goto LABEL_18;
    }
    if ( (byte_18019F980 & 4) != 0 )
    {
      sub_1800BB410(v6, v5, L"ListenTo", 0LL);
      goto LABEL_23;
    }
  }
LABEL_18:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return (unsigned int)LastError;
}
