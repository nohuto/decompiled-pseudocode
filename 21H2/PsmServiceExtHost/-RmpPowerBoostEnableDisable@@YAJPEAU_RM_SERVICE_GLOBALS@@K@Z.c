/*
 * XREFs of ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180001510
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D934 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmpSystemApplyInswapPowerBoost@@YAJK@Z @ 0x180001628 (-RmpSystemApplyInswapPowerBoost@@YAJK@Z.c)
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180001684 (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180008388 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800083B8 (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U3@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@5544@Z @ 0x1800770F0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U3@U3@U2@U2@.c)
 */

__int64 __fastcall RmpPowerBoostEnableDisable(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2)
{
  char *v2; // rbx
  __int64 v5; // rax
  struct _TP_TIMER *v6; // rcx
  int v7; // edi
  int v8; // r8d
  int v9; // r9d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  int v13; // ecx
  char v14; // al
  __int64 v15; // [rsp+60h] [rbp+17h] BYREF
  __int64 v16; // [rsp+68h] [rbp+1Fh] BYREF
  _QWORD v17[6]; // [rsp+70h] [rbp+27h] BYREF
  unsigned __int64 v18; // [rsp+B0h] [rbp+67h] BYREF
  bool v19; // [rsp+B8h] [rbp+6Fh] BYREF
  bool v20; // [rsp+C0h] [rbp+77h] BYREF
  int v21; // [rsp+C8h] [rbp+7Fh] BYREF

  v2 = (char *)a1 + 104;
  RmpPowerBoostAcquireLockExclusive((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 104));
  if ( a2 )
  {
    if ( (*((_BYTE *)a1 + 2712) & 1) != 0 )
    {
      v7 = -1073741585;
      goto LABEL_6;
    }
    if ( (v2[64] & 1) != 0 )
    {
      RtlQueryUnbiasedInterruptTime(&v18);
      v12 = v18 / 0x2710;
      ++*((_QWORD *)v2 + 2);
      *((_QWORD *)v2 + 1) = v12;
    }
    else
    {
      RtlQueryUnbiasedInterruptTime(&v18);
      v11 = v18 / 0x2710;
      *(_QWORD *)v2 = v18 / 0x2710;
      *((_QWORD *)v2 + 1) = v11;
      v7 = RmpSystemApplyInswapPowerBoost(a2);
      if ( v7 < 0 )
        goto LABEL_6;
      *((_DWORD *)v2 + 16) |= 2u;
      *((_QWORD *)v2 + 2) = 1LL;
      RmpPowerBoostArmWatchdog((struct _RM_POWERBOOST_CONTEXT *)v2);
    }
  }
  else
  {
    v5 = *((_QWORD *)v2 + 2);
    if ( v5 == 1 && (v2[64] & 2) != 0 )
    {
      RmpSystemApplyInswapPowerBoost(0);
      v6 = (struct _TP_TIMER *)*((_QWORD *)v2 + 3);
      *((_DWORD *)v2 + 16) &= ~2u;
      *((_QWORD *)v2 + 2) = 0LL;
      SetThreadpoolTimer(v6, 0LL, 0, 0);
      *((_DWORD *)v2 + 16) &= ~1u;
    }
    else
    {
      *((_QWORD *)v2 + 2) = v5 - 1;
    }
  }
  v7 = 0;
LABEL_6:
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
  {
    v13 = *((_DWORD *)v2 + 16);
    v14 = v13;
    v21 = v7;
    LOBYTE(v13) = v13 & 1;
    LOBYTE(v18) = v13;
    v19 = (v14 & 2) != 0;
    v15 = *((_QWORD *)v2 + 2);
    v20 = a2 != 0;
    v16 = *((_QWORD *)v2 + 1);
    v17[0] = *(_QWORD *)v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v13,
      (unsigned int)&unk_18009E881,
      v8,
      v9,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v18,
      (__int64)&v19);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)v2);
  return (unsigned int)v7;
}
