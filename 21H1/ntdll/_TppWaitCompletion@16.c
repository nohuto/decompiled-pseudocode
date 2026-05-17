/*
 * XREFs of _TppWaitCompletion@16 @ 0x4B2B5530
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _TppExecuteWaitCallback@12 @ 0x4B2B55E2 (_TppExecuteWaitCallback@12.c)
 *     _TppSetupNextWait@12 @ 0x4B2B7C92 (_TppSetupNextWait@12.c)
 *     _TppCancelTimer@12 @ 0x4B2B7D76 (_TppCancelTimer@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall TppWaitCompletion(int a1, int a2, int a3, int a4)
{
  signed int v4; // esi
  char v5; // cl

  v4 = 0;
  RtlAcquireSRWLockExclusive(a3 + 144);
  if ( (unsigned __int8)TppCancelTimer(1) )
    v4 = -1;
  v5 = *(_BYTE *)(a3 + 292);
  if ( (v5 & 4) == 0 )
  {
    TppBarrierAdjust(0);
    v5 = *(_BYTE *)(a3 + 292);
  }
  *(_DWORD *)(a3 + 224) = 0;
  if ( (v5 & 1) != 0 )
    v4 += TppSetupNextWait((v5 & 2) != 0 ? a3 + 240 : 0);
  *(_BYTE *)(a3 + 292) = 0;
  if ( v4 > 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a3, v4);
    v4 = 0;
  }
  RtlReleaseSRWLockExclusive(a3 + 144);
  if ( v4 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v4) == -v4 )
    (**(void (__thiscall ***)(_DWORD, int))(a3 + 4))(**(_DWORD **)(a3 + 4), a3);
  return TppExecuteWaitCallback(0);
}
