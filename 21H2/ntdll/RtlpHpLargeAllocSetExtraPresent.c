/*
 * XREFs of RtlpHpLargeAllocSetExtraPresent @ 0x180084FFC
 * Callers:
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x18006B2D4 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSetExtraPresent(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v6; // esi
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rbx

  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 64), a2, a3, a4);
  result = a1 + 72;
  v8 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v8 )
    v8 ^= result;
  while ( v8 )
  {
    result = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= result )
    {
      if ( a2 <= result )
        break;
      result = *(_QWORD *)(v8 + 8);
    }
    else
    {
      result = *(_QWORD *)v8;
    }
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && result )
      v8 ^= result;
    else
      v8 = result;
  }
  if ( !v6 )
    result = RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 64));
  *(_QWORD *)(v8 + 32) |= 1uLL;
  return result;
}
