/*
 * XREFs of ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B46F4
 * Callers:
 *     VidMmRestoreFromPurge @ 0x1C0022CB0 (VidMmRestoreFromPurge.c)
 * Callees:
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087998 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     VidSchCreateSchedulingLogs @ 0x1C0095950 (VidSchCreateSchedulingLogs.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00959C0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B2634 (-MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::RestoreFromPurge(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 v5; // rax
  unsigned int i; // edi
  __int64 v7; // rsi
  int inited; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r14
  _QWORD *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _DWORD v21[24]; // [rsp+20h] [rbp-68h] BYREF

  v3 = *((_DWORD *)this + 10040) == 0;
  *((_BYTE *)this + 7080) = 0;
  if ( !v3 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v5 + 24) = 9319LL;
LABEL_13:
    WdLogEvent5_WdAssertion(v5);
    return;
  }
  VIDMM_GLOBAL::MapAllPagingBuffers(this);
  for ( i = 0; i < *((_DWORD *)this + 1750); ++i )
  {
    v7 = *((_QWORD *)this + 5027) + 1584LL * i;
    if ( (*(_BYTE *)(v7 + 436) & 0x20) != 0 )
    {
      inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, i, 0LL);
      v11 = inited;
      if ( inited < 0 )
      {
        v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
        v12[3] = 270LL;
        v12[4] = 23LL;
        v12[5] = this;
        v12[6] = i;
        v12[7] = v11;
        WdLogEvent5_WdCriticalError(v12);
      }
      *(_BYTE *)(v7 + 436) &= ~0x20u;
    }
  }
  memset(&v21[2], 0, 0x50uLL);
  v21[1] = -1;
  v21[0] = 101;
  v13 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v21, 1);
  v16 = v13;
  if ( v13 < 0 )
  {
    v17 = WdLogNewEntry5_WdCriticalError(v15, v14);
    *(_QWORD *)(v17 + 24) = 270LL;
    *(_QWORD *)(v17 + 32) = 23LL;
    *(_QWORD *)(v17 + 40) = v16;
    *(_OWORD *)(v17 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  if ( (int)VidSchCreateSchedulingLogs(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL)) < 0 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v19, v18, v20);
    *(_QWORD *)(v5 + 24) = 9371LL;
    goto LABEL_13;
  }
}
