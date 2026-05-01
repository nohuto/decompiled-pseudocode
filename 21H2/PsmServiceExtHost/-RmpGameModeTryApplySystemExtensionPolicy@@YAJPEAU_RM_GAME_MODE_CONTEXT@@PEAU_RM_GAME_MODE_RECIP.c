/*
 * XREFs of ?RmpGameModeTryApplySystemExtensionPolicy@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180070640
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z @ 0x1800788FC (-RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z.c)
 */

__int64 __fastcall RmpGameModeTryApplySystemExtensionPolicy(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  if ( *((_DWORD *)a2 + 26) )
    return 255LL;
  RmpSystemNotifyGameModeExtensionStateChange(*((void **)a2 + 5), 1u);
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v5 = *((_DWORD *)a2 + 27);
      v10 = 0;
      v6 = v5;
      v9 = 4;
      v8 = &v6;
      tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_18009CC72, 0LL, 0LL, 3u, &v7);
    }
  }
  return 0LL;
}
