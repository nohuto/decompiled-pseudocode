/*
 * XREFs of ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007A364
 * Callers:
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0078754 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0078F40 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C0079B80 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C007A5F0 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C007D590 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00858D0 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C2008 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C20DC (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C2150 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1C00C22A8 (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 * Callees:
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0084CD0 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::AddMultirangeToTree(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // bl
  __int64 v10; // rax
  _QWORD *v11; // r14
  struct _RTL_BALANCED_NODE *v12; // rdi
  struct _RTL_BALANCED_NODE *v13; // rax
  struct _RTL_BALANCED_NODE *v14; // rax
  __int64 result; // rax
  struct _RTL_BALANCED_NODE *v16; // rax
  _QWORD *v17; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-38h] BYREF
  char v19; // [rsp+30h] [rbp-28h]

  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v6 + 24) = a3;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdEvent(v6);
  v9 = 0;
  v10 = *(_QWORD *)(a3 + 56);
  v18[0] = *(_QWORD *)(a3 + 40) - *(_QWORD *)(a3 + 32);
  v18[1] = v10;
  v19 = 0;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      v11 = a1 + 7;
      v12 = (struct _RTL_BALANCED_NODE *)a1[7];
      if ( v12 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v18, v12) < 0 )
          {
            v14 = v12->Children[0];
            if ( !v12->Children[0] )
              break;
          }
          else
          {
            v14 = v12->Children[1];
            if ( !v14 )
              goto LABEL_14;
          }
          v12 = v14;
        }
      }
    }
    else
    {
      if ( (_DWORD)v4 != 2 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v4 - 1), v7);
        v17[3] = 270LL;
        v17[4] = 52LL;
        v17[5] = 15LL;
        v17[6] = v4;
        v17[7] = 0LL;
        result = WdLogEvent5_WdCriticalError(v17);
        goto LABEL_16;
      }
      v11 = a1 + 8;
      v12 = (struct _RTL_BALANCED_NODE *)a1[8];
      if ( v12 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v18, v12) < 0 )
          {
            v13 = v12->Children[0];
            if ( !v12->Children[0] )
              break;
          }
          else
          {
            v13 = v12->Children[1];
            if ( !v13 )
              goto LABEL_14;
          }
          v12 = v13;
        }
      }
    }
  }
  else
  {
    v11 = a1 + 6;
    v12 = (struct _RTL_BALANCED_NODE *)a1[6];
    if ( v12 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v18, v12) < 0 )
        {
          v16 = v12->Children[0];
          if ( !v12->Children[0] )
            break;
        }
        else
        {
          v16 = v12->Children[1];
          if ( !v16 )
          {
LABEL_14:
            v9 = 1;
            break;
          }
        }
        v12 = v16;
      }
    }
  }
  LOBYTE(v8) = v9;
  result = RtlAvlInsertNodeEx(v11, v12, v8, a3);
LABEL_16:
  *(_DWORD *)(a3 + 88) = v4;
  return result;
}
