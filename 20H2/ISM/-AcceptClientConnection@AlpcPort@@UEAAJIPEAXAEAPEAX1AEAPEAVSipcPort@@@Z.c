/*
 * XREFs of ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800BF1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180021D84 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?InitializeSectionState@SipcPort@@IEAAJI@Z @ 0x180031358 (-InitializeSectionState@SipcPort@@IEAAJI@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800313C4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??0AlpcPort@@AEAA@_N@Z @ 0x180031550 (--0AlpcPort@@AEAA@_N@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800321EC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D360 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BEBB0 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??1SipcPrivateNamespace@@QEAA@XZ @ 0x1800BEE98 (--1SipcPrivateNamespace@@QEAA@XZ.c)
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x1800BF000 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800C02C0 (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x1800C06C8 (-GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z.c)
 *     ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x1800C0F90 (-Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z.c)
 *     ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z @ 0x1800C10F0 (-OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x1800C1758 (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall AlpcPort::AcceptClientConnection(
        AlpcPort *this,
        unsigned int a2,
        void *a3,
        void **a4,
        void **a5,
        void ***a6)
{
  void **v6; // rdi
  char *v10; // rsi
  int v11; // ebx
  unsigned __int16 v12; // bx
  unsigned __int8 *v13; // rcx
  __int64 v14; // rdx
  __int16 v15; // ax
  int v16; // eax
  void *v17; // rdx
  AlpcPort *v18; // rax
  int *v19; // rax
  AlpcPort *v20; // rbx
  __int64 v21; // rbx
  int v22; // eax
  int v23; // edx
  void *v24; // rax
  void *v25; // rax
  void *v26; // rdx
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  void *v29; // [rsp+58h] [rbp-A8h] BYREF
  void *v30; // [rsp+60h] [rbp-A0h] BYREF
  AlpcPort *v31; // [rsp+68h] [rbp-98h]
  void *v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  __int16 v34; // [rsp+80h] [rbp-80h]
  __int128 v35; // [rsp+84h] [rbp-7Ch] BYREF
  _BYTE v36[68]; // [rsp+94h] [rbp-6Ch] BYREF
  _BYTE v37[72]; // [rsp+D8h] [rbp-28h] BYREF
  void *v38[10]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v39; // [rsp+174h] [rbp+74h]
  _BYTE v40[68]; // [rsp+184h] [rbp+84h] BYREF
  _BYTE v41[72]; // [rsp+1C8h] [rbp+C8h] BYREF

  v6 = 0LL;
  *a4 = 0LL;
  v32 = a3;
  v31 = this;
  *a5 = 0LL;
  *a6 = 0LL;
  v33 = 0LL;
  v34 = 0;
  v35 = 0LL;
  memset_0(v36, 0, sizeof(v36));
  memset_0(v37, 0, 0x44uLL);
  v10 = (char *)this + 88;
  if ( AlpcMessage::GetMessageData((AlpcPort *)((char *)this + 88), 0xA4uLL, &v33) == 164 )
  {
    v30 = 0LL;
    v29 = 0LL;
    memset_0(v38, 0, 0x54uLL);
    v39 = 0LL;
    memset_0(v40, 0, sizeof(v40));
    memset_0(v41, 0, 0x44uLL);
    v11 = SipcPrivateNamespace::Open((SipcPrivateNamespace *)v38, (const struct SipcPrivateNamespaceAttributes *)&v35);
    if ( v11 >= 0 )
    {
      v12 = 0;
      v13 = (unsigned __int8 *)&v33;
      v14 = 2LL;
      do
      {
        v15 = *v13++;
        v12 = v15 | (v12 << 8);
        --v14;
      }
      while ( v14 );
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (wil::details **)&v29,
        0LL);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (wil::details **)&v30,
        0LL);
      v16 = SipcSignalFactory::OpenServerEvents(v12, (const struct SipcPrivateNamespace *)v38, &v30, &v29);
      if ( v16 >= 0 )
      {
        SipcPrivateNamespace::~SipcPrivateNamespace(v38);
        v18 = (AlpcPort *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v18 )
          v6 = (void **)AlpcPort::AlpcPort(v18, 0);
        if ( v6 )
        {
          v11 = SipcPort::InitializeSectionState((SipcPort *)v6, 0);
          if ( v11 >= 0 )
          {
            v28 = 0;
            v19 = (int *)((char *)&v28 + 3);
            do
            {
              *(_BYTE *)v19 = a2;
              a2 >>= 8;
              v19 = (int *)((char *)v19 - 1);
            }
            while ( v19 >= &v28 );
            v20 = v31;
            *((_DWORD *)v10 + 10) = v28;
            *(_DWORD *)v10 = 2883588;
            v21 = *((_QWORD *)v20 + 7);
            wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
              v6 + 7,
              0LL);
            v22 = NtAlpcAcceptConnectPort(
                    v6 + 7,
                    v21,
                    0LL,
                    0LL,
                    &AlpcPort::ServerEndpointAlpcAttributes,
                    v32,
                    v10,
                    0LL,
                    1);
            if ( v22 >= 0 )
            {
              if ( (((unsigned __int64)v6[7] + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              {
                v11 = AlpcPort::FillSectionListEntryPool((AlpcPort *)v6, 0x20uLL);
                if ( v11 >= 0 )
                {
                  *(_OWORD *)v10 = 0LL;
                  *((_OWORD *)v10 + 1) = 0LL;
                  *((_QWORD *)v10 + 4) = 0LL;
                  *((_QWORD *)v10 + 42) = 0LL;
                  *((_WORD *)v10 + 1) = 40;
                  v24 = v30;
                  v30 = 0LL;
                  *((_DWORD *)v10 + 84) = 1610612736;
                  *a4 = v24;
                  v25 = v29;
                  v29 = 0LL;
                  *a5 = v25;
                  v11 = 0;
                  *a6 = v6;
                  goto LABEL_23;
                }
              }
              else
              {
                v11 = v22 | 0x90000000;
                wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(v22 | 0x90000000));
              }
            }
            else
            {
              v11 = wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v22, v23);
            }
          }
          AlpcPort::`scalar deleting destructor'((AlpcPort *)v6, 1);
        }
        else
        {
          v11 = -2147024882;
          wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL);
        }
LABEL_23:
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
          (wil::details **)&v29,
          v17);
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
          (wil::details **)&v30,
          v26);
        return (unsigned int)v11;
      }
      v11 = v16;
    }
    SipcPrivateNamespace::~SipcPrivateNamespace(v38);
    goto LABEL_23;
  }
  v11 = -2147418113;
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8000FFFFLL);
  return (unsigned int)v11;
}
