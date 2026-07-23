/*
 * XREFs of HalpTscAdvSynchComputeMinimumDelta @ 0x1404C128C
 * Callers:
 *     HalpTscAdvSynchCalculateRemoteDelta @ 0x14039D254 (HalpTscAdvSynchCalculateRemoteDelta.c)
 *     HalpTscAdvSynchTarget @ 0x14039D33C (HalpTscAdvSynchTarget.c)
 * Callees:
 *     HalpProcessorFence @ 0x1403F9EA0 (HalpProcessorFence.c)
 */

__int64 __fastcall HalpTscAdvSynchComputeMinimumDelta(unsigned int a1, int a2)
{
  int v2; // edi
  __int64 v3; // rsi
  int v4; // r14d
  int v5; // ebp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx

  v2 = a2;
  v3 = 0x7FFFFFFFFFFFFFFFLL;
  v4 = 2;
  v5 = KeGetCurrentPrcb()->Number == a1;
  if ( a2 )
  {
    v6 = (unsigned __int64)a1 << 7;
    do
    {
      --v2;
      while ( *(_DWORD *)(v6 + TscRequest + 4) != v5 )
        _mm_pause();
      HalpProcessorFence();
      v7 = __rdtsc();
      v8 = *(_QWORD *)(v6 + TscRequest + 8);
      v9 = TscRequest;
      *(_QWORD *)(v6 + TscRequest + 8) = v7;
      _InterlockedXor((volatile signed __int32 *)(v6 + v9 + 4), 1u);
      if ( v4 )
      {
        --v4;
      }
      else
      {
        v10 = v7 - v8;
        if ( v10 < v3 )
          v3 = v10;
      }
    }
    while ( v2 );
  }
  return v3;
}
