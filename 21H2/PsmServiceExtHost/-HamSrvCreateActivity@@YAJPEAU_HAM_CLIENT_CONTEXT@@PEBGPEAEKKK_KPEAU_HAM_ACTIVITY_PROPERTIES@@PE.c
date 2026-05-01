/*
 * XREFs of ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x18000F9B0
 * Callers:
 *     HamRpcSrvCreateActivity @ 0x18000F300 (HamRpcSrvCreateActivity.c)
 * Callees:
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180002D40 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x18000F360 (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000F3A4 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x18000F8A0 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     CempHostInfoValidate @ 0x18000F900 (CempHostInfoValidate.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     StringCopyWorkerW @ 0x1800113D0 (StringCopyWorkerW.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800119D0 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempLockTrackerMarkReleased @ 0x18001E700 (CempLockTrackerMarkReleased.c)
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800229CC (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_ACT.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022C80 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x1800282BC (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@P.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180078D4C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall HamSrvCreateActivity(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        void *a9,
        unsigned __int64 *a10)
{
  DWORD v12; // ebx
  bool v13; // cf
  struct _RM_HAM_ACTIVITY_HOST *v14; // r15
  __int64 v15; // r13
  __int64 v16; // r9
  unsigned __int64 v17; // r12
  int v18; // eax
  int v19; // ebx
  size_t *v20; // r8
  unsigned int v21; // esi
  int v22; // eax
  struct _HOST_ACTIVITY_MANAGER *v23; // r12
  struct _HOST_ACTIVITY_MANAGER *v24; // rcx
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v26; // rsi
  DWORD v27; // edi
  __int64 v28; // r15
  _QWORD *Value; // rbx
  char v30; // bl
  __int64 v31; // rdx
  __int64 v32; // rcx
  bool v33; // sf
  struct _HAM_ACTIVITY *v34; // rcx
  __int64 v35; // rdx
  bool v36; // zf
  DWORD v37; // edi
  int v39; // eax
  struct _HAM_CLIENT_CONTEXT *v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  size_t cchToCopy; // [rsp+20h] [rbp-E0h]
  struct _RM_HAM_ACTIVITY_HOST *v45; // [rsp+68h] [rbp-98h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v46; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_ACTIVITY *v47; // [rsp+78h] [rbp-88h] BYREF
  struct _HAM_CLIENT_CONTEXT *v48; // [rsp+80h] [rbp-80h]
  HANDLE Process; // [rsp+88h] [rbp-78h]
  unsigned __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  union _RM_SID *v51; // [rsp+98h] [rbp-68h]
  STRSAFE_PCNZWCH pszSrc; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v54; // [rsp+B0h] [rbp-50h]
  wchar_t pszDest[232]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE DestinationSid[68]; // [rsp+290h] [rbp+190h] BYREF
  unsigned int v57; // [rsp+2D4h] [rbp+1D4h]
  unsigned int v58; // [rsp+2D8h] [rbp+1D8h]
  unsigned __int64 v59; // [rsp+2E0h] [rbp+1E0h]
  _BYTE TlsValue[144]; // [rsp+2F0h] [rbp+1F0h] BYREF

  Process = a9;
  pszSrc = a2;
  v48 = a1;
  v54 = a10;
  memset_0(TlsValue, 0, 0x88uLL);
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, TlsValue);
  }
  HampSrvTraceActivityCreateStart();
  v13 = *(_DWORD *)a8 < 0x2000000u;
  v14 = 0LL;
  v47 = 0LL;
  v46 = 0LL;
  v15 = -1LL;
  v45 = 0LL;
  v51 = 0LL;
  if ( !v13
    || wcsnlen((const wchar_t *)a8 + 6, 0x40uLL) == 64
    || wcsnlen((const wchar_t *)a8 + 70, 0x40uLL) == 64
    || *((int *)a8 + 67) > 5 )
  {
    *((_WORD *)a8 + 69) = 0;
    *((_WORD *)a8 + 133) = 0;
    v19 = -1073741578;
LABEL_33:
    v17 = a7;
    v21 = a6;
    goto LABEL_34;
  }
  v17 = a7;
  v18 = CempHostInfoValidate((__int64)pszSrc, a3, a4, v16, a6, a7);
  v19 = v18;
  if ( v18 < 0 )
  {
    v21 = a6;
    if ( (unsigned int)(v18 + 1073741585) <= 5 )
      v19 = v18 + 1;
  }
  else
  {
    memset_0(pszDest, 0, 0x228uLL);
    StringCopyWorkerW(pszDest, 0xE8uLL, v20, pszSrc, cchToCopy);
    RtlCopySid(0x44u, DestinationSid, a3);
    v21 = a6;
    v19 = 0;
    v57 = a5;
    v58 = a6;
    v59 = a7;
  }
  if ( v19 >= 0 )
  {
    v51 = (union _RM_SID *)DestinationSid;
    if ( !(unsigned int)HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)pszDest, a8) )
    {
      v19 = -1073741578;
      goto LABEL_34;
    }
    v22 = *(_DWORD *)a8;
    if ( (*(_DWORD *)a8 & 0x80000) != 0 && !Process )
    {
      v19 = -1073741776;
      goto LABEL_34;
    }
    v23 = *(struct _HOST_ACTIVITY_MANAGER **)v48;
    v24 = *(struct _HOST_ACTIVITY_MANAGER **)v48;
    if ( (v22 & 0x200000) != 0 )
    {
      Host = RmHamFindHost(v24, v59, &v46);
      v26 = 0LL;
      if ( Host >= 0 )
        v26 = v46;
    }
    else
    {
      Host = HampHostFindOrCreate(v24, (struct _RM_PSM_HOST_INFO *)pszDest, (v22 & 0x400000) != 0, &v46);
      v26 = v46;
    }
    v19 = Host;
    if ( Host < 0 )
      goto LABEL_28;
    v27 = HampLockTrackerId;
    v28 = *(_QWORD *)(*((_QWORD *)v26 + 97) + 88LL);
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v27) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *Value |= 0x40uLL;
      ++Value[7];
    }
    RtlAcquireSRWLockShared(v28 + 304);
    v30 = *(_BYTE *)(v28 + 340);
    CempLockTrackerMarkReleased(v32, v31, 6LL);
    RtlReleaseSRWLockShared(v28 + 304);
    if ( (v30 & 1) != 0
      && (unsigned int)dword_1800B3218 > 4
      && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 0x400000000008LL) )
    {
      v53 = *((_QWORD *)v26 - 4);
      v50 = (unsigned __int64)v26 + 24;
      v46 = (struct _RM_HAM_ACTIVITY_HOST *)0x1000000;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v43,
        &unk_18009F773);
    }
    if ( !Process )
    {
      v14 = v45;
      v19 = HampActCreate(v48, v23, v26, a8, 0, &v47);
      v33 = v19 < 0;
LABEL_24:
      v34 = v47;
      if ( !v33 )
      {
        v19 = 0;
        v15 = *((_QWORD *)v47 + 5);
        *v54 = v15;
      }
      if ( v34 )
        CemRcObjectDereference(v34);
      goto LABEL_28;
    }
    v39 = HampHostFindByProcessHandle(v23, Process, &v45, &v50);
    v19 = v39;
    if ( v39 == -1073741275 )
    {
      v19 = -1058275323;
    }
    else if ( v39 >= 0 )
    {
      v14 = v45;
      v40 = v48;
      if ( v26 == v45 )
      {
        *((_DWORD *)a8 + 92) &= ~0x20u;
        *((_QWORD *)a8 + 41) = 0LL;
        *((_QWORD *)a8 + 42) = 0LL;
        *((_QWORD *)a8 + 43) = 0LL;
        *((_QWORD *)a8 + 44) = 0LL;
        *((_QWORD *)a8 + 40) |= 0xFuLL;
        v41 = HampActCreate(v40, v23, v26, a8, 0, &v47);
      }
      else
      {
        v41 = HampDepGroupAddDonationDependency((struct _HOST_ACTIVITY_MANAGER **)v48, v45, v50, v26, a8, &v47);
      }
      v19 = v41;
      v33 = v41 < 0;
      goto LABEL_24;
    }
    v14 = v45;
LABEL_28:
    if ( v26 )
    {
      RmpAcquireGlobalLock();
      v36 = (*((_QWORD *)v26 + 74))-- == 1LL;
      if ( v36 )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v26 - 64), v35);
      RmpReleaseGlobalLock();
    }
    if ( v14 )
    {
      RmpAcquireGlobalLock();
      v36 = (*((_QWORD *)v14 + 74))-- == 1LL;
      if ( v36 )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v14 - 64), v42);
      RmpReleaseGlobalLock();
    }
    goto LABEL_33;
  }
LABEL_34:
  v37 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v37, 0LL);
  }
  if ( Process )
    GetProcessId(Process);
  HampSrvTraceActivityCreateStop((unsigned int)v19, v15, v48, pszSrc, v21, v51, v17, a8);
  return (unsigned int)v19;
}
