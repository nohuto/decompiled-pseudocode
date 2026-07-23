/*
 * XREFs of CmpBounceContextCleanup @ 0x14061E9A0
 * Callers:
 *     NtEnumerateKey @ 0x1405FAA20 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x14061E420 (NtEnumerateValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1406572C0 (NtQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

void __fastcall CmpBounceContextCleanup(__int64 a1)
{
  _SLIST_ENTRY *v1; // r8

  v1 = *(_SLIST_ENTRY **)(a1 + 8);
  if ( v1 && v1 != *(_SLIST_ENTRY **)a1 && v1 != (_SLIST_ENTRY *)(a1 + 17) )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      ++dword_140CDB69C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CDB690 )
      {
        ++dword_140CDB6A0;
        ((void (__fastcall *)(_SLIST_ENTRY *, _SLIST_HEADER *))qword_140CDB6B8)(v1, &CmpBounceBufferLookaside);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, v1);
      }
    }
    else
    {
      CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 8));
    }
  }
}
