/*
 * XREFs of EtwpReferenceGuidEntry @ 0x1405F4B34
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x14039F3E8 (EtwGetProviderIdFromHandle.c)
 *     EtwpAddUmRegEntry @ 0x1405F3230 (EtwpAddUmRegEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405F4A40 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x140669A60 (EtwpAddRegEntryToGroup.c)
 *     EtwpCreateUmReplyObject @ 0x1406C01A8 (EtwpCreateUmReplyObject.c)
 *     EtwpGetNextGuidEntry @ 0x140717B6C (EtwpGetNextGuidEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140719440 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x14071A098 (EtwpAddGuidEntry.c)
 *     EtwpAddKmRegEntry @ 0x14075E820 (EtwpAddKmRegEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

char __fastcall EtwpReferenceGuidEntry(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v1; // r8
  signed __int64 v2; // rax

  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  v1 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 32), v1 + 1, v1);
    if ( v1 == v2 )
      break;
    v1 = v2;
    if ( !v2 )
      return 0;
  }
  if ( v1 < 0 )
    KeBugCheckEx(0x11Du, 9uLL, BugCheckParameter2, 0LL, 0LL);
  return 1;
}
