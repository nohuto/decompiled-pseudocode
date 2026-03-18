/*
 * XREFs of ObDereferenceObjectEx @ 0x1402287B0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405FB740 (MiCreateImageOrDataSection.c)
 *     PspClearProcessThreadCidRefs @ 0x1406B1220 (PspClearProcessThreadCidRefs.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140212170 (ObpTraceObjectDereferenceIfActive.c)
 *     ObpDeferObjectDeletion @ 0x1403494E0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ObDereferenceObjectEx(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v2; // rbx
  ULONG_PTR v3; // rsi
  __int64 v5; // rdx
  signed __int64 BugCheckParameter4; // rdi

  v2 = a2;
  v3 = BugCheckParameter2 - 48;
  ObpTraceObjectDereferenceIfActive(BugCheckParameter2 - 48);
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, -(int)v2) - v2;
  if ( BugCheckParameter4 <= 0 )
  {
    if ( *(_QWORD *)(v3 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v3 + 24) ^ (unsigned __int64)BYTE1(v3)],
        BugCheckParameter2,
        6uLL,
        *(_QWORD *)(v3 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
    ObpDeferObjectDeletion(v3, v5);
  }
  return BugCheckParameter4;
}
