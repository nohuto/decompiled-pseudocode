/*
 * XREFs of ?RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z @ 0x1800788FC
 * Callers:
 *     ?RmpGameModeTryApplySystemExtensionPolicy@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180070640 (-RmpGameModeTryApplySystemExtensionPolicy@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIP.c)
 *     ?RmpGameModeUnapplySystemExtensionPolicy@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180070AF0 (-RmpGameModeUnapplySystemExtensionPolicy@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPI.c)
 * Callees:
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18004577C (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 */

void __fastcall RmpSystemNotifyGameModeExtensionStateChange(void *a1, char a2)
{
  char v4; // al
  __int64 v5; // rdx

  v4 = IsNotifyGameModeExtensionRecipientsPresentPresent();
  v5 = 0LL;
  if ( v4 )
  {
    LOBYTE(v5) = a2 != 0;
    NotifySystemExpandedResourceModeStateChange(a1, v5);
  }
}
