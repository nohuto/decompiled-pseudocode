/*
 * XREFs of RtlpHpVsContextAllocate @ 0x180007230
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1800076C4 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180028CD0 (RtlpHpVsContextAllocateInternal.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(int a1, int a2, int a3, int a4)
{
  char v4; // bl
  __int64 Internal; // rdi
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h]

  v7 = 0;
  v4 = a4;
  v8 = 0LL;
  v9 = 0LL;
  Internal = RtlpHpVsContextAllocateInternal(a1, a2, a3, a4, (__int64)&v8, (__int64)&v7);
  if ( v7 && (v4 & 1) == 0 )
    RtlReleaseSRWLockExclusive(*((_QWORD *)&v8 + 1));
  return Internal;
}
