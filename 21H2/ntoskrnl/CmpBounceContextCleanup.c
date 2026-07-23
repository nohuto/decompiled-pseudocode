/*
 * XREFs of CmpBounceContextCleanup @ 0x1406E45D0
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140601D50 (NtQueryMultipleValueKey.c)
 *     NtEnumerateKey @ 0x1406E35B0 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1406E4050 (NtEnumerateValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __fastcall CmpBounceContextCleanup(__int64 a1)
{
  _SLIST_ENTRY *v1; // r8

  v1 = *(_SLIST_ENTRY **)(a1 + 8);
  if ( v1 && v1 != *(_SLIST_ENTRY **)a1 && v1 != (_SLIST_ENTRY *)(a1 + 17) )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      ++dword_140CDB95C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CDB950 )
      {
        ++dword_140CDB960;
        ((void (__fastcall *)(_SLIST_ENTRY *, _SLIST_HEADER *))qword_140CDB978)(v1, &CmpBounceBufferLookaside);
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
