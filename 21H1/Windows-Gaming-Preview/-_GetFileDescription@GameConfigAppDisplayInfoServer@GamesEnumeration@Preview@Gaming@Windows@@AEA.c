/*
 * XREFs of ?_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@PEAPEAUHSTRING__@@@Z @ 0x180013194
 * Callers:
 *     _lambda_ee5780e38ff7caddf53f6e29b0c55e5d_::operator() @ 0x180012CC8 (_lambda_ee5780e38ff7caddf53f6e29b0c55e5d_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B9E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVGam.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180012208 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$IIterable@PEAUHSTRING__@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180013720 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180013720.c)
 *     ??0?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x180014CE4 (--0-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foun.c)
 *     ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x180014DD0 (-InsertAtInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@C.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180015BA4 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collecti.c)
 *     __security_check_cookie @ 0x180044200 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription(
        __int64 a1,
        _QWORD *a2,
        HSTRING *a3)
{
  HRESULT v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  volatile signed __int64 *v9; // rbx
  void *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  HSTRING v18; // rcx
  __int64 v19; // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // rcx
  HSTRING v21; // rcx
  __int64 v22; // rcx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // eax
  __int64 (__fastcall ***v30)(_QWORD, GUID *, _QWORD *); // rbx
  int v31; // eax
  __int64 v32; // r9
  __int64 v33; // rdx
  HSTRING v34; // rax
  __int64 (__fastcall ***v35)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v36; // rcx
  __int64 (__fastcall ***v37)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  HSTRING v41; // [rsp+20h] [rbp-60h] BYREF
  __int64 v42; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall ***v43)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  __int64 v44; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall ***v45)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-40h] BYREF
  __int64 v46; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  string = 0LL;
  v5 = WindowsCreateStringReference(L"System.FileDescription", 0x16u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    JUMPOUT(0x180013695LL);
  }
  v44 = 0LL;
  v43 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a2 + 96LL))(
         *a2,
         &v43);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v6);
LABEL_28:
    v20 = v43;
    if ( !v43 )
      goto LABEL_67;
    v43 = 0LL;
    goto LABEL_66;
  }
  v42 = 0LL;
  v8 = (**v43)(v43, &GUID_c54361b2_54cd_432b_bdbc_4b19c4b470d7, &v42);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v8);
LABEL_26:
    v19 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    goto LABEL_28;
  }
  v9 = 0LL;
  v46 = 0LL;
  v7 = 0;
  v10 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = 0LL;
  if ( !v10
    || (v12 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>(v10)) == 0 )
  {
    v7 = -2147024882;
  }
  if ( v7 >= 0 )
  {
    v9 = (volatile signed __int64 *)v12;
    v46 = v12;
    v12 = 0LL;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v7 < 0 )
  {
    v13 = (unsigned int)v7;
    v14 = 334LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)v13);
LABEL_24:
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::Release(v9);
    goto LABEL_26;
  }
  LOBYTE(v11) = 1;
  v15 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
          v9,
          0LL,
          string,
          v11);
  v7 = v15;
  if ( v15 < 0 )
  {
    v13 = (unsigned int)v15;
    v14 = 336LL;
    goto LABEL_17;
  }
  v41 = 0LL;
  v16 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::FtmBase>::QueryInterface(
          v9,
          &GUID_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e,
          &v41);
  v7 = v16;
  if ( v16 < 0 )
  {
    v17 = 339LL;
    goto LABEL_22;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v42 + 48LL))(v42, v41, &v44);
  v7 = v16;
  if ( v16 < 0 )
  {
    v17 = 345LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v16);
    v18 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v18 + 16LL))(v18);
    }
    goto LABEL_24;
  }
  v21 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::Release(v9);
  v22 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v23)[2])(v23);
  }
  v24 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *> *>(v44);
  v7 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_67;
  }
  v45 = 0LL;
  v25 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)v44 + 64LL))(
          v44,
          &v45);
  v7 = v25;
  if ( v25 >= 0 )
  {
    v42 = 0LL;
    v26 = (*v45)[6](v45, (GUID *)string, &v42);
    v7 = v26;
    if ( v26 >= 0 )
    {
      if ( v42 )
      {
        v43 = 0LL;
        v29 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD))v42)(
                v42,
                &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
                &v43);
        v7 = v29;
        if ( v29 >= 0 )
        {
          v41 = 0LL;
          v30 = v43;
          WindowsDeleteString(0LL);
          v41 = 0LL;
          v31 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), HSTRING *))(*v30)[19])(
                  v30,
                  &v41);
          v7 = v31;
          if ( v31 >= 0 )
          {
            if ( v41 && !WindowsIsStringEmpty(v41) )
            {
              v34 = v41;
              v41 = 0LL;
              *a3 = v34;
              WindowsDeleteString(0LL);
              v41 = 0LL;
              v35 = v43;
              if ( v43 )
              {
                v43 = 0LL;
                ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v35)[2])(v35);
              }
              v36 = v42;
              if ( v42 )
              {
                v42 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
              }
              v7 = 0;
              goto LABEL_64;
            }
            v7 = -2147467259;
            v32 = 2147500037LL;
            v33 = 373LL;
          }
          else
          {
            v32 = (unsigned int)v31;
            v33 = 371LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v33,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
            (const char *)v32);
          WindowsDeleteString(v41);
          v41 = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x170,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
            (const char *)(unsigned int)v29);
        }
        v37 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v37)[2])(v37);
        }
        goto LABEL_62;
      }
      v7 = -2147467259;
      v27 = 2147500037LL;
      v28 = 364LL;
    }
    else
    {
      v27 = (unsigned int)v26;
      v28 = 360LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)v27);
LABEL_62:
    v38 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    goto LABEL_64;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x164,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
    (const char *)(unsigned int)v25);
LABEL_64:
  v20 = v45;
  if ( !v45 )
    goto LABEL_67;
  v45 = 0LL;
LABEL_66:
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v20)[2])(v20);
LABEL_67:
  v39 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  return (unsigned int)v7;
}
