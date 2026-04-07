/*
 * XREFs of ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003680C
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800367BC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180012318 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800270B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180036C90 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x180036D34 (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180036D88 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x180038198 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x1800382D4 (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?IsTsDisplay@CDWMDisplay@@QEBA_NXZ @ 0x180038694 (-IsTsDisplay@CDWMDisplay@@QEBA_NXZ.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x1800386BC (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F0C4 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x1800520C0 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18005235C (-IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x180052A90 (-UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x18007FDA8 (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x180097E34 (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 *     ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z @ 0x180099098 (-SetCommitHandle@CWindowList@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::CreateMonitorRenderTargetsLegacy(const struct CDWMDisplaySet **this)
{
  unsigned int v1; // r14d
  char v2; // si
  int v4; // eax
  unsigned int v5; // ebx
  int AllDisplaysNoRef; // eax
  CDWMDisplaySet *v7; // r12
  CDWMDisplaySet *v8; // rcx
  int v9; // eax
  char v10; // r8
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rbx
  struct IDCompositionRenderTargetPartner *v14; // rsi
  CDWMDisplay *v15; // rcx
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // r13
  int v20; // eax
  struct _LUID v22; // rdx
  CDWMDXGIEnumeration *v23; // rcx
  unsigned int v24; // eax
  const struct CDWMDisplaySet *v25; // rbx
  __int64 v26; // r14
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // rbx
  int v31; // eax
  __int64 v32; // rbx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // ebx
  int v38; // r9d
  int v39; // eax
  unsigned int v40[2]; // [rsp+20h] [rbp-89h]
  unsigned int v41; // [rsp+20h] [rbp-89h]
  int v42; // [rsp+50h] [rbp-59h]
  int v43; // [rsp+70h] [rbp-39h] BYREF
  int v44; // [rsp+74h] [rbp-35h] BYREF
  struct IDCompositionRenderTargetPartner *v45; // [rsp+78h] [rbp-31h] BYREF
  HANDLE hObject; // [rsp+80h] [rbp-29h] BYREF
  __int128 v47; // [rsp+88h] [rbp-21h] BYREF
  __int64 v48; // [rsp+98h] [rbp-11h]
  unsigned int v49; // [rsp+A0h] [rbp-9h]
  __int128 v50; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v51; // [rsp+B8h] [rbp+Fh]
  unsigned int v52; // [rsp+C0h] [rbp+17h]
  __int64 v53; // [rsp+118h] [rbp+6Fh] BYREF
  char v54; // [rsp+120h] [rbp+77h]
  CDWMDisplaySet *v55; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = 0;
  v55 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v2 = 0;
  v49 = 0;
  v44 = 0;
  v43 = 0;
  v54 = 0;
  LOBYTE(v53) = 0;
  hObject = 0LL;
  v4 = CDesktopManager::EnumerateMonitors((CDesktopManager *)this, &v55);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x49Cu);
LABEL_51:
    v7 = v55;
    goto LABEL_32;
  }
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(this[21], &v47);
  v5 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x49Eu);
    goto LABEL_51;
  }
  v7 = v55;
  if ( v55 )
  {
    v8 = this[21];
    v51 = 0LL;
    v50 = 0LL;
    v52 = 0;
    if ( CDWMDisplaySet::IsEquivalentRotated(v8, v55) )
    {
      CDWMDisplaySet::CalculateRotationAngles(v7, this[21], &v44, &v43);
      v54 = 1;
    }
    v9 = CDWMDisplaySet::GetAllDisplaysNoRef(v7, &v50);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x4AEu);
LABEL_54:
      DynArrayImpl<0>::~DynArrayImpl<0>(&v50);
      goto LABEL_32;
    }
    if ( v49 )
    {
      do
      {
        v10 = 0;
        v11 = 0LL;
        v12 = *(_QWORD *)(v47 + 8LL * v1);
        if ( !v52 )
          goto LABEL_45;
        do
        {
          if ( v10 )
            goto LABEL_21;
          v13 = *(_QWORD *)(v50 + 8 * v11);
          v14 = *(struct IDCompositionRenderTargetPartner **)(v13 + 8);
          if ( v14
            && *(_DWORD *)(v12 + 176) == *(_DWORD *)(v13 + 176)
            && *(_DWORD *)(v12 + 196) == *(_DWORD *)(v13 + 196)
            && *(_DWORD *)(v12 + 212) == *(_DWORD *)(v13 + 212)
            && *(_BYTE *)(v12 + 223) == *(_BYTE *)(v13 + 223)
            && !CDWMDisplay::IsTsDisplay((CDWMDisplay *)v12) )
          {
            CDWMDisplay::SetDcompTarget(v15, v14);
            CDWMDisplay::SetDcompTarget((CDWMDisplay *)v13, 0LL);
            if ( (unsigned int)IsHDRDisplay(*(HMONITOR *)(*(_QWORD *)(v12 + 88) + 16LL)) )
            {
              v35 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v14 + 40LL))(v14);
              v5 = v35;
              if ( v35 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x4CBu);
                goto LABEL_54;
              }
            }
            v16 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, _QWORD, __int64, __int64, _DWORD))(*(_QWORD *)v14 + 32LL))(
                    v14,
                    *(_QWORD *)(*(_QWORD *)(v12 + 88) + 16LL),
                    v12 + 56,
                    v12 + 40,
                    *(_DWORD *)(v12 + 208));
            v5 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x4D1u);
              goto LABEL_54;
            }
            v10 = 1;
          }
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < v52 );
        if ( v10 )
        {
LABEL_21:
          v2 = v53;
        }
        else
        {
LABEL_45:
          v2 = 1;
          LOBYTE(v53) = 1;
        }
        ++v1;
      }
      while ( v1 < v49 );
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(&v50);
    CDWMDisplaySet::Release(v7);
    v7 = 0LL;
  }
  v17 = 0;
  LODWORD(v55) = 0;
  if ( !v49 )
  {
LABEL_28:
    if ( !v54 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this[5] + 3) + 24LL))(*((_QWORD *)this[5] + 3));
      v5 = v20;
      if ( v20 >= 0 )
        goto LABEL_30;
      v41 = 1328;
      goto LABEL_70;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v37 = NtDCompositionCreateSynchronizationObject(&hObject);
    if ( v37 < 0 )
    {
      v41 = 1316;
LABEL_68:
      v5 = v37 | 0x10000000;
      v38 = v5;
LABEL_71:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, v41);
      goto LABEL_32;
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD, HANDLE))(**((_QWORD **)this[5] + 3) + 536LL))(
            *((_QWORD *)this[5] + 3),
            hObject);
    v5 = v20;
    if ( v20 < 0 )
    {
      v41 = 1319;
    }
    else
    {
      v20 = CWindowList::SetCommitHandle(this[61], hObject);
      v5 = v20;
      if ( v20 >= 0 )
      {
        v20 = CWindowList::HandleScreenRotation(this[61], v44, v43);
        v5 = v20;
        if ( v20 >= 0 )
        {
          v39 = NtDCompositionCommitSynchronizationObject(hObject);
          if ( v39 >= 0 )
          {
LABEL_30:
            if ( v2 )
              CDesktopManager::UpdateMaxTextureSize((CDesktopManager *)this);
            goto LABEL_32;
          }
          v37 = v39;
          v41 = 1324;
          goto LABEL_68;
        }
        v41 = 1321;
      }
      else
      {
        v41 = 1320;
      }
    }
LABEL_70:
    v38 = v20;
    goto LABEL_71;
  }
  v18 = v47;
  while ( 1 )
  {
    v19 = *(_QWORD *)(v18 + 8LL * v17);
    if ( *(_QWORD *)(v19 + 8) )
      goto LABEL_27;
    v22 = *(struct _LUID *)(v19 + 168);
    v23 = this[20];
    v45 = 0LL;
    if ( CDWMDXGIEnumeration::IsWarpAdapterLuid(v23, v22)
      || (v24 = *((_DWORD *)this + 44) - 2, LODWORD(v53) = 3, v24 <= 1) )
    {
      LODWORD(v53) = 2;
    }
    v25 = this[5];
    if ( !CDWMDisplay::IsTsDisplay((CDWMDisplay *)v19) )
    {
      v26 = *((_QWORD *)v25 + 3);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v45);
      LOBYTE(v42) = *(_BYTE *)(v19 + 223);
      v40[0] = *(_DWORD *)(v19 + 196);
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int *, _DWORD, __int64, __int64, _DWORD, _DWORD, int, struct IDCompositionRenderTargetPartner **))(*(_QWORD *)v26 + 520LL))(
              v26,
              *(_QWORD *)(*(_QWORD *)(v19 + 88) + 16LL),
              *(_QWORD *)(v19 + 168),
              *(unsigned int *)(v19 + 176),
              *(unsigned int **)v40,
              *(_DWORD *)(v19 + 212),
              v19 + 56,
              v19 + 40,
              *(_DWORD *)(v19 + 208),
              v53,
              v42,
              &v45);
      v28 = FailFastIfAccessDenied(v27);
      v5 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x504u);
        goto LABEL_64;
      }
      v17 = (unsigned int)v55;
      goto LABEL_42;
    }
    v53 = 0LL;
    v30 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v25 + 3);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v53);
    v31 = (**v30)(v30, &GUID_6083f66a_8533_4f7e_a37e_6c222134280b, &v53);
    v5 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x50Au);
      goto LABEL_63;
    }
    v32 = v53;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v45);
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, struct IDCompositionRenderTargetPartner **))(*(_QWORD *)v32 + 112LL))(
            v32,
            *(_QWORD *)(*(_QWORD *)(v19 + 88) + 16LL),
            *(_QWORD *)(v19 + 168),
            v19 + 56,
            &v45);
    v34 = FailFastIfAccessDenied(v33);
    v5 = v34;
    if ( v34 < 0 )
      break;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v53);
LABEL_42:
    v29 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, const struct CDWMDisplaySet *))(*(_QWORD *)v45 + 24LL))(
            v45,
            this[9]);
    v5 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x512u);
      goto LABEL_64;
    }
    if ( (unsigned int)IsHDRDisplay(*(HMONITOR *)(*(_QWORD *)(v19 + 88) + 16LL)) )
    {
      v36 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v45 + 40LL))(v45);
      v5 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x516u);
        goto LABEL_64;
      }
    }
    CDWMDisplay::SetDcompTarget((CDWMDisplay *)v19, v45);
    v2 = 1;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v45);
    v18 = v47;
LABEL_27:
    LODWORD(v55) = ++v17;
    if ( v17 >= v49 )
      goto LABEL_28;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x50Fu);
LABEL_63:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v53);
LABEL_64:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v45);
LABEL_32:
  if ( v7 )
    CDWMDisplaySet::Release(v7);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v47);
  return v5;
}
