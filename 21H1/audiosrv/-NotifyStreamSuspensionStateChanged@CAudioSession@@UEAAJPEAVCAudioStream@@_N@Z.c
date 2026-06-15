/*
 * XREFs of ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180035D50
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800C6A8C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBC04 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

__int64 __fastcall CAudioSession::NotifyStreamSuspensionStateChanged(
        CAudioSession *this,
        struct CAudioStream *a2,
        char a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned __int64 v7; // r8
  unsigned int v8; // ebp
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r14
  char *v13; // r14
  __int64 v14; // rcx
  _DWORD *v15; // rbp
  int v16; // eax
  char *v17; // rcx
  int v18; // edi
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // r9d
  _DWORD *v23; // r12
  int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  int v29; // r8d
  int v30; // r9d
  int v31; // [rsp+40h] [rbp-58h] BYREF
  int v32; // [rsp+44h] [rbp-54h] BYREF
  __int64 v33; // [rsp+48h] [rbp-50h] BYREF
  __int64 v34; // [rsp+50h] [rbp-48h] BYREF
  __int64 v35; // [rsp+58h] [rbp-40h] BYREF
  __int64 v36; // [rsp+60h] [rbp-38h] BYREF
  __int64 v37[6]; // [rsp+68h] [rbp-30h] BYREF
  char v38; // [rsp+A0h] [rbp+8h] BYREF
  char v39; // [rsp+B8h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v7 = *((_QWORD *)this + 13);
  v8 = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = 0LL;
    while ( *(struct CAudioStream **)(*((_QWORD *)this + 12) + 8 * v10) != a2 )
    {
      v10 = ++v9;
      if ( v9 >= v7 )
        goto LABEL_9;
    }
    _mm_lfence();
    v11 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v10);
    if ( *(_BYTE *)(v11 + 128) != a3 )
    {
      v23 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        v10,
                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *v23 > 4u )
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 80) + 40LL))(*(_QWORD *)(v11 + 80));
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v11 + 8) + 80LL))(v11 + 8);
        v26 = *(_QWORD *)(v11 + 72);
        v27 = v25;
        v38 = a3;
        v31 = v24;
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 64LL))(v26);
        v35 = v27;
        v34 = v28;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          (_DWORD)v23,
          (unsigned int)&unk_180167FD3,
          v29,
          v30,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v31,
          (__int64)&v38);
      }
      *(_BYTE *)(v11 + 128) = a3;
    }
  }
  else
  {
LABEL_9:
    v33 = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v33);
    v13 = (char *)a2 + 8;
    if ( (*(int (__fastcall **)(char *, __int64 *))(*((_QWORD *)a2 + 1) + 24LL))((char *)a2 + 8, &v33) >= 0 )
    {
      v15 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        v14,
                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *v15 > 4u )
      {
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 40LL))(v33);
        v17 = (char *)a2 + 8;
        v18 = v16;
        v19 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v13 + 80LL))(v17);
        v20 = *((_QWORD *)this + 91);
        v37[0] = v19;
        v36 = v20;
        v39 = a3;
        v32 = v18;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          (_DWORD)v15,
          (unsigned int)&unk_180167980,
          v21,
          v22,
          (__int64)v37,
          (__int64)&v36,
          (__int64)&v32,
          (__int64)&v39);
      }
    }
    v8 = -2004287484;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v8;
}
