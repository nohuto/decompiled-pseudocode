/*
 * XREFs of CmpBounceContextCleanup @ 0x1405E9380
 * Callers:
 *     NtEnumerateValueKey @ 0x1405E8E00 (NtEnumerateValueKey.c)
 *     NtQueryMultipleValueKey @ 0x140654D60 (NtQueryMultipleValueKey.c)
 *     NtEnumerateKey @ 0x140672B00 (NtEnumerateKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

void __fastcall CmpBounceContextCleanup(__int64 a1)
{
  _SLIST_ENTRY *v1; // r8

  v1 = *(_SLIST_ENTRY **)(a1 + 8);
  if ( v1 && v1 != *(_SLIST_ENTRY **)a1 && v1 != (_SLIST_ENTRY *)(a1 + 17) )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      ++dword_140CDB55C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CDB550 )
      {
        ++dword_140CDB560;
        ((void (__fastcall *)(_SLIST_ENTRY *, _SLIST_HEADER *))qword_140CDB578)(v1, &CmpBounceBufferLookaside);
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
