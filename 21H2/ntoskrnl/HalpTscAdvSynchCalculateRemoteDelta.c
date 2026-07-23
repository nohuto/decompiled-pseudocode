/*
 * XREFs of HalpTscAdvSynchCalculateRemoteDelta @ 0x14039D254
 * Callers:
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x14039D024 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscAdjustToLeader @ 0x14039D168 (HalpTscAdjustToLeader.c)
 *     HalpTscAdjustToTarget @ 0x1404C11C8 (HalpTscAdjustToTarget.c)
 *     HalpTscAdvSynchToLeader @ 0x1404C138C (HalpTscAdvSynchToLeader.c)
 *     HalpTscAdvSynchToTarget @ 0x1404C15A8 (HalpTscAdvSynchToTarget.c)
 * Callees:
 *     HalpTscAdvSynchComputeMinimumDeltaAlternate @ 0x14039D444 (HalpTscAdvSynchComputeMinimumDeltaAlternate.c)
 *     HalpTscAdvSynchComputeMinimumDelta @ 0x1404C128C (HalpTscAdvSynchComputeMinimumDelta.c)
 */

__int64 __fastcall HalpTscAdvSynchCalculateRemoteDelta(unsigned int a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // r10
  unsigned __int64 v5; // rbx
  __int64 Number; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v12; // rcx
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = a1;
  if ( HalpTscSyncPolicy )
  {
    if ( HalpTscSyncPolicy == 1 )
    {
      v12 = TscRequest;
      v5 = v4 << 7;
      *(_DWORD *)((v4 << 7) + TscRequest + 4) = 0;
      _InterlockedExchange((volatile __int32 *)((v4 << 7) + v12), 4);
      if ( *(_DWORD *)((v4 << 7) + TscRequest) == 4 )
      {
        do
          _mm_pause();
        while ( *(_DWORD *)(v5 + TscRequest) == 4 );
      }
      v8 = HalpTscAdvSynchComputeMinimumDelta((unsigned int)v4);
      goto LABEL_5;
    }
    if ( HalpTscSyncPolicy != 2 )
      return -1LL;
  }
  v5 = (unsigned __int64)a1 << 7;
  Number = KeGetCurrentPrcb()->Number;
  v7 = TscRequest;
  *(_DWORD *)((v4 << 7) + TscRequest + 4) = Number;
  **(_QWORD **)((v4 << 7) + v7 + 16) = 0LL;
  **(_QWORD **)((Number << 7) + TscRequest + 16) = -1LL;
  _InterlockedExchange((volatile __int32 *)((v4 << 7) + TscRequest), 5);
  if ( *(_DWORD *)((v4 << 7) + TscRequest) == 5 )
  {
    do
      _mm_pause();
    while ( *(_DWORD *)(v5 + TscRequest) == 5 );
  }
  v8 = HalpTscAdvSynchComputeMinimumDeltaAlternate((unsigned int)v4);
LABEL_5:
  v9 = v8;
  while ( *(_DWORD *)(v5 + TscRequest) )
    _mm_pause();
  _InterlockedOr(v13, 0);
  v10 = *(_QWORD *)(v5 + TscRequest + 8);
  if ( a3 )
    *a3 = v9 + v10;
  return (v10 - v9) / 2;
}
