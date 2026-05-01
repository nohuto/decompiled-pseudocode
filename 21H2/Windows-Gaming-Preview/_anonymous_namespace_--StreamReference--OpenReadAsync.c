/*
 * XREFs of _anonymous_namespace_::StreamReference::OpenReadAsync @ 0x180012840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180011C20 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Foundation@Windows@@UIAsyncInfo@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013AC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOperation.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Foundation@Windows@@UIAsyncInfo@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180013B60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOp.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044B28 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::StreamReference::OpenReadAsync(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  int v5; // eax
  int Interface; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  char *v9; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  struct Microsoft::WRL::Details::ModuleBase *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF
  __int64 v26; // [rsp+60h] [rbp+18h]
  __int64 v27; // [rsp+68h] [rbp+20h]

  v2 = *(unsigned int *)(a1 + 72);
  v3 = *(_QWORD *)(a1 + 64);
  v25 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, 5LL, v2, &v25);
  Interface = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 182LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)v7);
    goto LABEL_29;
  }
  *a2 = 0LL;
  v9 = (char *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v9 )
  {
    Interface = -2147024882;
LABEL_26:
    v7 = (unsigned int)Interface;
    v8 = 184LL;
    goto LABEL_27;
  }
  *(_QWORD *)v9 = &Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 24));
  v10 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>'};
  *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,IAsyncInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v9 + 2) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncInfo'};
  *((_QWORD *)v9 + 3) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)v9 + 8) = 1LL;
  if ( v10 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v10 + 8LL))(v10);
  *(_QWORD *)v9 = off_180049998;
  *((_QWORD *)v9 + 10) = 0LL;
  *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,IAsyncInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v9 + 2) = off_180049940;
  *((_QWORD *)v9 + 3) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v11 = (__int64 *)(v9 + 72);
  *((_QWORD *)v9 + 9) = 0LL;
  _Mtx_init_in_situ((_Mtx_t)(v9 + 88), 2);
  *((_QWORD *)v9 + 21) = 0LL;
  v12 = v25;
  if ( !v25 )
  {
    Interface = -2147467261;
    v13 = 137LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)Interface);
    goto LABEL_25;
  }
  v25 = 0LL;
  v14 = (__int64 *)*((_QWORD *)v9 + 10);
  v26 = v12;
  *((_QWORD *)v9 + 10) = v12;
  if ( v14 )
  {
    v15 = *v14;
    v26 = 0LL;
    (*(void (__fastcall **)(__int64 *))(v15 + 16))(v14);
  }
  v16 = *v11;
  if ( *v11 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64))v9 + 10))(
          *((_QWORD *)v9 + 10),
          &GUID_00000036_0000_0000_c000_000000000046,
          (__int64)(v9 + 72));
  Interface = v17;
  if ( v17 >= 0 )
  {
    v27 = 0LL;
    v18 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v19 = v18;
    if ( !v18 )
    {
      Interface = -2147024882;
      v13 = 161LL;
      goto LABEL_24;
    }
    v20 = Microsoft::WRL::Details::ModuleBase::module_;
    *v18 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *>::`vftable';
    *v18 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::FileProperties::StorageItemThumbnail *>>::`vftable';
    *((_DWORD *)v18 + 3) = 1;
    if ( v20 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v20 + 8LL))(v20);
    v19[2] = v9;
    *v19 = off_1800495A0;
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)v9 + 10) + 48LL))(*((_QWORD *)v9 + 10), v19);
    Interface = v21;
    if ( v21 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      Interface = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA4,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v21);
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v17);
  }
  if ( Interface >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::QueryInterface(
                  v9,
                  &GUID_c4a57c5e_32b0_55b3_ad13_ce1c23041ed6,
                  a2);
LABEL_25:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::Release(v9);
  if ( Interface < 0 )
    goto LABEL_26;
  Interface = 0;
LABEL_29:
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return (unsigned int)Interface;
}
