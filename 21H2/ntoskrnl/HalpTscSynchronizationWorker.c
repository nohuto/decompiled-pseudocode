/*
 * XREFs of HalpTscSynchronizationWorker @ 0x14039CD00
 * Callers:
 *     HalpPostSleepMP @ 0x140996864 (HalpPostSleepMP.c)
 * Callees:
 *     HalpTscAdvSynchLeader @ 0x14039CDE4 (HalpTscAdvSynchLeader.c)
 *     HalpTscAdvSynchTarget @ 0x14039D33C (HalpTscAdvSynchTarget.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpTscCompatibilitySynchronization @ 0x1404C171C (HalpTscCompatibilitySynchronization.c)
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
