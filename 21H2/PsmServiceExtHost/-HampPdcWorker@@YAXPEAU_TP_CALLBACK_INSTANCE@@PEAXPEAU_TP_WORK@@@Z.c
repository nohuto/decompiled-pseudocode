/*
 * XREFs of ?HampPdcWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800830C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000969C (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800096F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180063590 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180064294 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007C5A8 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007C8C8 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x180082EB8 (-HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 *     ?HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180083A34 (-HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 */

void __fastcall HampPdcWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  DWORD CurrentThreadId; // eax
  struct _HOST_ACTIVITY_MANAGER *v7; // rcx
  __int64 v8; // rdx
  int v9; // esi
  __int64 v10; // rdx
  struct _HOST_ACTIVITY_MANAGER *v11; // rcx
  char v12; // r8
  unsigned int v13; // edx
  unsigned int v14; // edx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _HOST_ACTIVITY_MANAGER *v22; // rcx
  DWORD v23; // ebx
  __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  char v29[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+100h] [rbp+0h] BYREF

  v4 = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v29);
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1800A21FE, 0LL, 0LL, 2u, &v30);
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  CurrentThreadId = GetCurrentThreadId();
  v7 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  *((_DWORD *)a2 + 18) = CurrentThreadId;
  HampManagerReleaseLockExclusive(v7);
  v9 = 0;
  *((_QWORD *)a2 + 5) = 0LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_DWORD *)a2 + 14) |= 1u;
  while ( 1 )
  {
    HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v8);
    if ( !*((_DWORD *)a2 + 21) )
      break;
    RtlQueryUnbiasedInterruptTime(&v25);
    v11 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
    v28 = *((_QWORD *)a2 + 11);
    v4 = v25 / 0x2710 - *((_DWORD *)a2 + 21);
    HampManagerReleaseLockShared(v11, (v25 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64);
    if ( v9 || v4 <= 0x3A980 )
    {
      v12 = 0;
    }
    else
    {
      v9 = 1;
      v12 = 1;
    }
    if ( !(unsigned int)HampPdcUpdateState((struct _HAM_PDC_CONTEXT *)a2, v4, v12) )
      goto LABEL_17;
    v13 = *((_DWORD *)a2 + 19);
    if ( v4 >= v13 && (v13 = *((_DWORD *)a2 + 20), v4 >= v13) )
      v14 = 0;
    else
      v14 = v13 - v4;
    v27[1] = -10000LL * v14;
    RtlWaitOnAddress(a2 + 88, &v28, 8LL);
  }
  HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v10);
LABEL_17:
  HampSlsEndScenarioInstance((struct _HAM_SLEEP_STUDY_CONTEXT *)(a2 + 24));
  v15 = *((_QWORD *)a2 + 1);
  PdcNotificationClientAcknowledge(v15, 0LL);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
  {
    v26 = 0;
    v27[0] = v15;
    LODWORD(v25) = v18;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v16,
      byte_18009EA12,
      v17,
      v18,
      (__int64)&v25,
      (__int64)v27,
      (__int64)&v26);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 0x400000000008LL) )
  {
    v27[0] = 0x1000000LL;
    LODWORD(v25) = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v19,
      byte_1800A223B,
      v20,
      v21,
      (__int64)&v25,
      (__int64)v27);
  }
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  v22 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  *((_DWORD *)a2 + 18) = 0;
  HampManagerReleaseLockExclusive(v22);
  v23 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v23, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
    tlgWriteTransfer_EventWriteTransfer(v24, (unsigned __int8 *)dword_1800A227D, 0LL, 0LL, 2u, &v30);
}
