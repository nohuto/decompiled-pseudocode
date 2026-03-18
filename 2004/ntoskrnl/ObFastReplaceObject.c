/*
 * XREFs of ObFastReplaceObject @ 0x1402C686C
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1402C655C (CcDeleteSharedCacheMap.c)
 *     MmChangeSectionBackingFile @ 0x140351314 (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x1404E39C8 (CcChangeBackingFileObject.c)
 *     MiCreateImageOrDataSection @ 0x1405FB740 (MiCreateImageOrDataSection.c)
 *     MiSegmentDelete @ 0x1406091B4 (MiSegmentDelete.c)
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 *     SeDeassignPrimaryToken @ 0x14061AEC4 (SeDeassignPrimaryToken.c)
 *     SeExchangePrimaryToken @ 0x1407A5F18 (SeExchangePrimaryToken.c)
 *     PsShutdownSystem @ 0x140907624 (PsShutdownSystem.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140212170 (ObpTraceObjectDereferenceIfActive.c)
 *     ObReferenceObjectExWithTag @ 0x14032EFF0 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1403494E0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ObFastReplaceObject(volatile __int64 *a1, ULONG_PTR a2)
{
  __int64 v4; // rbx
  ULONG_PTR v5; // rdi
  unsigned int v6; // ebx
  ULONG_PTR v7; // rsi
  __int64 v8; // rdx
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
        ObpDeferObjectDeletion(v5 - 48, v8);
      }
    }
  }
  return v5;
}
