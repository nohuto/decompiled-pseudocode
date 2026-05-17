/*
 * XREFs of _RtlpQueueWaitBlockToSRWLock@8 @ 0x4B2F1CB0
 * Callers:
 *     _RtlpWakeConditionVariable@12 @ 0x4B2F1BC1 (_RtlpWakeConditionVariable@12.c)
 * Callees:
 *     _RtlBackoff@4 @ 0x4B2DBA90 (_RtlBackoff@4.c)
 *     _RtlpOptimizeSRWLockList@8 @ 0x4B2E3B53 (_RtlpOptimizeSRWLockList@8.c)
 */

char __fastcall RtlpQueueWaitBlockToSRWLock(unsigned int a1, volatile signed __int32 *a2)
{
  unsigned __int32 *v3; // eax
  char v4; // bl
  char v5; // cl
  unsigned __int32 v6; // edx
  signed __int32 v7; // ecx
  unsigned __int32 v9; // eax
  char i; // [esp+10h] [ebp-10h]
  unsigned int v11; // [esp+14h] [ebp-Ch] BYREF
  unsigned int v12; // [esp+18h] [ebp-8h]
  volatile signed __int32 *v13; // [esp+1Ch] [ebp-4h]

  v3 = (unsigned __int32 *)a2;
  v13 = a2;
  v4 = 0;
  v11 = 0;
  v5 = *(_DWORD *)(a1 + 20) & 1;
  for ( i = v5; ; v5 = i )
  {
    v6 = *v3;
    if ( (*v3 & 1) == 0 || !v5 && (v6 & 2) == 0 && (v6 & 0xFFFFFFF0) != 0 )
      break;
    *(_DWORD *)(a1 + 8) = 0;
    LOBYTE(v12) = 0;
    if ( (v6 & 2) != 0 )
    {
      *(_DWORD *)(a1 + 16) = -1;
      *(_DWORD *)a1 = v6 & 0xFFFFFFF0;
      *(_DWORD *)(a1 + 4) = 0;
      v9 = v6 >> 2;
      v7 = a1 | v6 & 8 | 7;
      LOBYTE(v9) = ~(unsigned __int8)(v6 >> 2);
      v12 = v9 & 0xFFFFFF01;
    }
    else
    {
      *(_DWORD *)(a1 + 4) = a1;
      *(_DWORD *)(a1 + 16) = v6 >> 4;
      v7 = a1 | (v6 >> 4 > 1 ? 11 : 3);
      if ( !(v6 >> 4) )
        *(_DWORD *)(a1 + 16) = -2;
    }
    v4 = 0;
    if ( _InterlockedCompareExchange(v13, v7, v6) == v6 )
    {
      if ( (_BYTE)v12 )
        RtlpOptimizeSRWLockList(v13, v7);
      return 1;
    }
    RtlBackoff(&v11);
    v3 = (unsigned __int32 *)v13;
  }
  return v4;
}
