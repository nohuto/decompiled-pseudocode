/*
 * XREFs of ??_EDXGTHREAD@@UEAAPEAXI@Z @ 0x1C000CD90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

PSLIST_ENTRY __fastcall DXGTHREAD::`vector deleting destructor'(PSLIST_ENTRY ListEntry, char a2)
{
  int v5; // edx
  int v6; // r8d

  LODWORD(ListEntry[2].Next) = 1409316932;
  ListEntry->Next = (struct _SLIST_ENTRY *)&ReferenceCounted::`vftable';
  if ( *((_DWORD *)&ListEntry->Next + 2) )
  {
    WdLogSingleEntry1(2LL, *((int *)&ListEntry->Next + 2));
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          *((_DWORD *)&ListEntry->Next + 2),
          v5,
          v6,
          0,
          0,
          -1,
          (__int64)L"Reference counted instance being destroyed still has %I64d outstanding references on it!",
          *((int *)&ListEntry->Next + 2),
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( (a2 & 1) != 0 )
  {
    ++dword_1C008402C;
    if ( ExQueryDepthSList(&g_DxgkThreadLookasideList) < (unsigned __int16)word_1C0084020 )
    {
      ExpInterlockedPushEntrySList(&g_DxgkThreadLookasideList, ListEntry);
    }
    else
    {
      ++dword_1C0084030;
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))qword_1C0084048)(ListEntry, &g_DxgkThreadLookasideList);
    }
  }
  return ListEntry;
}
