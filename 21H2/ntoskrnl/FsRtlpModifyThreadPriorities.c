/*
 * XREFs of FsRtlpModifyThreadPriorities @ 0x140379E74
 * Callers:
 *     FsRtlpOplockCleanup @ 0x1402AD5D0 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1402AEF00 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToII @ 0x1402C4AAC (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140354E00 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036CC40 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x14036D3C8 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403930CC (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0B48 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404F04C4 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14088BE5C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14088BF98 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     FsRtlpDoBoost @ 0x1402CA830 (FsRtlpDoBoost.c)
 *     PsBoostThreadIoEx @ 0x14034D800 (PsBoostThreadIoEx.c)
 */

void __fastcall FsRtlpModifyThreadPriorities(__int64 a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rcx
  _BYTE *v7; // r9
  __int64 *i; // rdi

  if ( a3 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      v7 = (_BYTE *)(a1 + 144);
    }
    else
    {
      if ( !a2 )
      {
LABEL_13:
        for ( i = *(__int64 **)(a1 + 72); i != (__int64 *)(a1 + 72); i = (__int64 *)*i )
          FsRtlpDoBoost(i[5], (__int64)CurrentThread, (_BYTE *)(a1 + 32), (_BYTE *)i + 48, a1);
        return;
      }
      v6 = *(_QWORD *)(a2 + 40);
      v7 = (_BYTE *)(a2 + 48);
    }
    if ( v6 )
    {
      FsRtlpDoBoost(v6, (__int64)CurrentThread, (_BYTE *)(a1 + 32), v7, a1);
      return;
    }
    goto LABEL_13;
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x20) != 0 )
    {
      PsBoostThreadIoEx(*(_QWORD *)(a2 + 40), 1, 1, (_DWORD *)a1);
      *(_DWORD *)(a2 + 48) &= ~0x20u;
    }
  }
  else if ( (*(_DWORD *)(a1 + 144) & 0x20) != 0 )
  {
    PsBoostThreadIoEx(*(_QWORD *)(a1 + 24), 1, 1, (_DWORD *)a1);
    *(_DWORD *)(a1 + 144) &= ~0x20u;
  }
}
