/*
 * XREFs of ObFastReferenceObject @ 0x140299120
 * Callers:
 *     MiLogPageAccess @ 0x140245760 (MiLogPageAccess.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402C5484 (CcReferenceSharedCacheMapFileObject.c)
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     NtOpenProcessTokenEx @ 0x140667060 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     SeCaptureSubjectContextEx @ 0x14067AEC0 (SeCaptureSubjectContextEx.c)
 *     PsImpersonateClient @ 0x140681160 (PsImpersonateClient.c)
 *     PsReferenceEffectiveToken @ 0x140681A50 (PsReferenceEffectiveToken.c)
 *     SeCreateClientSecurity @ 0x1406821A0 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x140682390 (SeCreateClientSecurityEx.c)
 *     PfQuerySuperfetchInformation @ 0x140692A30 (PfQuerySuperfetchInformation.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     ObOpenObjectByNameEx @ 0x140694650 (ObOpenObjectByNameEx.c)
 *     PspReferenceSystemDll @ 0x1406B7720 (PspReferenceSystemDll.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140212170 (ObpTraceObjectDereferenceIfActive.c)
 *     ObReferenceObjectExWithTag @ 0x14032EFF0 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1403494E0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ObFastReferenceObject(signed __int64 *a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rdi
  unsigned int v5; // r8d
  ULONG_PTR v6; // rdi
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v10; // rdx
  signed __int64 BugCheckParameter4; // rax

  _m_prefetchw(a1);
  v2 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2;
  v5 = v2 & 0xF;
  v6 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v5 > 1 )
    return v6;
  if ( v5 )
  {
    ObReferenceObjectExWithTag(v6);
    _m_prefetchw(a1);
    v8 = *a1;
    while ( (v8 & 0xF) == 0 )
    {
      if ( v6 != (v8 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v9 = v8;
      v8 = _InterlockedCompareExchange64(a1, v8 + 15, v8);
      if ( v9 == v8 )
        return v6;
    }
    ObpTraceObjectDereferenceIfActive(v6 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), 0xFFFFFFFFFFFFFFF1uLL) - 15;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *(_QWORD *)(v6 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v6 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v6 - 48) >> 8)],
          v6,
          6uLL,
          *(_QWORD *)(v6 - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v6, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v6 - 48, v10);
    }
    return v6;
  }
  return 0LL;
}
