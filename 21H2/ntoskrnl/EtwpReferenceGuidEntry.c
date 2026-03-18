/*
 * XREFs of EtwpReferenceGuidEntry @ 0x140796BF4
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x14025A19C (EtwGetProviderIdFromHandle.c)
 *     EtwpCreateUmReplyObject @ 0x1406B8E18 (EtwpCreateUmReplyObject.c)
 *     EtwpUpdateGuidEnableInfo @ 0x14078FA54 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x140792A4C (EtwpAddGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x140794F30 (EtwpAddRegEntryToGroup.c)
 *     EtwpInitializeRegEntry @ 0x1407963F8 (EtwpInitializeRegEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1407968D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpGetNextGuidEntry @ 0x1407969D0 (EtwpGetNextGuidEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
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
