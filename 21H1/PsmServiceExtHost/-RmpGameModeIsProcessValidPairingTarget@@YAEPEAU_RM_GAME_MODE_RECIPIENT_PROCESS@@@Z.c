/*
 * XREFs of ?RmpGameModeIsProcessValidPairingTarget@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006EA58
 * Callers:
 *     ?RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x18006E160 (-RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x18006EF94 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 * Callees:
 *     ?RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006EA3C (-RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

unsigned __int8 __fastcall RmpGameModeIsProcessValidPairingTarget(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1)
{
  __int64 v1; // rcx
  unsigned __int8 result; // al

  if ( !RmpGameModeIsProcessPrimary(a1) )
    return 0;
  result = 1;
  if ( (*(_BYTE *)(v1 + 144) & 1) != 0 )
    return 0;
  return result;
}
