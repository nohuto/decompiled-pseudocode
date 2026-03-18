/*
 * XREFs of HalpTscSynchronizationWorker @ 0x140399690
 * Callers:
 *     HalpPostSleepMP @ 0x1409910C4 (HalpPostSleepMP.c)
 * Callees:
 *     HalpTscAdvSynchLeader @ 0x140399774 (HalpTscAdvSynchLeader.c)
 *     HalpTscAdvSynchTarget @ 0x140399CCC (HalpTscAdvSynchTarget.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     HalpTscCompatibilitySynchronization @ 0x1404BBF0C (HalpTscCompatibilitySynchronization.c)
 */

ULONG_PTR __fastcall HalpTscSynchronizationWorker(ULONG_PTR Argument)
{
  _QWORD *v1; // rbp
  ULONG_PTR result; // rax
  __int64 v3; // rdx
  __int16 v4; // bx
  int v5; // ebx
  _WORD v6[116]; // [rsp+60h] [rbp-8h] BYREF

  v1 = (_QWORD *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_QWORD *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFC0uLL) = Argument;
  result = (ULONG_PTR)memset((void *)(((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0x80uLL);
  v3 = *(_QWORD *)((unsigned __int64)v6 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( *(_DWORD *)(v3 + 40) >= 2u )
  {
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    {
      v4 = v6[112];
      *(_QWORD *)(((unsigned __int64)KeGetCurrentPrcb()->Number << 7) + TscRequest + 16) = v1 + 8;
      _disable();
      v5 = v4 & 0x200;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) != 1 )
      {
        do
          _mm_pause();
        while ( *(_DWORD *)v3 );
      }
      if ( KeGetCurrentPrcb()->Number == HalpTscRequestedLeadProcessor )
        result = HalpTscAdvSynchLeader(v3);
      else
        result = HalpTscAdvSynchTarget();
      if ( v5 )
        _enable();
    }
    else
    {
      return HalpTscCompatibilitySynchronization(*v1);
    }
  }
  return result;
}
