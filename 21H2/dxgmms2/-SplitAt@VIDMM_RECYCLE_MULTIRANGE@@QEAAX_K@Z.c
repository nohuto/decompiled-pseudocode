/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C007EB0C
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007F2D8 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0080070 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0080850 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00809B0 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C0080C40 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BBC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BE0 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00A3D5C (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::SplitAt(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2)
{
  char v2; // di
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  unsigned __int64 i; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r12
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r8
  unsigned int v12; // r10d
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r15
  PSLIST_ENTRY v17; // rsi
  int v18; // ecx
  __int64 v19; // r14
  __int64 v20; // r8
  __int64 v21; // rax
  struct _RTL_BALANCED_NODE *v22; // rbx
  struct _RTL_BALANCED_NODE *v23; // rax
  int v24; // ecx
  __int64 v25; // r14
  __int64 v26; // rax
  struct _RTL_BALANCED_NODE *v27; // rbx
  __int64 v28; // r8
  struct _RTL_BALANCED_NODE *v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+38h] [rbp-50h]
  char v33; // [rsp+40h] [rbp-48h]
  unsigned int v34; // [rsp+90h] [rbp+8h] BYREF
  __int64 v35; // [rsp+98h] [rbp+10h]

  v2 = 0;
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  for ( i = a2 + *((_QWORD *)this + 4); NextRange; NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
  {
    if ( *((_QWORD *)NextRange + 4) <= i && *((_QWORD *)NextRange + 5) > i )
      break;
  }
  v6 = *((_QWORD *)NextRange + 4);
  if ( v6 == i )
  {
    PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(NextRange);
  }
  else
  {
    LOBYTE(v34) = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(NextRange, i - v6, (bool *)&v34);
    if ( !(_BYTE)v34 )
    {
      WdLogSingleEntry2(3LL, this, **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL));
      return;
    }
    if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) && *((_QWORD *)NextRange + 5) != *((_QWORD *)this + 5) )
      *((_QWORD *)this + 9) = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    v7 = *((_QWORD *)NextRange + 15);
    PreviousRange = NextRange;
    v9 = *((_QWORD *)NextRange + 9);
    NextRange = 0LL;
    if ( v7 != v9 + 72 )
      NextRange = (struct VIDMM_RECYCLE_RANGE *)(v7 - 120);
  }
  v10 = *((_QWORD *)this + 10);
  v11 = *((_QWORD *)this + 5);
  v12 = *((_DWORD *)this + 54);
  v35 = v11;
  v13 = *(_QWORD *)(v10 + 32);
  v34 = v12;
  v14 = *(_QWORD *)(v13 + 8);
  v15 = *(_DWORD *)(v14 + 1620);
  v16 = *(_QWORD *)(v14 + 1320);
  if ( v15 )
  {
    v30 = (unsigned int)(v15 - 1);
    v17 = *(PSLIST_ENTRY *)(v14 + 8 * v30 + 1656);
    *(_QWORD *)(v14 + 8 * v30 + 1656) = 0LL;
    --*(_DWORD *)(v14 + 1620);
  }
  else
  {
    ++*(_DWORD *)(v16 + 20);
    v17 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v16);
    if ( !v17 )
    {
      ++*(_DWORD *)(v16 + 24);
      v17 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v16 + 48))(
                            *(unsigned int *)(v16 + 36),
                            *(unsigned int *)(v16 + 44),
                            *(unsigned int *)(v16 + 40),
                            v16);
    }
    v11 = v35;
    v12 = v34;
  }
  if ( v17 )
  {
    VIDMM_RECYCLE_MULTIRANGE::Init(v17, v12, v10, i, v11);
    v17[4].Next = (struct _SLIST_ENTRY *)NextRange;
    *((_QWORD *)&v17[4].Next + 1) = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = PreviousRange;
    *((_QWORD *)this + 5) = i;
    VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v17);
    v18 = *((_DWORD *)this + 54);
    if ( !v18 )
    {
      v19 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
      WdLogSingleEntry2(4LL, v17, 2LL);
      v21 = *((_QWORD *)&v17[3].Next + 1);
      v31 = *((_QWORD *)&v17[2].Next + 1) - (unsigned __int64)v17[2].Next;
      v32 = v21;
      v33 = 0;
      v22 = *(struct _RTL_BALANCED_NODE **)(v19 + 64);
      if ( !v22 )
        goto LABEL_31;
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(&v31, v22) < 0 )
        {
          v23 = v22->Children[0];
          if ( !v22->Children[0] )
            goto LABEL_31;
        }
        else
        {
          v23 = v22->Children[1];
          if ( !v23 )
          {
            v2 = 1;
LABEL_31:
            LOBYTE(v20) = v2;
            RtlAvlInsertNodeEx(v19 + 64, v22, v20, v17);
            *((_DWORD *)&v17[5].Next + 2) = 2;
            return;
          }
        }
        v22 = v23;
      }
    }
    v24 = v18 - 1;
    if ( !v24 )
    {
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL), 1LL, v17);
      return;
    }
    if ( v24 == 1 )
    {
      v25 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
      WdLogSingleEntry2(4LL, v17, 0LL);
      v26 = *((_QWORD *)&v17[3].Next + 1);
      v31 = *((_QWORD *)&v17[2].Next + 1) - (unsigned __int64)v17[2].Next;
      v32 = v26;
      v33 = 0;
      v27 = *(struct _RTL_BALANCED_NODE **)(v25 + 48);
      LOBYTE(v28) = 0;
      if ( v27 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(&v31, v27) < 0 )
          {
            v29 = v27->Children[0];
            if ( !v27->Children[0] )
            {
              LOBYTE(v28) = 0;
              break;
            }
          }
          else
          {
            v29 = v27->Children[1];
            if ( !v29 )
            {
              LOBYTE(v28) = 1;
              break;
            }
          }
          v27 = v29;
        }
      }
      RtlAvlInsertNodeEx(v25 + 48, v27, v28, v17);
      *((_DWORD *)&v17[5].Next + 2) = 0;
    }
  }
}
