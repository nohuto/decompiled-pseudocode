/*
 * XREFs of ?RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800080F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z @ 0x180007438 (-RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180008318 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180008348 (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800083D0 (-RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

void __fastcall RmpPowerBoostTimedBoostCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  char v4; // si
  int v5; // eax
  DWORD v6; // ebx
  unsigned __int64 v7; // rax
  char v8; // [rsp+38h] [rbp-D0h] BYREF
  char v9; // [rsp+39h] [rbp-CFh] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-C8h] BYREF
  char v11[144]; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+D8h] [rbp-30h] BYREF
  char *v13; // [rsp+F8h] [rbp-10h]
  int v14; // [rsp+100h] [rbp-8h]
  int v15; // [rsp+104h] [rbp-4h]
  char *v16; // [rsp+108h] [rbp+0h]
  int v17; // [rsp+110h] [rbp+8h]
  int v18; // [rsp+114h] [rbp+Ch]
  unsigned __int64 *v19; // [rsp+118h] [rbp+10h]
  int v20; // [rsp+120h] [rbp+18h]
  int v21; // [rsp+124h] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+128h] [rbp+20h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  v4 = 0;
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_18009E6D8, 0, 0, 2u, &v22);
  RmpPowerBoostAcquireLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
  if ( (a2[2712] & 1) == 0 && (a2[168] & 4) != 0 )
  {
    RtlQueryUnbiasedInterruptTime(&v10);
    RmpPowerBoostArmTimedBoostTimer(v10 / 0x2710, (struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
    v5 = *((_DWORD *)a2 + 42);
    if ( (v5 & 8) == 0 )
    {
      *((_DWORD *)a2 + 42) = v5 & 0xFFFFFFFB;
      v4 = 1;
      RmpSystemApplyAppLaunchPowerBoost(0);
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
  {
    v7 = *((_QWORD *)a2 + 19);
    v21 = 0;
    v18 = 0;
    v15 = 0;
    v10 = v7;
    LOBYTE(v7) = (*((_DWORD *)a2 + 42) & 4) != 0;
    v9 = v4;
    v8 = v7;
    v19 = &v10;
    v16 = &v8;
    v13 = &v9;
    v20 = 8;
    v17 = 1;
    v14 = 1;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_18009E700, 0, 0, 5u, &v12);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v6, 0LL);
  }
}
