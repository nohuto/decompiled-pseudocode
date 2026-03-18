/*
 * XREFs of ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1C00E679C
 * Callers:
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081AA8 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 * Callees:
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007C6C0 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007DD20 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00807B8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0080850 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BBC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E637C (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E6F68 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::CombineFreedRanges(
        VIDMM_RECYCLE_BLOCK *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct _SLIST_ENTRY **a3,
        struct _SLIST_ENTRY **a4)
{
  struct VIDMM_RECYCLE_RANGE *v6; // rbx
  _QWORD *v7; // rax
  struct _SLIST_ENTRY *v8; // rsi
  struct VIDMM_RECYCLE_RANGE *i; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _SLIST_ENTRY *v15; // rbp
  struct _SLIST_ENTRY *v16; // r15
  struct _SLIST_ENTRY *v17; // r12
  struct _SLIST_ENTRY *v18; // r13
  struct _SLIST_ENTRY *Next; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v20; // rbp
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  __int64 v22; // r8
  struct _SLIST_ENTRY *v23; // rdx
  struct VIDMM_RECYCLE_RANGE *v24; // r15

  v6 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v7[3] = v6;
    v7[4] = a4;
    v7[5] = a3;
    v7[6] = *((_QWORD *)v6 + 9);
  }
  v8 = a4[17];
  for ( i = v6; ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)i + 9) + 32LL);
    if ( *((_DWORD *)i + 22) == 2 )
    {
      VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v10, 2LL, i);
    }
    else
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v10, 2, *((_QWORD *)i + 17));
      if ( !v8 )
        v8 = (struct _SLIST_ENTRY *)*((_QWORD *)i + 17);
    }
    if ( i == (struct VIDMM_RECYCLE_RANGE *)a3 )
      break;
  }
  v15 = (struct _SLIST_ENTRY *)*((_QWORD *)v6 + 4);
  v16 = a3[5];
  v17 = (struct _SLIST_ENTRY *)*((_QWORD *)v6 + 16);
  v18 = a3[15];
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = v8;
  a4[4] = v15;
  a4[5] = v16;
  if ( v8 )
  {
    v8[2].Next = v15;
    *((_QWORD *)&v8[2].Next + 1) = v16;
    v8[4].Next = (struct _SLIST_ENTRY *)a4;
    *((_QWORD *)&v8[4].Next + 1) = a4;
    a4[17] = v8;
  }
  Next = a4[9][2].Next;
  if ( v8 )
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(Next, 2, (__int64)v8);
  else
    VIDMM_RECYCLE_HEAP::AddRangeToTree(Next, 2, (__int64)a4);
  v20 = *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)v6 + 9) + 32LL) + 8LL);
  while ( 1 )
  {
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(v6);
    v23 = (struct _SLIST_ENTRY *)*((_QWORD *)v6 + 17);
    v24 = NextRange;
    if ( v23 && v23 != v8 )
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v20, v23);
    if ( v6 != (struct VIDMM_RECYCLE_RANGE *)a4 )
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v20, v6, v22);
    if ( v6 == (struct VIDMM_RECYCLE_RANGE *)a3 )
      break;
    v6 = v24;
  }
  a4[16] = v17;
  v17->Next = (struct _SLIST_ENTRY *)(a4 + 15);
  a4[15] = v18;
  *((_QWORD *)&v18->Next + 1) = a4 + 15;
}
