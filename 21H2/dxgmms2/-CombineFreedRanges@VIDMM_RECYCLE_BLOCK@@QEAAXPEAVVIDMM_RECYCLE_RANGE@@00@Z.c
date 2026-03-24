/*
 * XREFs of ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1C00C0EF0
 * Callers:
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007665C (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 * Callees:
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0077220 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007B8B4 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007BA30 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007BCF8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008A7C0 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C0AB0 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C190C (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::CombineFreedRanges(
        VIDMM_RECYCLE_BLOCK *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3,
        struct VIDMM_RECYCLE_RANGE *a4)
{
  _QWORD *v7; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *v8; // rsi
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbp
  char v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r15
  _QWORD *v15; // r12
  _QWORD *v16; // rcx
  char v17; // bp
  VIDMM_RECYCLE_HEAP_MGR *v18; // r15
  struct VIDMM_RECYCLE_RANGE *v19; // rax
  __int64 v20; // r8
  struct VIDMM_RECYCLE_MULTIRANGE *v21; // rdx
  struct VIDMM_RECYCLE_RANGE *v22; // rax
  struct VIDMM_RECYCLE_RANGE *v23; // [rsp+60h] [rbp+8h]
  __int64 v24; // [rsp+68h] [rbp+10h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v7[3] = a2;
    v7[4] = a4;
    v7[5] = a3;
    v7[6] = *((_QWORD *)a2 + 9);
  }
  v8 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)a4 + 17);
  NextRange = a2;
  v10 = 0;
  do
  {
    v11 = *(_QWORD *)(*((_QWORD *)NextRange + 9) + 32LL);
    if ( *((_DWORD *)NextRange + 22) == 2 )
    {
      VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v11, 2LL, NextRange);
    }
    else
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v11, 2LL, *((_QWORD *)NextRange + 17));
      if ( !v8 )
        v8 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)NextRange + 17);
    }
    if ( NextRange == a3 )
      v10 = 1;
    else
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  }
  while ( !v10 );
  v13 = *((_QWORD *)a2 + 4);
  v14 = *((_QWORD *)a3 + 5);
  v15 = (_QWORD *)*((_QWORD *)a2 + 16);
  v24 = *((_QWORD *)a3 + 15);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = v8;
  *((_QWORD *)a4 + 4) = v13;
  *((_QWORD *)a4 + 5) = v14;
  if ( v8 )
  {
    *((_QWORD *)v8 + 4) = v13;
    *((_QWORD *)v8 + 5) = v14;
    *((_QWORD *)v8 + 8) = a4;
    *((_QWORD *)v8 + 9) = a4;
    *((_QWORD *)a4 + 17) = v8;
  }
  v16 = *(_QWORD **)(*((_QWORD *)a4 + 9) + 32LL);
  if ( v8 )
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v16, 2LL, (__int64)v8);
  else
    VIDMM_RECYCLE_HEAP::AddRangeToTree(v16, 2LL, (__int64)a4);
  v17 = 0;
  v18 = *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)a2 + 9) + 32LL) + 8LL);
  do
  {
    v19 = VIDMM_RECYCLE_RANGE::GetNextRange(a2);
    v21 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)a2 + 17);
    v23 = v19;
    if ( v21 && v21 != v8 )
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v18, v21);
    if ( a2 != a4 )
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v18, a2, v20);
    v22 = v23;
    if ( a2 == a3 )
    {
      v22 = a2;
      v17 = 1;
    }
    a2 = v22;
  }
  while ( !v17 );
  *((_QWORD *)a4 + 16) = v15;
  *v15 = (char *)a4 + 120;
  *((_QWORD *)a4 + 15) = v24;
  *(_QWORD *)(v24 + 8) = (char *)a4 + 120;
}
