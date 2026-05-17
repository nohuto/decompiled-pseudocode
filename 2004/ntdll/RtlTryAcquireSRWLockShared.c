/*
 * XREFs of RtlTryAcquireSRWLockShared @ 0x180076C90
 * Callers:
 *     EtwpGetNextRegistration @ 0x18004562C (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x18004571C (EtwpFindRegistration.c)
 * Callees:
 *     RtlBackoff @ 0x18005CD68 (RtlBackoff.c)
 */

char __fastcall RtlTryAcquireSRWLockShared(volatile signed __int64 *a1)
{
  char v1; // r9
  volatile signed __int64 *v2; // r10
  unsigned __int64 v3; // rax
  __int64 v5; // r8
  signed __int64 v6; // rcx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = a1;
  v7 = 0;
  v3 = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( !v3 )
    return 1;
  while ( 1 )
  {
    v5 = (v3 >> 1) & 1;
    if ( (v3 & 1) != 0 && (v5 || (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      break;
    v6 = (v3 | 1) + 16;
    if ( v5 )
      v6 = v3 | 1;
    if ( v3 == _InterlockedCompareExchange64(v2, v6, v3) )
      return 1;
    RtlBackoff(&v7);
    _m_prefetchw((const void *)v2);
    v3 = *v2;
  }
  return v1;
}
