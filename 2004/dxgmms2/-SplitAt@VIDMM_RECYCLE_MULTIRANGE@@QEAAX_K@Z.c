/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C0079B80
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0078F40 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0077F8C (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C0079F80 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007A364 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C007A860 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0084CD0 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::SplitAt(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2)
{
  struct VIDMM_RECYCLE_RANGE *NextRange; // rdi
  struct _SLIST_ENTRY *i; // rbp
  struct _SLIST_ENTRY *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r12
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r15
  __int64 v16; // rax
  PSLIST_ENTRY v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  CCHAR LeastSignificantBit; // al
  __int64 v21; // rdx
  __int64 v22; // rax
  struct _SLIST_ENTRY *Next; // r14
  _QWORD *v24; // rcx
  struct VIDMM_RECYCLE_RANGE *j; // rdi
  int v26; // eax
  int v27; // eax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r8
  struct _RTL_BALANCED_NODE *v31; // rdi
  __int64 v32; // rax
  struct _RTL_BALANCED_NODE *v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  _QWORD *v36; // rax
  _QWORD v37[2]; // [rsp+30h] [rbp-48h] BYREF
  char v38; // [rsp+40h] [rbp-38h]
  int v39; // [rsp+80h] [rbp+8h] BYREF

  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  for ( i = (struct _SLIST_ENTRY *)(a2 + *((_QWORD *)this + 4));
        NextRange;
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
  {
    if ( *((_QWORD *)NextRange + 4) <= (unsigned __int64)i && *((_QWORD *)NextRange + 5) > (unsigned __int64)i )
      break;
  }
  v5 = (struct _SLIST_ENTRY *)*((_QWORD *)NextRange + 4);
  if ( v5 == i )
  {
    PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(NextRange);
  }
  else
  {
    LOBYTE(v39) = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(NextRange, (char *)i - (char *)v5, (bool *)&v39);
    if ( !(_BYTE)v39 )
    {
      v34 = WdLogNewEntry5_WdWarning(v7, v6);
      *(_QWORD *)(v34 + 24) = this;
      *(_QWORD *)(v34 + 32) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v34);
      return;
    }
    if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) && *((_QWORD *)NextRange + 5) != *((_QWORD *)this + 5) )
      *((_QWORD *)this + 9) = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    PreviousRange = NextRange;
    v9 = *((_QWORD *)NextRange + 15);
    if ( v9 == *((_QWORD *)NextRange + 9) + 72LL )
      NextRange = 0LL;
    else
      NextRange = (struct VIDMM_RECYCLE_RANGE *)(v9 - 120);
  }
  v10 = *((_QWORD *)this + 5);
  v11 = *((_QWORD *)this + 10);
  v39 = *((_DWORD *)this + 54);
  v12 = *(_QWORD *)(v11 + 32);
  v13 = *(_QWORD *)(v12 + 8);
  v14 = *(_DWORD *)(v13 + 1612);
  v15 = *(_QWORD *)(v13 + 1320);
  if ( v14 )
  {
    v16 = (unsigned int)(v14 - 1);
    v17 = *(PSLIST_ENTRY *)(v13 + 8 * v16 + 1648);
    *(_QWORD *)(v13 + 8 * v16 + 1648) = 0LL;
    --*(_DWORD *)(v13 + 1612);
  }
  else
  {
    ++*(_DWORD *)(v15 + 20);
    v17 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v15);
    if ( !v17 )
    {
      ++*(_DWORD *)(v15 + 24);
      v17 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v15 + 48))(
                            *(unsigned int *)(v15 + 36),
                            *(unsigned int *)(v15 + 44),
                            *(unsigned int *)(v15 + 40),
                            v15);
    }
  }
  if ( v17 )
  {
    v18 = WdLogNewEntry5_WdEvent(v12, v13);
    *(_QWORD *)(v18 + 24) = v17;
    WdLogEvent5_WdEvent(v18);
    v19 = v39;
    v17[2].Next = i;
    *((_DWORD *)&v17[13].Next + 2) = v19;
    *((_DWORD *)&v17[1].Next + 2) = 1;
    v17[4].Next = 0LL;
    *((_QWORD *)&v17[4].Next + 1) = 0LL;
    v17[5].Next = (struct _SLIST_ENTRY *)v11;
    *((_QWORD *)&v17[2].Next + 1) = v10;
    v17[3].Next = i;
    LOWORD(v17[8].Next) = 0;
    ++*(_QWORD *)(v11 + 8);
    LeastSignificantBit = RtlFindLeastSignificantBit((ULONGLONG)v17[2].Next);
    if ( LeastSignificantBit < 0 )
      v22 = 0LL;
    else
      v22 = 1LL << LeastSignificantBit;
    *((_QWORD *)&v17[3].Next + 1) = v22;
    Next = v17[5].Next;
    *((_QWORD *)&v17[5].Next + 1) = 3LL;
    v17[6].Next = 0LL;
    *((_QWORD *)&v17[6].Next + 1) = 0LL;
    v17[7].Next = 0LL;
    *((_QWORD *)&v17[7].Next + 1) = 0LL;
    BYTE2(v17[8].Next) = 0;
    *((_QWORD *)&v17[8].Next + 1) = 0LL;
    v17[9].Next = 0LL;
    v17[12].Next = 0LL;
    *((_WORD *)&v17[9].Next + 4) = 0;
    v17[10].Next = 0LL;
    *((_QWORD *)&v17[10].Next + 1) = 0LL;
    *((_QWORD *)&v17[11].Next + 1) = 0LL;
    v17[11].Next = 0LL;
    *((_QWORD *)&v17[12].Next + 1) = 0LL;
    v17[13].Next = 0LL;
    *((_BYTE *)&v17[14].Next + 8) = 0;
    v17[14].Next = 0LL;
    v24 = (_QWORD *)*((_QWORD *)&Next[8].Next + 1);
    if ( v24 )
    {
      v35 = v24[3] + 144LL * v24[4];
      *(_DWORD *)v35 = 0;
      *(_QWORD *)(v35 + 8) = v17;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v35 + 16), 0LL);
      ++*(_QWORD *)(*((_QWORD *)&Next[8].Next + 1) + 32LL);
      v24 = (_QWORD *)*((_QWORD *)&Next[8].Next + 1);
      if ( v24[4] == v24[6] )
      {
        v24[4] = 0LL;
        *(_BYTE *)(*((_QWORD *)&Next[8].Next + 1) + 40LL) = 1;
      }
    }
    v17[4].Next = (struct _SLIST_ENTRY *)NextRange;
    *((_QWORD *)&v17[4].Next + 1) = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = PreviousRange;
    *((_QWORD *)this + 5) = i;
    for ( j = (struct VIDMM_RECYCLE_RANGE *)v17[4].Next; ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
    {
      v26 = *((_DWORD *)&v17[13].Next + 2);
      if ( v26 == 1 )
      {
        *((_QWORD *)j + 18) = v17;
      }
      else if ( v26 )
      {
        if ( v26 == 2 )
        {
          *((_QWORD *)j + 19) = v17;
        }
        else
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v21);
          v36[3] = 270LL;
          v36[4] = 52LL;
          v36[5] = 10LL;
          v36[6] = 0LL;
          v36[7] = 0LL;
          WdLogEvent5_WdCriticalError(v36);
        }
      }
      else
      {
        *((_QWORD *)j + 17) = v17;
      }
      if ( j == *((struct VIDMM_RECYCLE_RANGE **)&v17[4].Next + 1) )
        break;
    }
    v27 = *((_DWORD *)this + 54);
    if ( v27 != 1 )
    {
      if ( v27 )
      {
        if ( v27 == 2 )
          VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL), 0LL, v17);
      }
      else
      {
        VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL), 2LL, v17);
      }
      return;
    }
    v28 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
    v29 = WdLogNewEntry5_WdEvent(v24, v21);
    *(_QWORD *)(v29 + 24) = v17;
    *(_QWORD *)(v29 + 32) = 1LL;
    WdLogEvent5_WdEvent(v29);
    LOBYTE(v30) = 0;
    v31 = *(struct _RTL_BALANCED_NODE **)(v28 + 56);
    v32 = *((_QWORD *)&v17[3].Next + 1);
    v37[0] = *((_QWORD *)&v17[2].Next + 1) - (unsigned __int64)v17[2].Next;
    v37[1] = v32;
    v38 = 0;
    if ( !v31 )
      goto LABEL_27;
    while ( 1 )
    {
      if ( (int)VidMmCompareForInsertAlignedRange(v37, v31) < 0 )
      {
        v33 = v31->Children[0];
        if ( !v31->Children[0] )
        {
          LOBYTE(v30) = 0;
          goto LABEL_27;
        }
      }
      else
      {
        v33 = v31->Children[1];
        if ( !v33 )
        {
          LOBYTE(v30) = 1;
LABEL_27:
          RtlAvlInsertNodeEx(v28 + 56, v31, v30, v17);
          *((_DWORD *)&v17[5].Next + 2) = 1;
          return;
        }
      }
      v31 = v33;
    }
  }
}
