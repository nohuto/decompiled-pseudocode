/*
 * XREFs of ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800BF6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180021CF4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?InitializeSectionState@SipcPort@@IEAAJI@Z @ 0x1800312C8 (-InitializeSectionState@SipcPort@@IEAAJI@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180031334 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??0AlpcPort@@AEAA@_N@Z @ 0x1800314C0 (--0AlpcPort@@AEAA@_N@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18003215C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D280 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1SipcPrivateNamespace@@QEAA@XZ @ 0x1800BF394 (--1SipcPrivateNamespace@@QEAA@XZ.c)
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x1800BF4F0 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800C07B0 (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x1800C0BB8 (-GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z.c)
 *     ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x1800C1480 (-Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z.c)
 *     ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z @ 0x1800C15E0 (-OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800C1C70 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x1800C1CAC (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
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
  int v11; // edx
  int v12; // ebx
  unsigned __int16 v13; // bx
  unsigned __int8 *v14; // rcx
  __int64 v15; // rdx
  __int16 v16; // ax
  int v17; // eax
  void *v18; // rdx
  AlpcPort *v19; // rax
  int v20; // edx
  int *v21; // rax
  AlpcPort *v22; // rbx
  __int64 v23; // rbx
  int v24; // eax
  int v25; // edx
  void *v26; // rax
  void *v27; // rax
  void *v28; // rdx
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  void *v31; // [rsp+58h] [rbp-A8h] BYREF
  void *v32; // [rsp+60h] [rbp-A0h] BYREF
  AlpcPort *v33; // [rsp+68h] [rbp-98h]
  void *v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h] BYREF
  __int16 v36; // [rsp+80h] [rbp-80h]
  __int128 v37; // [rsp+84h] [rbp-7Ch] BYREF
  _BYTE v38[68]; // [rsp+94h] [rbp-6Ch] BYREF
  _BYTE v39[72]; // [rsp+D8h] [rbp-28h] BYREF
  void *v40[10]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v41; // [rsp+174h] [rbp+74h]
  _BYTE v42[68]; // [rsp+184h] [rbp+84h] BYREF
  _BYTE v43[72]; // [rsp+1C8h] [rbp+C8h] BYREF

  v6 = 0LL;
  *a4 = 0LL;
  v34 = a3;
  v33 = this;
  *a5 = 0LL;
  *a6 = 0LL;
  v35 = 0LL;
  v36 = 0;
  v37 = 0LL;
  memset_0(v38, 0, sizeof(v38));
  memset_0(v39, 0, 0x44uLL);
  v10 = (char *)this + 88;
  if ( AlpcMessage::GetMessageData((AlpcPort *)((char *)this + 88), 0xA4uLL, &v35) == 164 )
  {
    v32 = 0LL;
    v31 = 0LL;
    memset_0(v40, 0, 0x54uLL);
    v41 = 0LL;
    memset_0(v42, 0, sizeof(v42));
    memset_0(v43, 0, 0x44uLL);
    v12 = SipcPrivateNamespace::Open((SipcPrivateNamespace *)v40, (const struct SipcPrivateNamespaceAttributes *)&v37);
    if ( v12 >= 0 )
    {
      v13 = 0;
      v14 = (unsigned __int8 *)&v35;
      v15 = 2LL;
      do
      {
        v16 = *v14++;
        v13 = v16 | (v13 << 8);
        --v15;
      }
      while ( v15 );
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (wil::details **)&v31,
        0LL);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (wil::details **)&v32,
        0LL);
      v17 = SipcSignalFactory::OpenServerEvents(v13, (const struct SipcPrivateNamespace *)v40, &v32, &v31);
      if ( v17 >= 0 )
      {
        SipcPrivateNamespace::~SipcPrivateNamespace(v40);
        v19 = (AlpcPort *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v19 )
          v6 = (void **)AlpcPort::AlpcPort(v19, 0);
        if ( v6 )
        {
          v12 = SipcPort::InitializeSectionState((SipcPort *)v6, 0);
          if ( v12 >= 0 )
          {
            v30 = 0;
            v21 = (int *)((char *)&v30 + 3);
            do
            {
              *(_BYTE *)v21 = a2;
              a2 >>= 8;
              v21 = (int *)((char *)v21 - 1);
            }
            while ( v21 >= &v30 );
            v22 = v33;
            *((_DWORD *)v10 + 10) = v30;
            *(_DWORD *)v10 = 2883588;
            v23 = *((_QWORD *)v22 + 7);
            wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
              v6 + 7,
              0LL);
            v24 = NtAlpcAcceptConnectPort(
                    v6 + 7,
                    v23,
                    0LL,
                    0LL,
                    &AlpcPort::ServerEndpointAlpcAttributes,
                    v34,
                    v10,
                    0LL,
                    1);
            if ( v24 >= 0 )
            {
              if ( (((unsigned __int64)v6[7] + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              {
                v12 = AlpcPort::FillSectionListEntryPool((AlpcPort *)v6, 0x20uLL);
                if ( v12 >= 0 )
                {
                  *(_OWORD *)v10 = 0LL;
                  *((_OWORD *)v10 + 1) = 0LL;
                  *((_QWORD *)v10 + 4) = 0LL;
                  *((_QWORD *)v10 + 42) = 0LL;
                  *((_WORD *)v10 + 1) = 40;
                  v26 = v32;
                  v32 = 0LL;
                  *((_DWORD *)v10 + 84) = 1610612736;
                  *a4 = v26;
                  v27 = v31;
                  v31 = 0LL;
                  *a5 = v27;
                  v12 = 0;
                  *a6 = v6;
                  goto LABEL_23;
                }
              }
              else
              {
                v12 = v24 | 0x90000000;
                wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(v24 | 0x90000000), v25);
              }
            }
            else
            {
              v12 = wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v24, v25);
            }
          }
          AlpcPort::`scalar deleting destructor'((AlpcPort *)v6, 1);
        }
        else
        {
          v12 = -2147024882;
          wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL, v20);
        }
LABEL_23:
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
          (wil::details **)&v31,
          v18);
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
          (wil::details **)&v32,
          v28);
        return (unsigned int)v12;
      }
      v12 = v17;
    }
    SipcPrivateNamespace::~SipcPrivateNamespace(v40);
    goto LABEL_23;
  }
  v12 = -2147418113;
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8000FFFFLL, v11);
  return (unsigned int)v12;
}
