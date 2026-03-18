/*
 * XREFs of ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14023EC48
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023E1A4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402C505C (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1402C5BA8 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1402C8BCC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D194C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(__int64 a1)
{
  bool v2; // zf
  int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    v2 = *(_DWORD *)(a1 + 6592) == 0;
    v3 = 20;
    Interval.QuadPart = -150000LL;
    if ( !v2 )
    {
      do
      {
        if ( !v3 )
          break;
        if ( *(_BYTE *)(a1 + 6022) < 3u )
          break;
        KeDelayExecutionThread(0, 0, &Interval);
        --v3;
      }
      while ( *(_DWORD *)(a1 + 6592) );
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    result = ExAcquirePushLockExclusiveEx(a1 + 6024, 0LL);
    ++*(_DWORD *)(a1 + 6036);
    *(_DWORD *)(a1 + 6032) = 1;
  }
  return result;
}
