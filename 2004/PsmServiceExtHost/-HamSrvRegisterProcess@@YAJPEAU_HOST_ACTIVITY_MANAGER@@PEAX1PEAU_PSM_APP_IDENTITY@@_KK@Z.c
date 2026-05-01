/*
 * XREFs of ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000DB8C
 * Callers:
 *     PsmHamRegisterProcess @ 0x180036A70 (PsmHamRegisterProcess.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002288C (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_ACT.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x180026A5C (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByRef@$0BA@@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByRef@$0BA@@@55@Z @ 0x18002DEA0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSid.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x1800359C8 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 *     ?HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z @ 0x180035E6C (-HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvRegisterProcess(
        struct _HOST_ACTIVITY_MANAGER *a1,
        void *a2,
        void *a3,
        wchar_t *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v9; // r14
  unsigned int v10; // ebx
  ULONG v11; // eax
  int v12; // edi
  int v13; // eax
  struct _RM_HAM_ACTIVITY_HOST *v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  DWORD v18; // ebx
  unsigned int v19; // ebx
  DWORD ProcessId; // eax
  unsigned __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v23; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v24; // [rsp+80h] [rbp-80h]
  void *v25; // [rsp+88h] [rbp-78h]
  __int64 v26; // [rsp+90h] [rbp-70h]
  unsigned __int64 v27; // [rsp+98h] [rbp-68h]
  struct _GUID *v28; // [rsp+A0h] [rbp-60h]
  char *v29; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v30; // [rsp+B0h] [rbp-50h]
  char *v31; // [rsp+B8h] [rbp-48h]
  struct _GUID v32; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v33[144]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[280]; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+390h] [rbp+290h] BYREF

  v25 = a3;
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_18009FE4E, 0, 0, 2u, &v35);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v33);
  v23 = 0LL;
  v9 = -1LL;
  v22 = -1LL;
  HampSystemQueryProcessAppSessionGuid(a2, &v32);
  if ( (a6 & 4) != 0 )
    v10 = 8;
  else
    v10 = (a6 & 8) != 0 ? 4 : 2;
  v11 = RtlLengthSid(a4 + 236);
  v12 = HampUtilValidateAndCapturePsmInformation(pszDest, a4 + 4, a4 + 236, v11, *(_DWORD *)a4, v10, a5);
  if ( v12 >= 0 )
  {
    v13 = HampHostFindOrCreate(a1, (struct _RM_PSM_HOST_INFO *)pszDest, 0, &v23);
    v14 = v23;
    v12 = v13;
    if ( v13 >= 0 )
    {
      v15 = HampHostRegisterProcess(v23, a2, v25, (struct _PSM_APP_IDENTITY *)a4, a5, a6, &v22);
      v9 = v22;
      v12 = v15;
      if ( v15 >= 0 )
        v12 = 0;
    }
    if ( v14 )
    {
      RmpAcquireGlobalLock();
      if ( (*((_QWORD *)v14 + 74))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v14 - 64), v16);
      RmpReleaseGlobalLock();
    }
  }
  v18 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v18, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 0x400000000008LL) )
  {
    v19 = *(_DWORD *)a4;
    ProcessId = GetProcessId(a2);
    v26 = 0x1000000LL;
    LODWORD(v22) = ProcessId;
    v28 = &v32;
    v29 = (char *)(a4 + 236);
    v30 = a5;
    v27 = v9;
    v24 = a6;
    LODWORD(v25) = v19;
    v31 = (char *)(a4 + 4);
    LODWORD(v23) = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      a4 + 4,
      &unk_18009F46C);
  }
  return (unsigned int)v12;
}
