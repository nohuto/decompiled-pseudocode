/*
 * XREFs of ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180221994
 * Callers:
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180221610 (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIJsonObject@Json@Data@1@@Z @ 0x18021CF04 (--$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPE.c)
 *     ??$ActivateInstance@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18021CF9C (--$ActivateInstance@V-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows.c)
 *     ??$As@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18021D044 (--$As@U-$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@-$ComPtr@UI.c)
 *     ??$As@UIJsonValue@Json@Data@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIJsonValue@Json@Data@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18021D094 (--$As@UIJsonValue@Json@Data@Windows@@@-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QE.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UKBViewInfo@@@0@0AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x18021D8F8 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x18021F9B8 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::SaveDataToJson(
        RTL_SRWLOCK *this,
        struct Windows::Data::Json::IJsonObject **a2)
{
  struct Windows::Data::Json::IJsonObject **v2; // rdi
  int SortedAppList; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int ActivationFactory; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // r13d
  __int64 v11; // r15
  const WCHAR **v12; // r14
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, PVOID, __int64 *); // rdi
  unsigned int v17; // r8d
  const WCHAR *v18; // rcx
  HSTRING_HEADER *v19; // rax
  int v20; // eax
  unsigned int v21; // r8d
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v23)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v24; // rdi
  HSTRING_HEADER *v25; // rax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, __int64, __int64 *); // rdi
  __int64 v28; // rdx
  unsigned int v29; // r8d
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v31)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v32; // rdi
  HSTRING_HEADER *v33; // rax
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, __int64, __int64 *); // rdi
  __int64 v36; // rdx
  unsigned int v37; // r8d
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v39)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v40; // rdi
  HSTRING_HEADER *v41; // rax
  __int64 v42; // rbx
  __int64 (__fastcall *v43)(__int64, __int64, __int64 *); // rdi
  __int64 v44; // rdx
  unsigned int v45; // r8d
  __int64 (__fastcall ***v46)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v47)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v48; // rdi
  HSTRING_HEADER *v49; // rax
  __int64 v50; // rbx
  __int64 (__fastcall *v51)(__int64, __int64, __int64 *); // rdi
  __int64 v52; // rdx
  unsigned int v53; // r8d
  __int64 (__fastcall ***v54)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v55)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v56; // rdi
  HSTRING_HEADER *v57; // rax
  int v58; // eax
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rdx
  unsigned int v63; // r8d
  struct Windows::Data::Json::IJsonObject *v64; // rsi
  __int64 (__fastcall *v65)(struct Windows::Data::Json::IJsonObject *, PVOID, __int64); // rdi
  __int64 v66; // rbx
  HSTRING_HEADER *v67; // rax
  __int64 v69; // [rsp+20h] [rbp-59h] BYREF
  __int64 (__fastcall ***v70)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-51h] BYREF
  __int64 v71; // [rsp+30h] [rbp-49h] BYREF
  int v72; // [rsp+38h] [rbp-41h]
  __int64 v73; // [rsp+40h] [rbp-39h] BYREF
  __int64 (__fastcall ***v74)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-31h] BYREF
  __int64 v75; // [rsp+50h] [rbp-29h] BYREF
  __int64 v76; // [rsp+58h] [rbp-21h] BYREF
  __int128 v77; // [rsp+60h] [rbp-19h] BYREF
  __int64 v78; // [rsp+70h] [rbp-9h]
  struct Windows::Data::Json::IJsonObject **v79; // [rsp+78h] [rbp-1h]
  const WCHAR *v80; // [rsp+80h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v82; // [rsp+A0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = a2;
  v79 = a2;
  *a2 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, (__int64)&v77);
  v4 = SortedAppList;
  if ( SortedAppList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x318,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
    goto LABEL_60;
  }
  v71 = 0LL;
  v82 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Data.Json.JsonValue",
    0x1Cu,
    0x1Bu);
  v5 = v82;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v71);
  ActivationFactory = RoGetActivationFactory(v5, &GUID_5f6b544a_2f53_48e1_91a3_f78b50a6345c, &v71);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31B,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_59;
  }
  v74 = 0LL;
  v82 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Data.Json.JsonArray",
    0x1Cu,
    0x1Bu);
  v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>>(
         v82,
         (__int64 *)&v74);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31E,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_58;
  }
  v76 = 0LL;
  v8 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Foundation::Collections::IVector<Windows::Data::Json::IJsonValue *>>(
         &v74,
         &v76);
  v4 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x321,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_57;
  }
  v9 = 0;
  v72 = 0;
  v10 = 0;
  v11 = (__int64)(*((_QWORD *)&v77 + 1) - v77) >> 4;
  if ( (int)v11 <= 0 )
  {
LABEL_31:
    v75 = 0LL;
    v59 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Data::Json::IJsonValue>(&v74, &v75);
    v4 = v59;
    if ( v59 >= 0 )
    {
      v82 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Data.Json.JsonObject",
        0x1Du,
        0x1Cu);
      v59 = Windows::Foundation::ActivateInstance<Windows::Data::Json::IJsonObject>(v82, v2);
      v4 = v59;
      if ( v59 >= 0 )
      {
        v64 = *v2;
        v65 = *(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, PVOID, __int64))(*(_QWORD *)*v2 + 56LL);
        v66 = v75;
        v67 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &hstringHeader,
                (const WCHAR **)off_1804CF3F0,
                v63);
        v59 = v65(v64, v67[1].Reserved.Reserved1, v66);
        v4 = v59;
        if ( v59 >= 0 )
        {
          v4 = 0;
          goto LABEL_56;
        }
        v60 = 842LL;
      }
      else
      {
        v60 = 841LL;
      }
    }
    else
    {
      v60 = 839LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v60,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v59);
LABEL_56:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v75);
    goto LABEL_57;
  }
  v12 = (const WCHAR **)v77;
  while ( 1 )
  {
    if ( v9 >= 30 )
    {
LABEL_30:
      v2 = v79;
      goto LABEL_31;
    }
    if ( *((int *)*v12 + 8) < 3 )
      goto LABEL_29;
    v70 = 0LL;
    v82 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Data.Json.JsonObject",
      0x1Du,
      0x1Cu);
    v13 = v82;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
    v14 = Windows::Foundation::ActivateInstance<Windows::Data::Json::IJsonObject>(v13, &v70);
    v4 = v14;
    if ( v14 < 0 )
      break;
    v69 = 0LL;
    v15 = v71;
    v16 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v71 + 80LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v69);
    v18 = *v12;
    if ( *((_QWORD *)*v12 + 3) >= 8uLL )
      v18 = *(const WCHAR **)v18;
    v80 = v18;
    v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v80, v17);
    v20 = v16(v15, v19[1].Reserved.Reserved1, &v69);
    v4 = v20;
    if ( v20 < 0 )
    {
      v62 = 816LL;
      goto LABEL_46;
    }
    v22 = v70;
    v23 = (*v70)[7];
    v24 = v69;
    v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1804CF400,
            v21);
    v20 = v23(v22, (GUID *)v25[1].Reserved.Reserved1, (__int64 *)v24);
    v4 = v20;
    if ( v20 < 0 )
    {
      v62 = 817LL;
      goto LABEL_46;
    }
    v26 = v71;
    v27 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v71 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v69);
    v20 = v27(v26, v28, &v69);
    v4 = v20;
    if ( v20 < 0 )
    {
      v62 = 819LL;
      goto LABEL_46;
    }
    v30 = v70;
    v31 = (*v70)[7];
    v32 = v69;
    v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1804CF3F8,
            v29);
    v20 = v31(v30, (GUID *)v33[1].Reserved.Reserved1, (__int64 *)v32);
    v4 = v20;
    if ( v20 < 0 )
    {
      v62 = 820LL;
      goto LABEL_46;
    }
    v34 = v71;
    v35 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v71 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v69);
    v20 = v35(v34, v36, &v69);
    v4 = v20;
    if ( v20 < 0 )
    {
      v62 = 822LL;
      goto LABEL_46;
    }
    v38 = v70;
    v39 = (*v70)[7];
    v40 = v69;
    v41 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1804CF3C8,
            v37);
    v20 = v39(v38, (GUID *)v41[1].Reserved.Reserved1, (__int64 *)v40);
    v4 = v20;
    if ( v20 < 0 )
    {
      v62 = 823LL;
      goto LABEL_46;
    }
    v42 = v71;
    v43 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v71 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v69);
    v20 = v43(v42, v44, &v69);
    v4 = v20;
    if ( v20 < 0 )
    {
      v62 = 825LL;
      goto LABEL_46;
    }
    v46 = v70;
    v47 = (*v70)[7];
    v48 = v69;
    v49 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1804CF3C0,
            v45);
    v20 = v47(v46, (GUID *)v49[1].Reserved.Reserved1, (__int64 *)v48);
    v4 = v20;
    if ( v20 < 0 )
    {
      v62 = 826LL;
      goto LABEL_46;
    }
    v50 = v71;
    v51 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v71 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v69);
    LOBYTE(v52) = *((_BYTE *)*v12 + 44);
    v20 = v51(v50, v52, &v69);
    v4 = v20;
    if ( v20 < 0 )
    {
      v62 = 828LL;
LABEL_46:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v62,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v20);
      goto LABEL_47;
    }
    v54 = v70;
    v55 = (*v70)[7];
    v56 = v69;
    v57 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_1804CF3D0,
            v53);
    v20 = v55(v54, (GUID *)v57[1].Reserved.Reserved1, (__int64 *)v56);
    v4 = v20;
    if ( v20 < 0 )
    {
      v62 = 829LL;
      goto LABEL_46;
    }
    v73 = 0LL;
    v58 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Data::Json::IJsonValue>(&v70, &v73);
    v4 = v58;
    if ( v58 < 0 )
    {
      v61 = 832LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v61,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v58);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v73);
LABEL_47:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v69);
      goto LABEL_49;
    }
    v58 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v76 + 104LL))(v76, v73);
    v4 = v58;
    if ( v58 < 0 )
    {
      v61 = 833LL;
      goto LABEL_35;
    }
    v9 = ++v72;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v73);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v69);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
LABEL_29:
    ++v10;
    v12 += 2;
    if ( v10 >= (int)v11 )
      goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32D,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)(unsigned int)v14);
LABEL_49:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
LABEL_57:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v76);
LABEL_58:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v74);
LABEL_59:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v71);
LABEL_60:
  if ( (_QWORD)v77 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>(v77, *((__int64 *)&v77 + 1));
    std::_Deallocate<16,0>((void *)v77, (const struct std::nothrow_t *)((v78 - v77) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  return v4;
}
