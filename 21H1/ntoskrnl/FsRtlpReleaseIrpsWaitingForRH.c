/*
 * XREFs of FsRtlpReleaseIrpsWaitingForRH @ 0x1402F569C
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x140254990 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140255A70 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1402F5590 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpOplockCleanup @ 0x1402F5884 (FsRtlpOplockCleanup.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14038FC2C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1406111D0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpOplockKeysEqual @ 0x140256840 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404EB1EC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 */

void __fastcall FsRtlpReleaseIrpsWaitingForRH(__int64 a1)
{
  _QWORD *v1; // r14
  _QWORD *v3; // rbx
  char v4; // r15
  _QWORD **v5; // r13
  _QWORD *v6; // rsi
  void *v7; // r12
  _QWORD *v8; // rbp
  _QWORD *v9; // rax

  v1 = (_QWORD *)(a1 + 88);
  v3 = *(_QWORD **)(a1 + 88);
  v4 = 1;
  if ( v3 != (_QWORD *)(a1 + 88) )
  {
    v5 = (_QWORD **)(a1 + 72);
    do
    {
      v6 = *v5;
      v7 = v3;
      if ( *v5 == v5 && (*(_DWORD *)(a1 + 144) & 0x10000) == 0 )
        goto LABEL_17;
      if ( !*((_BYTE *)v3 + 52) )
      {
        if ( (*(_DWORD *)(a1 + 144) & 0x10000) != 0 )
          v6 = *(_QWORD **)(a1 + 120);
        v8 = (_QWORD *)(a1 + ((*(_DWORD *)(a1 + 144) & 0x10000) != 0 ? 120LL : 72LL));
        while ( v6 != v8 )
        {
          v9 = v6 - 7;
          if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 )
            v9 = v6;
          if ( !FsRtlpOplockKeysEqual(v3[7], v9[3], 0) )
          {
            v4 = 0;
            break;
          }
          v6 = (_QWORD *)*v6;
        }
        if ( v4 )
        {
LABEL_17:
          v3 = (_QWORD *)v3[1];
          FsRtlpRemoveAndCompleteWaitingIrp(v7);
        }
      }
      v3 = (_QWORD *)*v3;
    }
    while ( v3 != v1 );
  }
}
