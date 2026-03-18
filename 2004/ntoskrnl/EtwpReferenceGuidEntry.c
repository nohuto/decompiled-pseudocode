/*
 * XREFs of EtwpReferenceGuidEntry @ 0x14066E2C4
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x14039C298 (EtwGetProviderIdFromHandle.c)
 *     EtwpUpdateGuidEnableInfo @ 0x14063629C (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x1406369BC (EtwpAddGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x14066BC00 (EtwpAddRegEntryToGroup.c)
 *     EtwpAddUmRegEntry @ 0x14066E008 (EtwpAddUmRegEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x14066E1D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpGetNextGuidEntry @ 0x1406C7118 (EtwpGetNextGuidEntry.c)
 *     EtwpCreateUmReplyObject @ 0x14070FC0C (EtwpCreateUmReplyObject.c)
 *     EtwpAddKmRegEntry @ 0x14074FC40 (EtwpAddKmRegEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
