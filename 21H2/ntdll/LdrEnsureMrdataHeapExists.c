/*
 * XREFs of LdrEnsureMrdataHeapExists @ 0x18000787C
 * Callers:
 *     RtlAddFunctionTable @ 0x1800690C0 (RtlAddFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180069900 (RtlInstallFunctionTableCallback.c)
 *     RtlAddGrowableFunctionTable @ 0x180069C10 (RtlAddGrowableFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x180081550 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x1800820B0 (RtlpAddVectoredHandler.c)
 * Callees:
 *     RtlDestroyHeap @ 0x180009680 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     ZwAllocateVirtualMemory @ 0x18009D940 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009DA00 (ZwFreeVirtualMemory.c)
 */

__int64 LdrEnsureMrdataHeapExists()
{
  __int64 result; // rax
  __int64 Heap; // rax
  __int64 v2; // rbx
  _DWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)LdrControlFlowGuardEnforced() || LdrpMrdataHeap )
    return 0LL;
  v7 = 0LL;
  v8 = LdrpAllocationGranularity;
  result = ZwAllocateVirtualMemory(-1LL, &v7, 0LL, &v8, 0x2000, 4);
  if ( (int)result >= 0 )
  {
    Heap = RtlCreateHeap(2LL, v7, 0LL, 0LL, 0LL, 0LL);
    v2 = Heap;
    if ( Heap )
    {
      v3 = (_DWORD *)RtlAllocateHeap(Heap, 0LL, 4LL);
      v5 = (__int64)v3;
      v6 = v2;
      if ( v3 )
      {
        LOBYTE(v4) = 1;
        *v3 = 0;
        RtlProtectHeap(v2, v4);
        LdrProtectMrdata(0LL);
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = v5;
          LdrpMrdataHeap = v2;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1LL);
          return 0LL;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1LL);
        RtlProtectHeap(v2, 0LL);
        RtlFreeHeap(v2, 0LL, v5);
        v6 = v2;
      }
      RtlDestroyHeap(v6);
    }
    ZwFreeVirtualMemory(-1LL, &v7, &v8, 0x8000LL);
    if ( !LdrpMrdataHeap )
      return 3221225495LL;
    return 0LL;
  }
  return result;
}
