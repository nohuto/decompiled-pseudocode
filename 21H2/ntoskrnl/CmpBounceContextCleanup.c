/*
 * XREFs of CmpBounceContextCleanup @ 0x1406A185C
 * Callers:
 *     NtEnumerateValueKey @ 0x1406A1370 (NtEnumerateValueKey.c)
 *     NtQueryMultipleValueKey @ 0x140713980 (NtQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall CmpBounceContextCleanup(__int64 a1)
{
  struct _SLIST_ENTRY *v2; // rcx

  v2 = *(struct _SLIST_ENTRY **)(a1 + 8);
  if ( v2 && v2 != *(struct _SLIST_ENTRY **)a1 && v2 != (struct _SLIST_ENTRY *)(a1 + 17) )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      ++dword_140CE241C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CE2410 )
      {
        ++dword_140CE2420;
        ((void (__fastcall *)(struct _SLIST_ENTRY *, union _SLIST_HEADER *))qword_140CE2438)(
          v2,
          &CmpBounceBufferLookaside);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, v2);
      }
    }
    else
    {
      CmSiFreeMemory((PPRIVILEGE_SET)v2);
    }
  }
}
