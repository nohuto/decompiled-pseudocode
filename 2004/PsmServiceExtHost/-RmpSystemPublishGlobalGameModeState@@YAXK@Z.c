/*
 * XREFs of ?RmpSystemPublishGlobalGameModeState@@YAXK@Z @ 0x18004021C
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180031FE0 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180040114 (-RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

void __fastcall RmpSystemPublishGlobalGameModeState(int a1)
{
  __int64 v1; // rcx
  int v2; // r9d
  int v3; // [rsp+30h] [rbp-58h] BYREF
  int v4; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-48h] BYREF
  int *v6; // [rsp+60h] [rbp-28h]
  int v7; // [rsp+68h] [rbp-20h]
  int v8; // [rsp+6Ch] [rbp-1Ch]

  v3 = a1;
  if ( (int)RtlPublishWnfStateData(WNF_RM_GAME_MODE_ACTIVE, 0LL, &v3, 4LL, 0LL) < 0 && (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v8 = 0;
      v6 = &v4;
      v4 = v2;
      v7 = 4;
      tlgWriteTransfer_EventWriteTransfer(v1, (unsigned __int8 *)dword_18009EF51, 0LL, 0LL, 3u, &v5);
    }
  }
}
