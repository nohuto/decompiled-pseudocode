/*
 * XREFs of ?InitTopologyIdInfo@EndpointDevice@@AEAAJXZ @ 0x180057714
 * Callers:
 *     ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x180057478 (-Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800579C8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180057AD0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsPlugin@EndpointDevice@@AEAAJPEAH@Z @ 0x180057B54 (-IsPlugin@EndpointDevice@@AEAAJPEAH@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall EndpointDevice::InitTopologyIdInfo(EndpointDevice *this)
{
  int IsPlugin; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // ebx
  _WORD *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // esi
  __int64 v22; // r8
  int v24; // [rsp+30h] [rbp-288h] BYREF
  int v25[2]; // [rsp+38h] [rbp-280h] BYREF
  __int64 v26; // [rsp+40h] [rbp-278h] BYREF
  __int64 v27; // [rsp+48h] [rbp-270h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-268h] BYREF
  __int64 v29; // [rsp+58h] [rbp-260h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-258h] BYREF
  void **p_pv; // [rsp+68h] [rbp-250h]
  void *v32; // [rsp+70h] [rbp-248h] BYREF
  char v33; // [rsp+78h] [rbp-240h]
  unsigned __int16 Src[264]; // [rsp+80h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  IsPlugin = EndpointDevice::IsPlugin(this, &v24);
  v3 = IsPlugin;
  if ( IsPlugin < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD2,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
      (const char *)(unsigned int)IsPlugin);
    return v3;
  }
  else
  {
    if ( v24 )
      return 0LL;
    v4 = *((_QWORD *)this + 3);
    *(_QWORD *)v25 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, int *))(*(_QWORD *)v4 + 24LL))(
           v4,
           &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
           23LL,
           0LL,
           v25);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDB,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        (const char *)(unsigned int)v5);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
      return v6;
    }
    else
    {
      v26 = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)v25 + 32LL))(*(_QWORD *)v25, 0LL, &v26);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE0,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
          (const char *)(unsigned int)v7);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
        return v8;
      }
      else
      {
        v28 = 0LL;
        v9 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v26 + 64LL))(
               v26,
               &v28);
        if ( v9 < 0 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v28);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
          return (unsigned int)v9;
        }
        else
        {
          v27 = 0LL;
          v10 = (**v28)(v28, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v27);
          v11 = v10;
          if ( v10 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xED,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
              (const char *)(unsigned int)v10);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v28);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
            return v11;
          }
          else
          {
            v24 = 0;
            v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 32LL))(v27, &v24);
            v13 = v12;
            if ( v12 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xF2,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
                (const char *)(unsigned int)v12);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v28);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
              return v13;
            }
            else
            {
              *((_DWORD *)this + 29) = (unsigned __int16)v24;
              v29 = 0LL;
              v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 96LL))(v27, &v29);
              v15 = v14;
              if ( v14 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xF7,
                  (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
                  (const char *)(unsigned int)v14);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v28);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
                return v15;
              }
              else
              {
                pv = 0LL;
                p_pv = &pv;
                v32 = 0LL;
                v33 = 1;
                v16 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v29 + 64LL))(v29, &v32);
                if ( v33 )
                  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
                    p_pv,
                    v32);
                if ( v16 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0xFA,
                    (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
                    (const char *)(unsigned int)v16);
                  if ( pv )
                    CoTaskMemFree(pv);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v28);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
                  return (unsigned int)v16;
                }
                else
                {
                  v17 = pv;
                  v18 = -1LL;
                  v19 = -1LL;
                  do
                    ++v19;
                  while ( *((_WORD *)pv + v19) );
                  while ( *((_WORD *)pv + v19) != 92 )
                    --v19;
                  v20 = StringCchCopyW(Src, 0x104uLL, (const unsigned __int16 *)pv + v19 + 1);
                  v21 = v20;
                  if ( v20 >= 0 )
                  {
                    v22 = -1LL;
                    do
                      ++v22;
                    while ( Src[v22] );
                    std::wstring::assign((char *)this + 152, Src);
                    do
                      ++v18;
                    while ( v17[v18] );
                    std::wstring::assign((char *)this + 120, v17);
                    if ( pv )
                      CoTaskMemFree(pv);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v28);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
                    return 0LL;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x102,
                    (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
                    (const char *)(unsigned int)v20);
                  if ( pv )
                    CoTaskMemFree(pv);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v28);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v25);
                  return v21;
                }
              }
            }
          }
        }
      }
    }
  }
}
