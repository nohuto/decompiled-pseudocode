/*
 * XREFs of SmKmStoreHelperCheckWaitCommand @ 0x1403582B8
 * Callers:
 *     SmKmStoreHelperSendCommand @ 0x14035823C (SmKmStoreHelperSendCommand.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140359CC0 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x14035A664 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 * Callees:
 *     SmKmStoreHelperWaitForCommand @ 0x140358194 (SmKmStoreHelperWaitForCommand.c)
 */

__int64 __fastcall SmKmStoreHelperCheckWaitCommand(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 56);
  result = 0LL;
  if ( v2 )
  {
    if ( a2 || (v2 & 1) != 0 )
      return SmKmStoreHelperWaitForCommand(a1, 0LL, 0LL, 0);
    else
      return 3221225646LL;
  }
  return result;
}
