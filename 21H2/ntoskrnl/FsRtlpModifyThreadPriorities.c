/*
 * XREFs of FsRtlpModifyThreadPriorities @ 0x1403799C4
 * Callers:
 *     FsRtlpOplockCleanup @ 0x14022B930 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x14022D260 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToII @ 0x14024302C (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14035FB50 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036CDF0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x14036D578 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039321C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0A78 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404F0444 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14088BFBC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14088C0F8 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     FsRtlpDoBoost @ 0x140249120 (FsRtlpDoBoost.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
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
      PsBoostThreadIoEx(*(_QWORD *)(a2 + 40), 1, 1, (void *)a1);
      *(_DWORD *)(a2 + 48) &= ~0x20u;
    }
  }
  else if ( (*(_DWORD *)(a1 + 144) & 0x20) != 0 )
  {
    PsBoostThreadIoEx(*(_QWORD *)(a1 + 24), 1, 1, (void *)a1);
    *(_DWORD *)(a1 + 144) &= ~0x20u;
  }
}
