/*
 * XREFs of ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081AA8
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C007C924 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C007D0FC (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C007D728 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C007F7CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007FA70 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     ?NotifyRangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C0001584 (-NotifyRangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BBC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BE0 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1C00E679C (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(
        VIDMM_RECYCLE_BLOCK *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_BLOCK *v3; // rcx
  struct VIDMM_RECYCLE_RANGE *v4; // rsi
  struct VIDMM_RECYCLE_RANGE *v5; // rbp
  char v6; // r15
  char v7; // r14
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct VIDMM_RECYCLE_RANGE *v12; // rbx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct VIDMM_RECYCLE_RANGE *v17; // rbx
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax

  VIDMM_RECYCLE_BLOCK::NotifyRangeEvent((__int64)this, 3, (__int64)a2);
  v3 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)a2 + 17);
  if ( !v3 || *((_QWORD *)v3 + 8) == *((_QWORD *)v3 + 9) )
  {
    v4 = a2;
    v5 = a2;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      while ( v6 )
      {
        if ( v7 )
        {
          if ( v4 != v5 )
            VIDMM_RECYCLE_BLOCK::CombineFreedRanges(v3, v4, v5, a2);
          return;
        }
LABEL_13:
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(v5);
        v17 = NextRange;
        if ( !NextRange )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v3, v14, v15, v16) + 24) = 0LL;
          goto LABEL_16;
        }
        if ( *((_DWORD *)NextRange + 16) )
        {
          if ( !g_IsInternalReleaseOrDbg )
            goto LABEL_16;
          v20 = WdLogNewEntry5_WdTrace(v3, v14, v15, v16);
          *(_QWORD *)(v20 + 24) = v17;
          v3 = (VIDMM_RECYCLE_BLOCK *)*((int *)v17 + 16);
LABEL_40:
          *(_QWORD *)(v20 + 32) = v3;
          goto LABEL_16;
        }
        if ( *((_QWORD *)NextRange + 20)
          || (v3 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)NextRange + 17)) != 0LL
          && *((_QWORD *)v3 + 8) != *((_QWORD *)v3 + 9) )
        {
          if ( *((_QWORD *)NextRange + 20) )
          {
            if ( !g_IsInternalReleaseOrDbg )
              goto LABEL_16;
            v20 = WdLogNewEntry5_WdTrace(v3, v14, v15, v16);
            *(_QWORD *)(v20 + 24) = v17;
            v3 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v17 + 20);
            goto LABEL_40;
          }
          if ( g_IsInternalReleaseOrDbg )
          {
            v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v3, v14, v15, v16);
            v21[3] = v17;
            v21[4] = *((_QWORD *)v17 + 17);
            v21[5] = *(_QWORD *)(*((_QWORD *)v17 + 17) + 64LL);
            v3 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v17 + 17);
            v21[6] = *((_QWORD *)v3 + 9);
          }
LABEL_16:
          v7 = 1;
        }
        else
        {
          v5 = NextRange;
        }
      }
      PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v4);
      v12 = PreviousRange;
      if ( !PreviousRange )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v3, v9, v10, v11) + 24) = 0LL;
        goto LABEL_11;
      }
      if ( *((_DWORD *)PreviousRange + 16) )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v18 = WdLogNewEntry5_WdTrace(v3, v9, v10, v11);
          *(_QWORD *)(v18 + 24) = v12;
          v3 = (VIDMM_RECYCLE_BLOCK *)*((int *)v12 + 16);
          goto LABEL_29;
        }
      }
      else
      {
        if ( !*((_QWORD *)PreviousRange + 20) )
        {
          v3 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)PreviousRange + 17);
          if ( !v3 || *((_QWORD *)v3 + 8) == *((_QWORD *)v3 + 9) )
          {
            v4 = PreviousRange;
            goto LABEL_12;
          }
        }
        if ( !*((_QWORD *)PreviousRange + 20) )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v3, v9, v10, v11);
            v19[3] = v12;
            v19[4] = *((_QWORD *)v12 + 17);
            v19[5] = *(_QWORD *)(*((_QWORD *)v12 + 17) + 64LL);
            v3 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v12 + 17);
            v19[6] = *((_QWORD *)v3 + 9);
          }
          goto LABEL_11;
        }
        if ( g_IsInternalReleaseOrDbg )
        {
          v18 = WdLogNewEntry5_WdTrace(v3, v9, v10, v11);
          *(_QWORD *)(v18 + 24) = v12;
          v3 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v12 + 20);
LABEL_29:
          *(_QWORD *)(v18 + 32) = v3;
        }
      }
LABEL_11:
      v6 = 1;
LABEL_12:
      if ( !v7 )
        goto LABEL_13;
    }
  }
}
