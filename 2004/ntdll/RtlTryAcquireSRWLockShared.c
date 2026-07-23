/*
 * XREFs of RtlTryAcquireSRWLockShared @ 0x180076C90
 * Callers:
 *     EtwpGetNextRegistration @ 0x18004562C (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x18004571C (EtwpFindRegistration.c)
 * Callees:
 *     RtlBackoff @ 0x18005CD68 (RtlBackoff.c)
 */

BOOLEAN __cdecl RtlTryAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  BOOLEAN v1; // r9
  PRTL_SRWLOCK v2; // r10
  unsigned __int64 Value; // rax
  __int64 v5; // r8
  signed __int64 v6; // rcx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = SRWLock;
  v7 = 0;
  Value = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( !Value )
    return 1;
  while ( 1 )
  {
    v5 = (Value >> 1) & 1;
    if ( (Value & 1) != 0 && (v5 || (Value & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      break;
    v6 = (Value | 1) + 16;
    if ( v5 )
      v6 = Value | 1;
    if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)v2, v6, Value) )
      return 1;
    RtlBackoff(&v7);
    _m_prefetchw(v2);
    Value = v2->Value;
  }
  return v1;
}
