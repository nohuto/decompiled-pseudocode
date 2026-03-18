/*
 * XREFs of ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C007E450
 * Callers:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C007F7CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C000124C (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ?UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0001500 (-UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0001528 (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x1C0032470 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ?AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z @ 0x1C007E930 (-AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C0080F20 (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008110C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081380 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeRanges(
        VIDMM_RECYCLE_BLOCK **this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3)
{
  VIDMM_RECYCLE_MULTIRANGE *v3; // rsi
  __int64 v4; // r13
  int v6; // ecx
  struct VIDMM_RECYCLE_RANGE *v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rax
  char v14; // bp
  __int64 v15; // rdx
  struct VIDMM_RECYCLE_RANGE *v16; // r15
  struct VIDMM_RECYCLE_BLOCK *v17; // rdx
  struct VIDMM_RECYCLE_BLOCK *v18; // rax
  struct VIDMM_RECYCLE_BLOCK **v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rbp
  _QWORD *v25; // rcx
  VIDMM_RECYCLE_BLOCK *v26; // rcx
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // rbp
  struct VIDMM_RECYCLE_BLOCK *v30; // rdi
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rsi
  __int64 v34; // rax
  PSLIST_ENTRY v35; // rbx
  VIDMM_RECYCLE_BLOCK *v36; // rcx
  __int64 v37; // rdx
  int v38; // ecx
  __int64 v39; // rax
  struct _SLIST_ENTRY *v40; // rdx
  __int64 v41; // rdx
  bool v42; // dl
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  char v47; // [rsp+60h] [rbp-98h]
  char v48; // [rsp+61h] [rbp-97h]
  char v49; // [rsp+62h] [rbp-96h]
  bool v50; // [rsp+63h] [rbp-95h]
  bool v51; // [rsp+64h] [rbp-94h]
  char v52; // [rsp+65h] [rbp-93h]
  int v53; // [rsp+68h] [rbp-90h] BYREF
  unsigned int v54; // [rsp+6Ch] [rbp-8Ch]
  int v55; // [rsp+70h] [rbp-88h]
  int v56; // [rsp+74h] [rbp-84h]
  unsigned __int64 v57; // [rsp+78h] [rbp-80h]
  unsigned __int64 v58; // [rsp+80h] [rbp-78h]
  __int64 v59; // [rsp+88h] [rbp-70h]
  __int64 v60; // [rsp+90h] [rbp-68h]
  struct _SLIST_ENTRY *v61; // [rsp+98h] [rbp-60h]
  __int64 v62; // [rsp+A0h] [rbp-58h]
  bool v64; // [rsp+108h] [rbp+10h]
  bool v65; // [rsp+110h] [rbp+18h]
  bool v66; // [rsp+118h] [rbp+20h]

  v3 = (VIDMM_RECYCLE_MULTIRANGE *)this;
  v4 = *((_QWORD *)a2 + 17);
  v6 = *((_DWORD *)a2 + 16);
  v7 = a2;
  v58 = *((_QWORD *)a2 + 4);
  v57 = *((_QWORD *)a3 + 5);
  v56 = *((_DWORD *)a2 + 23);
  v55 = v6;
  v64 = 0;
  v48 = 0;
  if ( v4 )
  {
    v64 = *(_QWORD *)(v4 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v4 + 72) == a3 )
    {
      v48 = 1;
      v64 = *(_QWORD *)(v4 + 64) == (_QWORD)a2;
    }
  }
  v8 = *((_QWORD *)a2 + 18);
  v65 = 0;
  v49 = 0;
  if ( v8 )
  {
    v65 = *(_QWORD *)(v8 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v8 + 72) == a3 )
    {
      v49 = 1;
      v65 = *(_QWORD *)(v8 + 64) == (_QWORD)a2;
    }
  }
  v9 = *((_QWORD *)a2 + 19);
  v59 = v9;
  v50 = 0;
  v51 = 0;
  if ( v9 )
  {
    v50 = *(_QWORD *)(v9 + 64) == (_QWORD)a2;
    v51 = *(_QWORD *)(v9 + 72) == (_QWORD)a3;
  }
  v10 = *((_QWORD *)a2 + 20);
  v60 = v10;
  v66 = 0;
  v52 = 0;
  if ( v10 )
  {
    v42 = *(_QWORD *)(v10 + 64) == (_QWORD)a2;
    v66 = *(_QWORD *)(v10 + 64) == (_QWORD)v7;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v10 + 72) == a3 )
    {
      v52 = 1;
      v66 = v42;
    }
  }
  v61 = (struct _SLIST_ENTRY *)*((_QWORD *)v7 + 16);
  v11 = *((_QWORD *)a3 + 15);
  v12 = (unsigned int)(v6 - 3);
  v62 = v11;
  v13 = (_QWORD *)*((_QWORD *)v3 + 10);
  v54 = v6 - 3;
  ++*v13;
  v14 = 0;
  v47 = 0;
  v53 = *((_DWORD *)v7 + 20);
  while ( 1 )
  {
    v15 = *((_QWORD *)v7 + 15);
    v16 = 0LL;
    if ( v15 != *((_QWORD *)v7 + 9) + 72LL )
      v16 = (struct VIDMM_RECYCLE_RANGE *)(v15 - 120);
    if ( (unsigned int)v12 <= 2 )
    {
      v17 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v7 + 13);
      v18 = (struct VIDMM_RECYCLE_RANGE *)((char *)v7 + 104);
      if ( *((struct VIDMM_RECYCLE_RANGE **)v17 + 1) != (struct VIDMM_RECYCLE_RANGE *)((char *)v7 + 104)
        || (v19 = (struct VIDMM_RECYCLE_BLOCK **)*((_QWORD *)v7 + 14), *v19 != v18) )
      {
        __fastfail(3u);
      }
      *v19 = v17;
      *((_QWORD *)v17 + 1) = v19;
      *(_QWORD *)v18 = 0LL;
      v20 = *((_DWORD *)v7 + 16);
      *((_QWORD *)v7 + 14) = 0LL;
      *((_QWORD *)v7 + 12) = 0LL;
      if ( v20 == 5 )
      {
        VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(*((_QWORD *)v7 + 4) - *((_QWORD *)v7 + 5), v17);
      }
      else if ( (unsigned int)(v20 - 3) <= 1 )
      {
        VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingUnlock(*((_QWORD *)v7 + 4) - *((_QWORD *)v7 + 5), v17);
      }
    }
    if ( v14 )
      VIDMM_RECYCLE_RANGE::AccumulateZeroingState(v7, (enum VIDMM_RECYCLE_RANGE_ZEROING_STATE *)&v53);
    else
      v47 = 1;
    v21 = *(_QWORD *)(*((_QWORD *)v3 + 10) + 32LL);
    v22 = *(_QWORD *)(v21 + 8);
    if ( (byte_1C006E942 & 2) != 0 )
      McTemplateK0p_EtwWriteTransfer(v21, &EventRecycleRangeDestroy, v12, v7);
    WdLogSingleEntry1(4LL, v7);
    v24 = *((_QWORD *)v7 + 9);
    v25 = *(_QWORD **)(v24 + 136);
    if ( v25 )
    {
      v43 = *v25 + 144LL * v25[1];
      *(_DWORD *)v43 = 1;
      *(_QWORD *)(v43 + 8) = v7;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v43 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v24 + 136) + 8LL);
      v44 = *(_QWORD *)(v24 + 136);
      if ( *(_QWORD *)(v44 + 8) == *(_QWORD *)(v44 + 48) )
      {
        *(_QWORD *)(v44 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v24 + 136) + 16LL) = 1;
      }
    }
    v26 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v7 + 9);
    v27 = (*(_QWORD *)v26)-- == 1LL;
    if ( v27 )
      VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v26);
    *((_BYTE *)v7 + 168) = 1;
    v28 = *(unsigned int *)(v22 + 1616);
    v29 = *(_QWORD *)(v22 + 1312);
    if ( (unsigned int)v28 >= 4 )
    {
      ++*(_DWORD *)(v29 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v29) < *(_WORD *)(v29 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v29, (PSLIST_ENTRY)v7);
      }
      else
      {
        ++*(_DWORD *)(v29 + 32);
        (*(void (__fastcall **)(struct VIDMM_RECYCLE_RANGE *, __int64))(v29 + 56))(v7, v29);
      }
    }
    else
    {
      *(_QWORD *)(v22 + 8 * v28 + 1624) = v7;
      ++*(_DWORD *)(v22 + 1616);
    }
    if ( v7 == a3 )
      break;
    v3 = (VIDMM_RECYCLE_MULTIRANGE *)this;
    v7 = v16;
    v14 = v47;
    v12 = v54;
  }
  v30 = this[10];
  v31 = *(_QWORD *)(*((_QWORD *)v30 + 4) + 8LL);
  v32 = *(_DWORD *)(v31 + 1616);
  v33 = *(_QWORD *)(v31 + 1312);
  if ( v32 )
  {
    v34 = (unsigned int)(v32 - 1);
    v35 = *(PSLIST_ENTRY *)(v31 + 8 * v34 + 1624);
    *(_QWORD *)(v31 + 8 * v34 + 1624) = 0LL;
    --*(_DWORD *)(v31 + 1616);
  }
  else
  {
    ++*(_DWORD *)(v33 + 20);
    v35 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v33);
    if ( !v35 )
    {
      ++*(_DWORD *)(v33 + 24);
      v35 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v33 + 48))(
                            *(unsigned int *)(v33 + 36),
                            *(unsigned int *)(v33 + 44),
                            *(unsigned int *)(v33 + 40),
                            v33);
    }
  }
  if ( v35 )
    VIDMM_RECYCLE_RANGE::Init((VIDMM_RECYCLE_RANGE *)v35, v30, v58, v57);
  v36 = this[10];
  v27 = (*(_QWORD *)v36)-- == 1LL;
  if ( v27 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v36);
  v37 = v60;
  v38 = v55;
  *((_DWORD *)&v35[5].Next + 3) = v56;
  LODWORD(v35[5].Next) = v53;
  v39 = v59;
  *((_QWORD *)&v35[9].Next + 1) = v59;
  LODWORD(v35[4].Next) = v38;
  *((_QWORD *)&v35[8].Next + 1) = v4;
  v35[9].Next = (struct _SLIST_ENTRY *)v8;
  v35[10].Next = (struct _SLIST_ENTRY *)v37;
  if ( v64 )
    *(_QWORD *)(v4 + 64) = v35;
  if ( v48 )
    *(_QWORD *)(v4 + 72) = v35;
  if ( v65 )
    *(_QWORD *)(v8 + 64) = v35;
  if ( v49 )
    *(_QWORD *)(v8 + 72) = v35;
  if ( v50 )
    *(_QWORD *)(v39 + 64) = v35;
  if ( v51 )
    *(_QWORD *)(v39 + 72) = v35;
  if ( v66 )
    *(_QWORD *)(v37 + 64) = v35;
  if ( v52 )
    *(_QWORD *)(v37 + 72) = v35;
  v40 = v61;
  v35[8].Next = v61;
  v40->Next = (PSLIST_ENTRY)((char *)v35 + 120);
  v41 = v62;
  *((_QWORD *)&v35[7].Next + 1) = v62;
  *(_QWORD *)(v41 + 8) = (char *)v35 + 120;
  if ( v38 >= 3 )
  {
    if ( v38 > 4 )
    {
      if ( v38 == 5 )
        VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this[10] + 4) + 8LL),
          (struct VIDMM_RECYCLE_RANGE *)v35);
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this[10] + 4) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v35);
    }
  }
  if ( (byte_1C006E942 & 2) != 0 )
  {
    v45 = (__int64)this[10];
    v46 = *(_QWORD *)(v45 + 32);
    McTemplateK0pppppppqq_EtwWriteTransfer(
      v46,
      v45,
      v23,
      **(_QWORD **)(*(_QWORD *)(v46 + 8) + 8LL),
      v35,
      v45,
      *(_QWORD *)(v45 + 56),
      v46,
      v35[2].Next,
      *((_QWORD *)&v35[2].Next + 1),
      *(_DWORD *)v46,
      LODWORD(v35[4].Next));
  }
}
