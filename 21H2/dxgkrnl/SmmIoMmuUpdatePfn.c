/*
 * XREFs of SmmIoMmuUpdatePfn @ 0x1C006DCC8
 * Callers:
 *     SmmIoMmuReferenceMdl @ 0x1C006DA40 (SmmIoMmuReferenceMdl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     SmmIoMmuCompareIoMmuPagePfn @ 0x1C002FB30 (SmmIoMmuCompareIoMmuPagePfn.c)
 *     SmmIoMmuAllocatePage @ 0x1C006D894 (SmmIoMmuAllocatePage.c)
 */

__int64 __fastcall SmmIoMmuUpdatePfn(__int64 a1, struct _SLIST_ENTRY *a2, char a3)
{
  PSLIST_ENTRY Page; // rbx
  unsigned int v7; // edi
  int v8; // eax
  struct _SLIST_ENTRY *v11; // [rsp+50h] [rbp+8h] BYREF

  Page = *(PSLIST_ENTRY *)a1;
  v11 = a2;
  v7 = 0;
  while ( Page )
  {
    v8 = SmmIoMmuCompareIoMmuPagePfn(&v11, (__int64)Page);
    if ( v8 >= 0 )
    {
      if ( v8 <= 0 )
        break;
      Page = (PSLIST_ENTRY)*((_QWORD *)&Page->Next + 1);
    }
    else
    {
      Page = Page->Next;
    }
  }
  if ( a3 )
  {
    if ( !Page )
    {
      Page = SmmIoMmuAllocatePage(a1, a2);
      if ( !Page )
        return 3221225495LL;
      v7 = 259;
    }
    ++*((_DWORD *)&Page[1].Next + 2);
  }
  else
  {
    if ( !Page )
      WdLogSingleEntry5(0LL, 275LL, 45LL, a2, 0LL, 0LL);
    if ( (*((_DWORD *)&Page[1].Next + 2))-- == 1 )
    {
      RtlAvlRemoveNode(a1, Page);
      ++*(_DWORD *)(a1 + 44);
      if ( ExQueryDepthSList((PSLIST_HEADER)(a1 + 16)) < *(_WORD *)(a1 + 32) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 16), Page);
      }
      else
      {
        ++*(_DWORD *)(a1 + 48);
        (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(a1 + 72))(Page, a1 + 16);
      }
      return 259;
    }
  }
  return v7;
}
