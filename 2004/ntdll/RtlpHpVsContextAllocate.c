/*
 * XREFs of RtlpHpVsContextAllocate @ 0x180007230
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1800076C4 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180028CD0 (RtlpHpVsContextAllocateInternal.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 Internal; // rdi
  int v7; // [rsp+30h] [rbp-28h] BYREF
  PRTL_SRWLOCK SRWLock[2]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h]

  v7 = 0;
  *(_OWORD *)SRWLock = 0LL;
  v9 = 0LL;
  Internal = RtlpHpVsContextAllocateInternal(a1, (__int64)SRWLock, (__int64)&v7);
  if ( v7 && (a4 & 1) == 0 )
    RtlReleaseSRWLockExclusive(SRWLock[1]);
  return Internal;
}
