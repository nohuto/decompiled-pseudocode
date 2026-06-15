/*
 * XREFs of ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18000C1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z @ 0x18000C5C0 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180057430 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180066B10 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     ?ReleaseAudioResourceHandle@@YAX_K@Z @ 0x1800ECF7C (-ReleaseAudioResourceHandle@@YAX_K@Z.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800F25D0 (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?AddHead@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x1800F2860 (-AddHead@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x1800F346C (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 *     WPP_SF_dI @ 0x1800F56FC (WPP_SF_dI.c)
 *     ??8StreamResourceConsumer@@QEAA_NAEBV0@@Z @ 0x180138CF4 (--8StreamResourceConsumer@@QEAA_NAEBV0@@Z.c)
 *     ?GetResourceInfoArrayFromResourceList@CConstraintModel@@AEAAJPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@W4RmResourceType@@KPEAKPEAPEAU_ResourceInfo@@@Z @ 0x1801397F0 (-GetResourceInfoArrayFromResourceList@CConstraintModel@@AEAAJPEAV-$CAtlList@U_ResourceInfo@@VRes.c)
 */

__int64 __fastcall CConstraintModelResourceManager::AcquireSaDeviceResource(
        __int64 a1,
        struct _RTL_CRITICAL_SECTION *a2,
        int a3,
        __int128 *a4,
        int a5,
        unsigned int a6,
        unsigned __int64 *a7)
{
  unsigned __int64 v8; // rdi
  unsigned int v9; // esi
  BOOL v10; // ebx
  struct _ResourceInfo *v11; // r13
  HRESULT EndpointInformationFromId; // edi
  __int64 v13; // r8
  unsigned int v14; // r9d
  CConstraintModel *v15; // rcx
  __int64 v16; // rsi
  int *v17; // rcx
  __int64 v18; // rdx
  __int16 v19; // ax
  char *v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // ebx
  unsigned __int64 v23; // r12
  __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  DWORD LastError; // ebx
  __int64 i; // rsi
  int v29; // eax
  HRESULT ResourceInfoArrayFromResourceList; // eax
  const unsigned __int16 *v31; // rbx
  __int128 v32; // xmm0
  DWORD v33; // ebx
  HANDLE ProcessHeap; // rax
  unsigned int v35; // [rsp+28h] [rbp-D8h]
  unsigned int v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+4Ch] [rbp-B4h]
  unsigned int v39[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  struct _ResourceInfo *v43; // [rsp+70h] [rbp-90h] BYREF
  __int128 *v44; // [rsp+78h] [rbp-88h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-80h] BYREF
  char v46; // [rsp+88h] [rbp-78h]
  PROPVARIANT pvar[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-60h]
  void **v49; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v50; // [rsp+B8h] [rbp-48h]
  int v51; // [rsp+C0h] [rbp-40h] BYREF
  char v52; // [rsp+252h] [rbp+152h] BYREF
  unsigned int v53; // [rsp+45Ch] [rbp+35Ch]
  __int128 v54; // [rsp+460h] [rbp+360h]
  int v55; // [rsp+470h] [rbp+370h]
  unsigned __int64 v56; // [rsp+480h] [rbp+380h] BYREF
  int v57; // [rsp+488h] [rbp+388h]
  unsigned __int16 v58[128]; // [rsp+48Ch] [rbp+38Ch] BYREF
  __int128 v59; // [rsp+58Ch] [rbp+48Ch]
  int v60; // [rsp+59Ch] [rbp+49Ch]
  int v61; // [rsp+5A0h] [rbp+4A0h]
  unsigned __int16 v62[201]; // [rsp+5A8h] [rbp+4A8h] BYREF
  unsigned __int16 v63[261]; // [rsp+73Ah] [rbp+63Ah] BYREF
  unsigned int v64[3]; // [rsp+944h] [rbp+844h] BYREF
  unsigned __int16 v65[208]; // [rsp+950h] [rbp+850h] BYREF
  unsigned __int16 v66[264]; // [rsp+AF0h] [rbp+9F0h] BYREF

  v44 = a4;
  v38 = a3;
  lpCriticalSection = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  memset_0(&v56, 0, 0x4D0uLL);
  v8 = *a7;
  if ( *a7 )
  {
    LastError = GetLastError();
    ReleaseAudioResourceHandle(v8);
    SetLastError(LastError);
  }
  *a7 = 0LL;
  v42 = 0LL;
  v9 = 0;
  v37 = 0;
  v10 = 1;
  v43 = 0LL;
  v11 = 0LL;
  ppv = 0LL;
  EndpointInformationFromId = 0;
  v40 = 0LL;
  *(_QWORD *)v39 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v48 = 0LL;
  if ( (unsigned int)GetClassFromEndpointId(a2) )
  {
    v10 = 0;
  }
  else
  {
    EndpointInformationFromId = CoCreateInstance(
                                  &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                                  0LL,
                                  0x17u,
                                  &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                                  &ppv);
    if ( EndpointInformationFromId >= 0 )
    {
      EndpointInformationFromId = (*(__int64 (__fastcall **)(LPVOID, struct _RTL_CRITICAL_SECTION *, __int64 *))(*(_QWORD *)ppv + 40LL))(
                                    ppv,
                                    a2,
                                    &v40);
      if ( EndpointInformationFromId >= 0 )
      {
        EndpointInformationFromId = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v40 + 32LL))(
                                      v40,
                                      0LL,
                                      v39);
        if ( EndpointInformationFromId >= 0
          && (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)v39 + 40LL))(
               *(_QWORD *)v39,
               &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
               pvar) >= 0 )
        {
          v10 = LOWORD(pvar[0]) != 72;
        }
      }
    }
    PropVariantClear(pvar);
  }
  if ( *(_QWORD *)v39 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v39 + 16LL))(*(_QWORD *)v39);
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  v15 = (CConstraintModel *)ppv;
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( EndpointInformationFromId < 0 )
    goto LABEL_67;
  if ( v10 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    EndpointInformationFromId = CConstraintModel::GetEndpointInformationFromId(
                                  v15,
                                  (const unsigned __int16 *)a2,
                                  v65,
                                  v14,
                                  v66,
                                  v35,
                                  v39);
    if ( EndpointInformationFromId < 0 )
      goto LABEL_32;
    v50 = 1;
    v49 = &StreamResourceConsumer::`vftable';
    v17 = &v51;
    v53 = v39[0];
    v18 = 201LL;
    v55 = a5;
    v54 = *v44;
    while ( v18 != -2147483445 )
    {
      v19 = *((_WORD *)v17 + 1096);
      if ( !v19 )
        break;
      *(_WORD *)v17 = v19;
      v17 = (int *)((char *)v17 + 2);
      if ( !--v18 )
      {
        v17 = (int *)((char *)v17 - 2);
        break;
      }
    }
    *(_WORD *)v17 = 0;
    v20 = &v52;
    v21 = 261LL;
    while ( 1 )
    {
      v15 = (CConstraintModel *)(v21 + 2147483385);
      if ( v21 == -2147483385 )
        break;
      v15 = (CConstraintModel *)*((unsigned __int16 *)v20 + 1103);
      if ( !(_WORD)v15 )
        break;
      *(_WORD *)v20 = (_WORD)v15;
      v20 += 2;
      if ( !--v21 )
      {
        v20 -= 2;
        break;
      }
    }
    *(_WORD *)v20 = 0;
    EndpointInformationFromId = 0;
    v14 = v50;
    v22 = v50;
    if ( v50 == 1 )
      v22 = (v53 << 16) | (4 * v55) | 1;
    v13 = *(_QWORD *)(v16 + 128);
    if ( v13 )
    {
      for ( i = *(_QWORD *)(v13 + 8LL * (v22 % *(_DWORD *)(v16 + 144))); i; i = *(_QWORD *)(i + 16) )
      {
        if ( *(_DWORD *)(i + 24) == v22 )
        {
          v15 = *(CConstraintModel **)i;
          v29 = *(_DWORD *)(*(_QWORD *)i + 8LL);
          if ( v29 == 1 )
          {
            if ( v14 == 1 )
            {
              if ( (unsigned __int8)StreamResourceConsumer::operator==(v15, &v49) )
                goto LABEL_54;
              v14 = v50;
            }
          }
          else if ( v29 )
          {
            if ( v29 == v14 )
              goto LABEL_54;
          }
          else if ( !v14 && *((_DWORD *)v15 + 4) == v51 )
          {
LABEL_54:
            ResourceInfoArrayFromResourceList = CConstraintModel::GetResourceInfoArrayFromResourceList(
                                                  (_DWORD)v15,
                                                  *(_QWORD *)(i + 8),
                                                  v13,
                                                  v14,
                                                  (__int64)&v37,
                                                  (__int64)&v43);
            v11 = v43;
            EndpointInformationFromId = ResourceInfoArrayFromResourceList;
            break;
          }
        }
      }
    }
LABEL_32:
    v9 = v37;
  }
  if ( EndpointInformationFromId < 0 )
    goto LABEL_67;
  if ( v9 )
  {
    v31 = (const unsigned __int16 *)lpCriticalSection;
    EndpointInformationFromId = CConstraintModel::GetEndpointInformationFromId(
                                  v15,
                                  (const unsigned __int16 *)lpCriticalSection,
                                  v62,
                                  v14,
                                  v63,
                                  v35,
                                  v64);
    if ( EndpointInformationFromId < 0 )
      goto LABEL_67;
    EndpointInformationFromId = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
                                  a1,
                                  v62,
                                  v63,
                                  v64[0],
                                  a6,
                                  v38,
                                  0);
    if ( EndpointInformationFromId < 0 )
      goto LABEL_67;
    EndpointInformationFromId = CConstraintModelResourceManager::AcquireResourceHandle(
                                  (CConstraintModelResourceManager *)a1,
                                  v11,
                                  v9,
                                  a6,
                                  0,
                                  &v42);
    if ( EndpointInformationFromId < 0 )
      goto LABEL_67;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      &lpCriticalSection,
      a1 + 120);
    v61 = a5;
    v23 = v42;
    v56 = v42;
    v32 = *v44;
    v60 = v38;
    v59 = v32;
    v57 = 0;
    v64[1] = a6;
    EndpointInformationFromId = StringCchCopyW(v58, 0x80uLL, v31);
    v24 = a1;
    if ( EndpointInformationFromId >= 0 )
      ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::AddHead(a1 + 160, &v56);
    if ( v46 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else
  {
    v23 = v42;
    v24 = a1;
  }
  if ( EndpointInformationFromId >= 0 )
  {
    v25 = *a7;
    if ( *a7 )
    {
      v33 = GetLastError();
      ReleaseAudioResourceHandle(v25);
      SetLastError(v33);
      v24 = a1;
    }
    *a7 = v23;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dI(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, v13, a6, v23);
    }
    goto LABEL_41;
  }
LABEL_67:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      21LL,
      &WPP_4eb83dabec2331805ae9d1ae37e3a182_Traceguids,
      (unsigned int)EndpointInformationFromId);
  }
  v24 = a1;
LABEL_41:
  if ( v11 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v11);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(v24 + 24));
  return (unsigned int)EndpointInformationFromId;
}
