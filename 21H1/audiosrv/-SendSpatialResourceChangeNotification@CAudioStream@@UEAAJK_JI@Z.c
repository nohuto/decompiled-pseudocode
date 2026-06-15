/*
 * XREFs of ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800D3420
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800529B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180062370 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ABC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SendSpatialResourceChangeNotification(CAudioStream *this, int a2, __int64 a3, int a4)
{
  _DWORD *v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // r14d
  char *v14; // rax
  void *v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // r9
  int MediaEvent; // eax
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // [rsp+38h] [rbp-59h] BYREF
  int v25; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v26; // [rsp+40h] [rbp-51h] BYREF
  __int64 v27; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v28[32]; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v29; // [rsp+78h] [rbp-19h]
  __int64 v30; // [rsp+80h] [rbp-11h]
  __int64 *v31; // [rsp+88h] [rbp-9h]
  __int64 v32; // [rsp+90h] [rbp-1h]
  int *v33; // [rsp+98h] [rbp+7h]
  __int64 v34; // [rsp+A0h] [rbp+Fh]
  int *v35; // [rsp+A8h] [rbp+17h]
  __int64 v36; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v8 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   (__int64)this,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 4u )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
    v25 = a4;
    v24 = v9;
    v27 = *((_QWORD *)this + 40);
    v26 = a3;
    v35 = &v24;
    v33 = &v25;
    v31 = &v26;
    v29 = &v27;
    v36 = 4LL;
    v34 = 4LL;
    v32 = 8LL;
    v30 = 8LL;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v8, byte_180167DFA, 0LL, 0LL, 6, (__int64)v28);
  }
  v10 = *((_QWORD *)this + 8);
  if ( !v10 )
    return 0LL;
  v11 = *(_QWORD *)(v10 + 728);
  v12 = 2 * *(_DWORD *)(v11 - 16) + 2;
  v13 = 2 * *(_DWORD *)(v11 - 16) + 74;
  v14 = (char *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v14;
  if ( v14 )
  {
    *(_DWORD *)v14 = v13;
    *(GUID *)(v14 + 28) = GUID_00000000_0000_0000_0000_000000000000;
    *((_DWORD *)v14 + 1) = 0x20000;
    *((_DWORD *)v14 + 6) = v12;
    *((_QWORD *)v14 + 6) = *((_QWORD *)this + 40);
    *((_QWORD *)v14 + 7) = a3;
    *((_DWORD *)v14 + 16) = a4;
    *((_DWORD *)v14 + 17) = a2;
    MediaEvent = StringCbCopyW(v14 + 72, v12, *(char **)(*((_QWORD *)this + 8) + 728LL));
    v16 = MediaEvent;
    if ( MediaEvent < 0 )
    {
      v17 = 1811LL;
LABEL_10:
      v18 = (unsigned int)MediaEvent;
      goto LABEL_11;
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
    MediaEvent = GenerateMediaEvent(v15, v20, v21, v22);
    v16 = MediaEvent;
    if ( MediaEvent < 0 )
    {
      v17 = 1816LL;
      goto LABEL_10;
    }
    operator delete(v15, (const struct std::nothrow_t *)0x50);
    return 0LL;
  }
  v16 = -2147024882;
  v17 = 1792LL;
  v18 = 2147942414LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)v18);
  if ( v15 )
    operator delete(v15, (const struct std::nothrow_t *)0x50);
  return v16;
}
