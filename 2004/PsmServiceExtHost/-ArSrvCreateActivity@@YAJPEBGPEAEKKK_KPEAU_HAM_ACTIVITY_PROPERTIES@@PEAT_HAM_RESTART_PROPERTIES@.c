/*
 * XREFs of ?ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@@Z @ 0x18008431C
 * Callers:
 *     HamRpcSrvCreateAutoRestartActivity @ 0x180083DA0 (HamRpcSrvCreateAutoRestartActivity.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x1800359C8 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?ArActClearChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x180083F70 (-ArActClearChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY@@@Z @ 0x180084040 (-ArActCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIE.c)
 *     ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18008415C (-ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActWaitNoChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x1800841A0 (-ArActWaitNoChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@44@Z @ 0x180084240 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U2@@-$_tlgWriteTe.c)
 */

__int64 __fastcall ArSrvCreateActivity(
        STRSAFE_PCNZWCH pszSrc,
        struct _AR_ACTIVITY *SourceSid,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct _ACTIVITY_RESTARTER *a6,
        struct _HAM_ACTIVITY_PROPERTIES *a7,
        union _HAM_RESTART_PROPERTIES *a8,
        struct _ACTIVITY_RESTARTER *a9)
{
  __int64 v11; // rsi
  int v12; // edi
  int v13; // eax
  struct _AR_ACTIVITY *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  struct _AR_ACTIVITY *v20; // [rsp+58h] [rbp-A8h] BYREF
  struct _ACTIVITY_RESTARTER *v21; // [rsp+60h] [rbp-A0h] BYREF
  void *v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  wchar_t pszDest[280]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+2B0h] [rbp+1B0h] BYREF

  v21 = a9;
  v19 = a3;
  v20 = SourceSid;
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800B3218,
        (unsigned __int8 *)dword_1800A2506,
        0LL,
        0LL,
        2u,
        &v25);
    a3 = v19;
    SourceSid = v20;
  }
  v11 = -1LL;
  v20 = 0LL;
  if ( *(_DWORD *)a8 >= 2u || (*((_BYTE *)a7 + 8) & 4) != 0 && (*(_BYTE *)a8 & 1) == 0 )
  {
    v12 = -1073741811;
  }
  else
  {
    v12 = HampUtilValidateAndCapturePsmInformation(pszDest, pszSrc, SourceSid, a3, a4, a5, (unsigned __int64)a6);
    if ( v12 >= 0 )
    {
      v13 = ArActCreate((struct _RM_PSM_HOST_INFO *)pszDest, a7, a8, v21, &v20);
      v14 = v20;
      v12 = v13;
      if ( v13 >= 0 )
      {
        v11 = *((_QWORD *)v20 + 5);
        ArActWaitNoChangeInProgress(v20);
        ArActStartAsync(v14);
        ArActClearChangeInProgress(v14);
        v12 = 0;
      }
      if ( v14 )
        CemRcObjectDereference(v14);
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    v21 = a6;
    v20 = (struct _AR_ACTIVITY *)a5;
    v22 = (void *)pszSrc;
    v23 = v11;
    v19 = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v15,
      byte_1800A24B3,
      v16,
      v17,
      (__int64)&v19,
      (__int64)&v23,
      &v22,
      (__int64)&v20,
      (__int64)&v21);
  }
  return (unsigned int)v12;
}
