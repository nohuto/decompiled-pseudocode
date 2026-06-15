/*
 * XREFs of ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800E20BC
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x1800E2600 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052DD0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056710 (--2@YAPEAX_K@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180067D3C (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800BE48C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800D5B68 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemF.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_ae3012955d22b805348e33a58899db17__void_ @ 0x1800E1F20 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_ae3012955d22b805348e33a5.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnFormatCapsChange(CKsSoftwareNotificationsMonitor *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int i; // esi
  unsigned __int16 *v11; // rax
  int v12; // r8d
  int v13; // ecx
  __int64 v14; // rdi
  void **v15; // rbx
  std::_Ref_count_base *v16; // rax
  std::_Ref_count_base *v17; // rcx
  __int64 v18; // rcx
  int v19; // edi
  _DWORD *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rax
  std::_Ref_count_base *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  unsigned int v29; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v30; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  int v35[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 pvar; // [rsp+78h] [rbp-90h] BYREF
  PROPVARIANT pvar_8[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v38; // [rsp+90h] [rbp-78h]
  void *v39; // [rsp+98h] [rbp-70h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-68h] BYREF
  std::_Ref_count_base *v41; // [rsp+A8h] [rbp-60h]
  int v42; // [rsp+B0h] [rbp-58h] BYREF
  void **v43; // [rsp+B8h] [rbp-50h]
  std::_Ref_count_base *v44; // [rsp+C0h] [rbp-48h]
  std::_Ref_count_base *v45[2]; // [rsp+C8h] [rbp-40h] BYREF
  PROPVARIANT *v46; // [rsp+D8h] [rbp-30h]
  char v47; // [rsp+E0h] [rbp-28h]
  _BYTE *v48; // [rsp+E8h] [rbp-20h]
  _BYTE v49[64]; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v50[6]; // [rsp+138h] [rbp+30h] BYREF
  _DWORD v51[6]; // [rsp+150h] [rbp+48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v2 = *((_QWORD *)this + 4);
  pvar = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 96LL))(v2, &pvar);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_54;
  }
  pv = 0LL;
  v5 = pvar;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v5 + 64LL))(v5, &pv);
  v4 = v6;
  if ( v6 < 0 )
  {
    v7 = 125LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_52;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), v35);
  v4 = v6;
  if ( v6 < 0 )
  {
    v7 = 128LL;
    goto LABEL_7;
  }
  v33 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, bool, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_DWORD *)this + 2) != 0,
         1879048207LL,
         &v33);
  v4 = v8;
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v33 + 24LL))(v33, &v29);
    v4 = v8;
    if ( v8 >= 0 )
    {
      for ( i = 0; i < v29; ++i )
      {
        v32 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v33 + 32LL))(v33, i, &v32) >= 0 )
        {
          v31 = 0LL;
          if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v32 + 32LL))(v32, 0LL, &v31) >= 0 )
          {
            v50[0] = 590439624;
            v50[1] = 1283267372;
            v50[2] = 1907779772;
            v50[3] = 1730509416;
            v50[4] = 1;
            *(_OWORD *)pvar_8 = 0LL;
            v38 = 0LL;
            v46 = pvar_8;
            v47 = 1;
            if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v31 + 40LL))(v31, v50, pvar_8) >= 0
              && LOWORD(pvar_8[0]) == 31 )
            {
              v11 = (unsigned __int16 *)pvar_8[1];
              do
              {
                v12 = *(unsigned __int16 *)((char *)v11 + (_QWORD)pv - (unsigned __int64)pvar_8[1]);
                v13 = *v11 - v12;
                if ( v13 )
                  break;
                ++v11;
              }
              while ( v12 );
              if ( !v13 )
              {
                v51[0] = -1702713381;
                v51[1] = 1102331579;
                v51[2] = -1223116157;
                v51[3] = -65530063;
                v51[4] = 1;
                PropVariantClear(pvar_8);
                if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v31 + 40LL))(v31, v51, pvar_8) >= 0
                  && LOWORD(pvar_8[0]) == 19
                  && LODWORD(pvar_8[1]) == v35[0] )
                {
                  v30 = 0LL;
                  v14 = v32;
                  *(_OWORD *)v45 = 0LL;
                  std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::operator=(
                    &v30,
                    (__int64 *)v45);
                  if ( v45[1] )
                    std::_Ref_count_base::_Decref(v45[1]);
                  v15 = (void **)v30;
                  if ( !(_QWORD)v30 )
                  {
                    v16 = (std::_Ref_count_base *)operator new(0x18uLL);
                    v17 = v16;
                    if ( v16 )
                    {
                      *((_DWORD *)v16 + 2) = 1;
                      *((_DWORD *)v16 + 3) = 1;
                      *(_QWORD *)v16 = &std::_Ref_count_obj<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::`vftable';
                      *((_QWORD *)v16 + 2) = 0LL;
                    }
                    else
                    {
                      v17 = 0LL;
                    }
                    v40 = (__int64)v17 + 16;
                    v41 = v17;
                    std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::operator=(
                      &v30,
                      &v40);
                    if ( v41 )
                      std::_Ref_count_base::_Decref(v41);
                    v15 = (void **)v30;
                  }
                  if ( (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)v14 + 40LL))(v14, v15) < 0 )
                  {
                    v24 = (std::_Ref_count_base *)*((_QWORD *)&v30 + 1);
                  }
                  else
                  {
                    v19 = dword_1801A0A94++;
                    v20 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                      v18,
                                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
                    if ( *v20 > 4u )
                    {
                      if ( v15 )
                        v23 = *v15;
                      else
                        v23 = 0LL;
                      v39 = v23;
                      v35[1] = v19;
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                        (__int64)v20,
                        byte_1801686FE,
                        v21,
                        v22,
                        (__int64)&v35[1],
                        &v39);
                    }
                    v48 = v49;
                    v42 = v19;
                    v24 = (std::_Ref_count_base *)*((_QWORD *)&v30 + 1);
                    if ( *((_QWORD *)&v30 + 1) )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL));
                      v24 = (std::_Ref_count_base *)*((_QWORD *)&v30 + 1);
                      v15 = (void **)v30;
                    }
                    v43 = v15;
                    v44 = v24;
                    v25 = std::function_void___cdecl_void__::function_void___cdecl_void____lambda_ae3012955d22b805348e33a58899db17__void_(
                            (__int64)v49,
                            (__int64)&v42);
                    v26 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
                    v27 = CSerialWorkQueue::QueueWorkItem(v26, v25);
                    if ( v27 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        192LL,
                        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
                        (const char *)(unsigned int)v27);
                  }
                  if ( v24 )
                    std::_Ref_count_base::_Decref(v24);
                }
              }
            }
            v47 = 0;
            PropVariantClear(pvar_8);
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
      }
      v4 = 0;
      goto LABEL_51;
    }
    v9 = 138LL;
  }
  else
  {
    v9 = 135LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
    (const char *)(unsigned int)v8);
LABEL_51:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
LABEL_52:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_54:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&pvar);
  return v4;
}
