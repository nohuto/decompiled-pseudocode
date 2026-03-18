/*
 * XREFs of sub_1C0001AE8 @ 0x1C0001AE8
 * Callers:
 *     sub_1C00018E8 @ 0x1C00018E8 (sub_1C00018E8.c)
 *     sub_1C002C930 @ 0x1C002C930 (sub_1C002C930.c)
 *     sub_1C002D68C @ 0x1C002D68C (sub_1C002D68C.c)
 *     sub_1C002D93C @ 0x1C002D93C (sub_1C002D93C.c)
 *     sub_1C002D9E8 @ 0x1C002D9E8 (sub_1C002D9E8.c)
 *     sub_1C002F6C0 @ 0x1C002F6C0 (sub_1C002F6C0.c)
 *     sub_1C002F830 @ 0x1C002F830 (sub_1C002F830.c)
 *     sub_1C0038F30 @ 0x1C0038F30 (sub_1C0038F30.c)
 *     sub_1C003B780 @ 0x1C003B780 (sub_1C003B780.c)
 *     sub_1C00413CC @ 0x1C00413CC (sub_1C00413CC.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

__int64 __fastcall sub_1C0001AE8(__int64 a1, __int64 a2, int a3)
{
  KIRQL v6; // di
  __int64 v7; // rbx
  char *PoolWithTag; // rax
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 **v11; // rcx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
  stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
  v7 = sub_1C000F050(a1);
  if ( *(_BYTE *)(v7 + 2480) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, 0x30uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 1) = 0;
      v9 = v7 + 2512;
      *((_QWORD *)PoolWithTag + 3) = 0LL;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      *((_DWORD *)PoolWithTag + 11) = 0;
      *(_DWORD *)PoolWithTag = 1397515890;
      *((_DWORD *)PoolWithTag + 10) = a3;
      *((_QWORD *)PoolWithTag + 2) = a2;
      *((_QWORD *)PoolWithTag + 1) = a1;
      v10 = (__int64 *)(PoolWithTag + 24);
      v11 = *(__int64 ***)(v9 + 8);
      if ( *v11 != (__int64 *)v9 )
        __fastfail(3u);
      *v10 = v9;
      v10[1] = (__int64)v11;
      *v11 = v10;
      *(_QWORD *)(v9 + 8) = v10;
    }
    else
    {
      ++*(_DWORD *)(v7 + 2528);
    }
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v6);
    return 0LL;
  }
  else
  {
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v6);
    return 3221225473LL;
  }
}
