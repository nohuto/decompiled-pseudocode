/*
 * XREFs of ?GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@Z @ 0x18042CB68
 * Callers:
 *     ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x18042ACC8 (-AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18008BE68 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801F38CC (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@?$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@QEAAPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAU23456@AEBU23456@@Z @ 0x18028EB90 (--$_Emplace_reallocate@AEBUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$_Emplace_reallocate@U?$pair@MH@std@@@?$vector@U?$pair@MH@std@@V?$allocator@U?$pair@MH@std@@@2@@std@@QEAAPEAU?$pair@MH@1@QEAU21@$$QEAU21@@Z @ 0x18042C18C (--$_Emplace_reallocate@U-$pair@MH@std@@@-$vector@U-$pair@MH@std@@V-$allocator@U-$pair@MH@std@@@2.c)
 *     ??$_Sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0_JU?$less@X@0@@Z @ 0x18042C920 (--$_Sort_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0_JU-$less@X@0@@Z.c)
 *     ??$make_shared@VAssistantLightBlock@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VAssistantLightBlock@Lighting@TwinUI@@@0@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@@Z @ 0x18042CA60 (--$make_shared@VAssistantLightBlock@Lighting@TwinUI@@AEAV-$ComPtr@UILampArray@Lights@Devices@Win.c)
 *     ??$make_shared@VAssistantLightStrip@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV78@@std@@YA?AV?$shared_ptr@VAssistantLightStrip@Lighting@TwinUI@@@0@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@0@1@Z @ 0x18042CAAC (--$make_shared@VAssistantLightStrip@Lighting@TwinUI@@AEAV-$ComPtr@UILampArray@Lights@Devices@Win.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TwinUI::Lighting::AssistantLightFactory::GetAssistantLight(__int64 *a1, _QWORD *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rcx
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 *v11; // rsi
  unsigned int v12; // r12d
  int v13; // ecx
  unsigned __int64 *v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rdx
  _DWORD *v17; // r13
  __int64 v18; // rcx
  _BYTE *v19; // rbx
  _DWORD *v20; // r8
  _BYTE *v21; // r15
  int v22; // r12d
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rax
  std::_Ref_count_base *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-C8h] BYREF
  int v31; // [rsp+28h] [rbp-C0h] BYREF
  int v32; // [rsp+2Ch] [rbp-BCh] BYREF
  char v33; // [rsp+30h] [rbp-B8h]
  int v34; // [rsp+34h] [rbp-B4h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v36; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 *v37; // [rsp+50h] [rbp-98h]
  __int128 v38; // [rsp+58h] [rbp-90h] BYREF
  _BYTE *v39; // [rsp+68h] [rbp-80h]
  int v40; // [rsp+70h] [rbp-78h] BYREF
  int v41; // [rsp+74h] [rbp-74h] BYREF
  __int64 *v42; // [rsp+78h] [rbp-70h]
  __int128 v43; // [rsp+80h] [rbp-68h] BYREF
  _BYTE *v44; // [rsp+90h] [rbp-58h]
  _QWORD *v45; // [rsp+98h] [rbp-50h]
  __int64 v46; // [rsp+A0h] [rbp-48h] BYREF
  std::_Ref_count_base *v47; // [rsp+A8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v45 = a2;
  v42 = a1;
  v34 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)*a1 + 88LL))(*a1, &v34);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = v34;
    if ( v34 >= 7 )
    {
      v36 = 0LL;
      v11 = 0LL;
      v37 = 0LL;
      v12 = 0;
      v13 = 0;
      v14 = 0LL;
      while ( v13 < v8 )
      {
        v30 = 0LL;
        v15 = *a1;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 160LL))(v15, v12, &v30);
        if ( v5 < 0 )
        {
          v16 = 44LL;
          goto LABEL_17;
        }
        v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v30 + 56LL))(v30, &v31);
        if ( v5 < 0 )
        {
          v16 = 47LL;
          goto LABEL_17;
        }
        if ( (v31 & 8) != 0 )
        {
          v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v30 + 72LL))(v30, &v40);
          if ( v5 < 0 )
          {
            v16 = 56LL;
            goto LABEL_17;
          }
          v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v30 + 88LL))(v30, &v41);
          if ( v5 < 0 )
          {
            v16 = 57LL;
            goto LABEL_17;
          }
          v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v30 + 80LL))(v30, &v32);
          if ( v5 < 0 )
          {
            v16 = 58LL;
            goto LABEL_17;
          }
          if ( v40 >= 48 && v41 >= 48 && v32 >= 48 )
          {
            v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 64LL))(v30, &v46);
            if ( v5 < 0 )
            {
              v16 = 65LL;
LABEL_17:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v16,
                (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightfactory.cpp",
                (const char *)(unsigned int)v5);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
              if ( (_QWORD)v36 )
                std::_Deallocate<16,0>(
                  (void *)v36,
                  (const struct std::nothrow_t *)(8 * ((__int64)((__int64)v11 - v36) >> 3)));
              goto LABEL_3;
            }
            try
            {
              v35 = __PAIR64__(v12, v46);
              if ( v11 == v14 )
              {
                std::vector<std::pair<float,int>>::_Emplace_reallocate<std::pair<float,int>>(
                  (__int64 *)&v36,
                  (__int64)v14,
                  &v35);
                v11 = v37;
                v14 = (unsigned __int64 *)*((_QWORD *)&v36 + 1);
              }
              else
              {
                *v14++ = v35;
                *((_QWORD *)&v36 + 1) = v14;
              }
            }
            catch ( std::exception )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
              goto LABEL_58;
            }
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
        v13 = ++v12;
        v8 = v34;
      }
      v17 = (_DWORD *)v36;
      v35 = (__int64)((__int64)v14 - v36) >> 3;
      std::_Sort_unchecked<std::pair<float,int> *,std::less<void>>(v36, v14, v35, v33);
      v38 = 0LL;
      v39 = 0LL;
      v43 = 0LL;
      v44 = 0LL;
      v31 = 1;
      try
      {
        std::vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>::_Emplace_reallocate<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &>(
          (const void **)&v43,
          0LL,
          v17 + 1);
        v22 = 1;
        v19 = (_BYTE *)*((_QWORD *)&v38 + 1);
        v21 = (_BYTE *)*((_QWORD *)&v43 + 1);
        while ( v22 < (int)v35 )
        {
          v18 = v22;
          if ( *(float *)&v17[2 * v22 - 2] != *(float *)&v17[2 * v22] )
          {
            ++v31;
            v32 = v22 - 1;
            if ( v39 == v19 )
            {
              std::vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>::_Emplace_reallocate<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &>(
                (const void **)&v38,
                v19,
                &v32);
              v19 = (_BYTE *)*((_QWORD *)&v38 + 1);
              v18 = v22;
            }
            else
            {
              *(_DWORD *)v19 = v22 - 1;
              v19 += 4;
              *((_QWORD *)&v38 + 1) = v19;
            }
          }
          v20 = &v17[2 * v18 + 1];
          if ( v44 == v21 )
          {
            std::vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>::_Emplace_reallocate<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &>(
              (const void **)&v43,
              v21,
              v20);
            v21 = (_BYTE *)*((_QWORD *)&v43 + 1);
          }
          else
          {
            *(_DWORD *)v21 = *v20;
            v21 += 4;
            *((_QWORD *)&v43 + 1) = v21;
          }
          ++v22;
        }
        v32 = v35;
        if ( v39 == v19 )
        {
          std::vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>::_Emplace_reallocate<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId const &>(
            (const void **)&v38,
            v19,
            &v32);
        }
        else
        {
          *(_DWORD *)v19 = v35;
          *((_QWORD *)&v38 + 1) = v19 + 4;
        }
        if ( v31 >= 7 )
        {
          v24 = std::make_shared<TwinUI::Lighting::AssistantLightStrip,Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray> &,std::vector<int> &,std::vector<int> &>(
                  &v46,
                  a1,
                  (__int64)&v43,
                  (__int64)&v38);
          v25 = *v24;
          v26 = v24[1];
          *v24 = 0LL;
          v24[1] = 0LL;
          v27 = v45;
          *v45 = v25;
          v28 = (std::_Ref_count_base *)v27[1];
          v27[1] = v26;
          if ( v28 )
            std::_Ref_count_base::_Decref(v28);
        }
        else
        {
          v23 = std::make_shared<TwinUI::Lighting::AssistantLightBlock,Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray> &>(
                  &v46,
                  a1);
          std::shared_ptr<KBViewInfo>::operator=(v45, v23);
        }
        if ( v47 )
          std::_Ref_count_base::_Decref(v47);
      }
      catch ( std::exception )
      {
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v43);
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v38);
LABEL_58:
        if ( (_QWORD)v36 )
          std::_Deallocate<16,0>(
            (void *)v36,
            (const struct std::nothrow_t *)(((unsigned __int64)v37 - v36) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_60:
        v29 = *v42;
        if ( *v42 )
        {
          *v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        return 2147942414LL;
      }
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v43);
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v38);
      if ( v17 )
        std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)(8 * (((char *)v11 - (char *)v17) >> 3)));
    }
    else
    {
      try
      {
        v9 = std::make_shared<TwinUI::Lighting::AssistantLightBlock,Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray> &>(
               &v46,
               a1);
        std::shared_ptr<KBViewInfo>::operator=(a2, v9);
        if ( v47 )
          std::_Ref_count_base::_Decref(v47);
      }
      catch ( std::exception )
      {
        goto LABEL_60;
      }
    }
    v10 = *a1;
    if ( *a1 )
    {
      *a1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightfactory.cpp",
      (const char *)(unsigned int)v4);
LABEL_3:
    v6 = *a1;
    if ( *a1 )
    {
      *a1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return (unsigned int)v5;
  }
}
