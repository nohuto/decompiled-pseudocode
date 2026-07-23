/*
 * XREFs of ObFastReplaceObject @ 0x140301BD0
 * Callers:
 *     MmChangeSectionBackingFile @ 0x140241634 (MmChangeSectionBackingFile.c)
 *     CcDeleteSharedCacheMap @ 0x1402FEB2C (CcDeleteSharedCacheMap.c)
 *     CcChangeBackingFileObject @ 0x1404E8D28 (CcChangeBackingFileObject.c)
 *     SeDeassignPrimaryToken @ 0x14067DBD4 (SeDeassignPrimaryToken.c)
 *     MiCreateImageFileMap @ 0x1406AA6D4 (MiCreateImageFileMap.c)
 *     MiSegmentDelete @ 0x1406FF4F0 (MiSegmentDelete.c)
 *     MiCreateImageOrDataSection @ 0x14071E2F0 (MiCreateImageOrDataSection.c)
 *     SeExchangePrimaryToken @ 0x1407BC3D4 (SeExchangePrimaryToken.c)
 *     PsShutdownSystem @ 0x14090AB54 (PsShutdownSystem.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x14021B6A0 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x14023A834 (ObpDeferObjectDeletion.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x1402EE9C0 (ObpTraceObjectDereferenceIfActive.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ObFastReplaceObject(volatile __int64 *a1, ULONG_PTR a2)
{
  __int64 v4; // rbx
  ULONG_PTR v5; // rdi
  unsigned int v6; // ebx
  ULONG_PTR v7; // rsi
  signed __int64 BugCheckParameter4; // rcx

  if ( a2 )
    ObReferenceObjectExWithTag(a2, 15);
  v4 = _InterlockedExchange64(a1, (a2 | 0xF) & -(__int64)(a2 != 0));
  v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v6 = v4 & 0xF;
    if ( v6 )
    {
      v7 = v5 - 48;
      ObpTraceObjectDereferenceIfActive(v5 - 48);
      BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 48), -v6) - v6;
      if ( BugCheckParameter4 <= 0 )
      {
        if ( *(_QWORD *)(v7 + 8) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v7 + 24) ^ (unsigned __int64)BYTE1(v7)],
            v5,
            6uLL,
            *(_QWORD *)(v7 + 8));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, v5, 5uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(v5 - 48);
      }
    }
  }
  return v5;
}
