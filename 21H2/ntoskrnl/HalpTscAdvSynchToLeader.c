/*
 * XREFs of HalpTscAdvSynchToLeader @ 0x1404C138C
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x14039CDE4 (HalpTscAdvSynchLeader.c)
 * Callees:
 *     HalpTscAdvSynchCalculateRemoteDelta @ 0x14039D254 (HalpTscAdvSynchCalculateRemoteDelta.c)
 *     HalpTscTraceProcessorSynchronization @ 0x14039D504 (HalpTscTraceProcessorSynchronization.c)
 */

__int64 __fastcall HalpTscAdvSynchToLeader(unsigned int a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // rsi
  unsigned int i; // edi
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // edi
  unsigned int v10; // ebp
  __int64 v11; // r15
  __int64 result; // rax
  signed __int32 v13[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+20h] [rbp-38h]

  v1 = (unsigned __int64)a1 << 7;
  v2 = a1;
  *(_QWORD *)(v1 + TscRequest + 8) = 0LL;
  _InterlockedOr(v13, 0);
  _InterlockedExchange((volatile __int32 *)(v1 + TscRequest), 1);
  while ( *(_DWORD *)(v1 + TscRequest) == 1 )
    _mm_pause();
  v3 = 0LL;
  v4 = 0x7FFFFFFFFFFFFFFFLL;
  for ( i = 0; i < HalpTscSyncRecalculateSkews; ++i )
  {
    v6 = v4;
    v7 = HalpTscAdvSynchCalculateRemoteDelta(v2, (unsigned int)HalpTscRequestedIterations, 0LL);
    v8 = TscRequest;
    *(_QWORD *)(v1 + TscRequest + 8) = 0LL;
    *(_DWORD *)(v1 + v8 + 4) = 100;
    _InterlockedOr(v13, 0);
    _InterlockedExchange((volatile __int32 *)(v1 + TscRequest), 2);
    while ( *(_DWORD *)(v1 + TscRequest) == 2 )
      _mm_pause();
    v3 = HalpTscAdvSynchCalculateRemoteDelta(v2, (unsigned int)HalpTscRequestedIterations, 0LL);
    v4 = (v7 - v3) / 100;
    if ( v4 >= v6 )
      v4 = v6;
  }
  v9 = 0;
  v10 = 0;
  *(_DWORD *)(HalpTscSkewOffset + 4 * v2) = v4;
  do
  {
    v11 = v4 - v3;
    if ( !v9 )
    {
      *(_QWORD *)(v1 + TscRequest + 8) = v11;
      _InterlockedOr(v13, 0);
      _InterlockedExchange((volatile __int32 *)(v1 + TscRequest), 1);
      while ( *(_DWORD *)(v1 + TscRequest) == 1 )
        _mm_pause();
    }
    v3 = HalpTscAdvSynchCalculateRemoteDelta(v2, (unsigned int)HalpTscRequestedIterations, 0LL);
    if ( !v9 )
    {
      LODWORD(v14) = v10;
      HalpTscTraceProcessorSynchronization(KeGetCurrentPrcb()->Number, v2, v3, v11, v14);
    }
    ++v9;
    if ( (unsigned __int64)(v3 + 24) > 0x30 )
      v9 = 0;
    ++v10;
  }
  while ( v10 < 0x32 && v9 < 2 );
  result = HalpTscWaves;
  *(_DWORD *)(HalpTscWaves + 4 * v2) = v10;
  return result;
}
