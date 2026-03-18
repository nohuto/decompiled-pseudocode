/*
 * XREFs of ObFastReplaceObject @ 0x140248084
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x140247C98 (CcDeleteSharedCacheMap.c)
 *     MmChangeSectionBackingFile @ 0x1403218A4 (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x1404E6F58 (CcChangeBackingFileObject.c)
 *     SeDeassignPrimaryToken @ 0x1406614F4 (SeDeassignPrimaryToken.c)
 *     MiCreateImageOrDataSection @ 0x14067FCA0 (MiCreateImageOrDataSection.c)
 *     MiSegmentDelete @ 0x140681F74 (MiSegmentDelete.c)
 *     MiCreateImageFileMap @ 0x1407084A8 (MiCreateImageFileMap.c)
 *     SeExchangePrimaryToken @ 0x1407B6FE4 (SeExchangePrimaryToken.c)
 *     PsShutdownSystem @ 0x14090D244 (PsShutdownSystem.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x14028A530 (ObpTraceObjectDereferenceIfActive.c)
 *     ObReferenceObjectExWithTag @ 0x140302C00 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x14031A0E0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ObFastReplaceObject(volatile __int64 *a1, ULONG_PTR a2)
{
  __int64 v4; // rbx
  ULONG_PTR v5; // rdi
  unsigned int v6; // ebx
  ULONG_PTR v7; // rsi
  signed __int64 BugCheckParameter4; // rcx

  if ( a2 )
    ObReferenceObjectExWithTag(a2);
  v4 = _InterlockedExchange64(a1, (a2 | 0xF) & -(__int64)(a2 != 0));
  v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v6 = v4 & 0xF;
    if ( v6 )
    {
      v7 = v5 - 48;
      ObpTraceObjectDereferenceIfActive(v5 - 48, v6, 1953261124LL);
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
