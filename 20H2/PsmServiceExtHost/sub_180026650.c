/*
 * XREFs of sub_180026650 @ 0x180026650
 * Callers:
 *     sub_180012FA8 @ 0x180012FA8 (sub_180012FA8.c)
 *     sub_180014E9C @ 0x180014E9C (sub_180014E9C.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_180022B60 @ 0x180022B60 (sub_180022B60.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18003529C @ 0x18003529C (sub_18003529C.c)
 * Callees:
 *     sub_180008938 @ 0x180008938 (sub_180008938.c)
 *     sub_1800705E0 @ 0x1800705E0 (sub_1800705E0.c)
 */

HANDLE __fastcall sub_180026650(HANDLE *P)
{
  HANDLE result; // rax
  signed __int64 i; // rcx
  __int64 v4; // rtt
  _DWORD *v5; // rdi
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax

  _m_prefetchw(P);
  result = *P;
  for ( i = (signed __int64)*P - 1; i > 0; i = (signed __int64)result - 1 )
  {
    v4 = (__int64)result;
    result = (HANDLE)_InterlockedCompareExchange64((volatile signed __int64 *)P, i, (signed __int64)result);
    if ( (HANDLE)v4 == result )
      return result;
  }
  if ( i )
    __fastfail(0xEu);
  v5 = P[3];
  RtlAcquireSRWLockExclusive(v5 + 78);
  v5[80] = GetCurrentThreadId();
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)P, 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  v8 = v6 - 1;
  if ( v7 )
  {
    if ( v8 )
      __fastfail(0xEu);
    if ( (unsigned int)sub_180008938(P + 1) )
    {
      sub_1800705E0(P);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    }
    else
    {
      *((_DWORD *)P + 56) &= ~1u;
      *((_DWORD *)P + 56) |= 2u;
      SetEvent(P[8]);
    }
  }
  v5[80] = 0;
  return (HANDLE)RtlReleaseSRWLockExclusive(v5 + 78);
}
