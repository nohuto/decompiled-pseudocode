/*
 * XREFs of ObFastReferenceObject @ 0x140206610
 * Callers:
 *     CcReferenceSharedCacheMapFileObject @ 0x140232654 (CcReferenceSharedCacheMapFileObject.c)
 *     MiLogPageAccess @ 0x14029E790 (MiLogPageAccess.c)
 *     NtOpenProcessTokenEx @ 0x1405E0D60 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     PfQuerySuperfetchInformation @ 0x1405E94F0 (PfQuerySuperfetchInformation.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     ObOpenObjectByNameEx @ 0x1405EB110 (ObOpenObjectByNameEx.c)
 *     SeCaptureSubjectContextEx @ 0x140602DE0 (SeCaptureSubjectContextEx.c)
 *     PsImpersonateClient @ 0x140609080 (PsImpersonateClient.c)
 *     PsReferenceEffectiveToken @ 0x140609900 (PsReferenceEffectiveToken.c)
 *     SeCreateClientSecurity @ 0x14060A050 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x14060A240 (SeCreateClientSecurityEx.c)
 *     ExpGetProcessInformation @ 0x140629910 (ExpGetProcessInformation.c)
 *     PspReferenceSystemDll @ 0x14064E740 (PspReferenceSystemDll.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x14026B1C0 (ObpTraceObjectDereferenceIfActive.c)
 *     ObReferenceObjectExWithTag @ 0x1402F3250 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x14030B7E0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
    ObpTraceObjectDereferenceIfActive(v6 - 48, 15LL, 1953261124LL);
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
      ObpDeferObjectDeletion(v6 - 48);
    }
    return v6;
  }
  return 0LL;
}
