/*
 * XREFs of EtwpReferenceGuidEntry @ 0x1406DB204
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x14039F178 (EtwGetProviderIdFromHandle.c)
 *     EtwpCreateUmReplyObject @ 0x1405FB2BC (EtwpCreateUmReplyObject.c)
 *     EtwpAddRegEntryToGroup @ 0x140638390 (EtwpAddRegEntryToGroup.c)
 *     EtwpGetNextGuidEntry @ 0x1406B82EC (EtwpGetNextGuidEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1406BA238 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x1406BAE90 (EtwpAddGuidEntry.c)
 *     EtwpAddUmRegEntry @ 0x1406DA4F0 (EtwpAddUmRegEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406DB110 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddKmRegEntry @ 0x1407631D0 (EtwpAddKmRegEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
