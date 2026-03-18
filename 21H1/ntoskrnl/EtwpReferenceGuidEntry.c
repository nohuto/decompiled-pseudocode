/*
 * XREFs of EtwpReferenceGuidEntry @ 0x1405F6224
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x14039BB08 (EtwGetProviderIdFromHandle.c)
 *     EtwpGetNextGuidEntry @ 0x1405F35EC (EtwpGetNextGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x1405F4850 (EtwpAddRegEntryToGroup.c)
 *     EtwpAddUmRegEntry @ 0x1405F4F98 (EtwpAddUmRegEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405F6130 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x14067EDA8 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x14067F4C8 (EtwpAddGuidEntry.c)
 *     EtwpCreateUmReplyObject @ 0x1406EC0EC (EtwpCreateUmReplyObject.c)
 *     EtwpAddKmRegEntry @ 0x14074B820 (EtwpAddKmRegEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
