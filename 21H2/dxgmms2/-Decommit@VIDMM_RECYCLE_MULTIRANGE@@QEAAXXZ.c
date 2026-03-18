/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C007F02C
 * Callers:
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007EE40 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C007F0F4 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007FA70 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BBC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Decommit(PSLIST_ENTRY ListEntry)
{
  VIDMM_RECYCLE_RANGE *i; // rdi
  struct _SLIST_ENTRY *Next; // rdx
  struct _SLIST_ENTRY *v4; // rcx
  __int64 v5; // rsi
  struct _SLIST_ENTRY *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rcx

  for ( i = (VIDMM_RECYCLE_RANGE *)ListEntry[4].Next; ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    VIDMM_RECYCLE_RANGE::Decommit(i);
    if ( i == *((VIDMM_RECYCLE_RANGE **)&ListEntry[4].Next + 1) )
      break;
  }
  if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
          (VIDMM_RECYCLE_HEAP *)ListEntry[5].Next[2].Next,
          (struct VIDMM_RECYCLE_MULTIRANGE *)ListEntry) )
  {
    Next = ListEntry[5].Next;
    v4 = ListEntry[6].Next;
    v5 = *((_QWORD *)&Next[2].Next->Next + 1);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      ListEntry[6].Next = 0LL;
      Next = ListEntry[5].Next;
    }
    --*((_QWORD *)&Next->Next + 1);
    ListEntry[14].Next = 0LL;
    v6 = ListEntry[5].Next;
    *((_BYTE *)&ListEntry[14].Next + 8) = 1;
    v7 = *((_QWORD *)&v6[8].Next + 1);
    if ( v7 )
    {
      v10 = *(_QWORD *)(v7 + 24) + 144LL * *(_QWORD *)(v7 + 32);
      *(_DWORD *)v10 = 1;
      *(_QWORD *)(v10 + 8) = ListEntry;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v10 + 16), 0LL);
      ++*(_QWORD *)(*((_QWORD *)&v6[8].Next + 1) + 32LL);
      v11 = *((_QWORD *)&v6[8].Next + 1);
      if ( *(_QWORD *)(v11 + 32) == *(_QWORD *)(v11 + 48) )
      {
        *(_QWORD *)(v11 + 32) = 0LL;
        *(_BYTE *)(*((_QWORD *)&v6[8].Next + 1) + 40LL) = 1;
      }
    }
    v8 = *(unsigned int *)(v5 + 1620);
    v9 = *(_QWORD *)(v5 + 1320);
    if ( (unsigned int)v8 >= 4 )
    {
      ++*(_DWORD *)(v9 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v9) < *(_WORD *)(v9 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v9, ListEntry);
      }
      else
      {
        ++*(_DWORD *)(v9 + 32);
        (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v9 + 56))(ListEntry, v9);
      }
    }
    else
    {
      *(_QWORD *)(v5 + 8 * v8 + 1656) = ListEntry;
      ++*(_DWORD *)(v5 + 1620);
    }
  }
}
