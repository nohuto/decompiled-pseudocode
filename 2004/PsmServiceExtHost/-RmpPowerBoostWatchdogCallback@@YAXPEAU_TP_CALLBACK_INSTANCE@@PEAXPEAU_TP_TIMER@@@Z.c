/*
 * XREFs of ?RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800767F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemApplyInswapPowerBoost@@YAJK@Z @ 0x180001618 (-RmpSystemApplyInswapPowerBoost@@YAJK@Z.c)
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180001674 (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180008318 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180008348 (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180076698 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall RmpPowerBoostWatchdogCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  char v4; // bl
  struct _RM_POWERBOOST_CONTEXT *v5; // rdi
  int v6; // esi
  int v7; // edx
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DWORD v12; // ebx
  _BYTE v13[8]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v15[144]; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+D0h] [rbp-38h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  v4 = 0;
  v5 = (struct _RM_POWERBOOST_CONTEXT *)(a2 + 104);
  v6 = 0;
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_18009E872,
      0LL,
      0LL,
      2u,
      &v16);
  RmpPowerBoostAcquireLockExclusive(v5);
  v7 = *((_DWORD *)a2 + 42);
  if ( (a2[2712] & 1) == 0 && (v7 & 2) != 0 )
  {
    RmpPowerBoostArmWatchdog(v5);
    v8 = *((_DWORD *)a2 + 42);
    if ( (v8 & 1) == 0 )
    {
      *((_DWORD *)a2 + 42) = v8 & 0xFFFFFFFD;
      RmpSystemApplyInswapPowerBoost(0);
      v8 = *((_DWORD *)a2 + 42);
    }
    v4 = v8 & 1;
    RtlQueryUnbiasedInterruptTime(&v14);
    v6 = v14 / 0x2710 - *(_DWORD *)v5;
  }
  else
  {
    *((_DWORD *)a2 + 42) = v7 & 0xFFFFFFFE;
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    LODWORD(v14) = v6;
    v13[0] = v4 ^ 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v9,
      byte_18009E797,
      v10,
      v11,
      (__int64)v13,
      (__int64)&v14);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v12, 0LL);
  }
}
