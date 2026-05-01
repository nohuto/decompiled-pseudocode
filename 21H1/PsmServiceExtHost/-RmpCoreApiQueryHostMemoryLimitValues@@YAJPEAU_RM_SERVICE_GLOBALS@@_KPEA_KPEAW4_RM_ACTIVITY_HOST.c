/*
 * XREFs of ?RmpCoreApiQueryHostMemoryLimitValues@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_KPEAW4_RM_ACTIVITY_HOST_CALLBACK_TYPE@@@Z @ 0x180073D58
 * Callers:
 *     RmCoreRpcSrvQueryHostMemoryLimitValues @ 0x180069EB0 (RmCoreRpcSrvQueryHostMemoryLimitValues.c)
 * Callees:
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EBF8 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026310 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180062780 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

__int64 __fastcall RmpCoreApiQueryHostMemoryLimitValues(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        enum _RM_ACTIVITY_HOST_CALLBACK_TYPE *a4)
{
  int v4; // edi
  struct _RM_SERVICE_GLOBALS *v5; // r14
  unsigned __int64 v6; // rsi
  int v10; // eax
  char *v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID P; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 *v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+84h] [rbp+1Bh]

  P = 0LL;
  v4 = 6;
  v5 = RmSvcGlobals;
  v6 = 0LL;
  if ( (unsigned int)dword_1800B31E0 > 5 && tlgKeywordOn((__int64)&dword_1800B31E0, 3LL) )
  {
    v24 = 0;
    v22 = &v19;
    v19 = a2;
    v23 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009DA72,
      0LL,
      0LL,
      3u,
      &v21);
  }
  RmpAcquireGlobalLock();
  v10 = RmpActivityHostFindByHostId(v5, a2, (struct _RM_ACTIVITY_HOST **)&P);
  v11 = (char *)P;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v13 = *((_DWORD *)P + 344);
    v6 = *((_QWORD *)P + 171);
    switch ( v13 )
    {
      case 4:
        v4 = 5;
LABEL_13:
        *a3 = v6;
        v12 = 0;
        *(_DWORD *)a4 = v4;
        goto LABEL_15;
      case 3:
        v4 = 4;
        goto LABEL_13;
      case 2:
        v4 = 3;
        goto LABEL_13;
      case 1:
        v4 = 2;
        goto LABEL_13;
    }
    v12 = -1073741823;
  }
LABEL_15:
  if ( v11 )
    RmpObjectRelease(v11);
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800B31E0 > 5 && tlgKeywordOn((__int64)&dword_1800B31E0, 3LL) )
  {
    LODWORD(v19) = v4;
    v20 = v6;
    LODWORD(P) = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v14,
      byte_18009DA0C,
      v15,
      v16,
      (__int64)&P,
      (__int64)&v20,
      (__int64)&v19);
  }
  return v12;
}
