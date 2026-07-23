/*
 * XREFs of EtwpDereferenceLoggerSecurityDescriptor @ 0x140637C40
 * Callers:
 *     EtwpCheckLoggerControlAccess @ 0x140637BEC (EtwpCheckLoggerControlAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093803C (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x1406544C0 (ObDereferenceSecurityDescriptor.c)
 */

signed __int64 __fastcall EtwpDereferenceLoggerSecurityDescriptor(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 800));
  result = *(_QWORD *)(a1 + 800);
  if ( (a2 ^ (unsigned __int64)result) >= 0xF )
    return ObDereferenceSecurityDescriptor(a2, 1LL);
  while ( 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 800), result + 1, result);
    if ( v3 == result )
      break;
    if ( (a2 ^ (unsigned __int64)result) >= 0xF )
      return ObDereferenceSecurityDescriptor(a2, 1LL);
  }
  return result;
}
