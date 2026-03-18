/*
 * XREFs of EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1406366B8
 * Callers:
 *     EtwpCovSampCaptureCleanupLookasides @ 0x140635DB8 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1409EF0D4 (EtwpCovSampCaptureFreeLookasides.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140429900 (RtlpInterlockedFlushSList.c)
 *     EtwpCovSampPushListSList @ 0x140460ED0 (EtwpCovSampPushListSList.c)
 */

__int64 __fastcall EtwpCovSampLookasideFlushFreeListToCleanupList(union _SLIST_HEADER *a1)
{
  unsigned __int64 Alignment; // rdi
  unsigned int v2; // ebx
  struct _SLIST_ENTRY *v3; // rax
  ULONG v5; // [rsp+30h] [rbp+8h] BYREF

  Alignment = a1[2].Alignment;
  v2 = 0;
  v5 = 0;
  v3 = RtlpInterlockedFlushSList(a1);
  if ( v3 )
  {
    EtwpCovSampPushListSList((union _SLIST_HEADER *)Alignment, v3, &v5);
    _InterlockedExchangeAdd((volatile signed __int32 *)(Alignment + 76), v5);
    return v5;
  }
  return v2;
}
