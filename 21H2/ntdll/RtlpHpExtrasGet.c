/*
 * XREFs of RtlpHpExtrasGet @ 0x1800021A0
 * Callers:
 *     RtlpHpGetUserInfo @ 0x180001EF0 (RtlpHpGetUserInfo.c)
 *     RtlSetUserValueHeap @ 0x180001F60 (RtlSetUserValueHeap.c)
 *     RtlpHpReAllocateHeap @ 0x180023990 (RtlpHpReAllocateHeap.c)
 *     RtlpHpFreeHeap @ 0x180024920 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlSetUserFlagsHeap @ 0x1800F2E30 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlpHpSizeHeapInternal @ 0x180002210 (RtlpHpSizeHeapInternal.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasGet(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v5; // edi
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD v11[6]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a3;
  v7 = RtlpHpSizeHeapInternal(a1, a2, a3, v11);
  result = -1LL;
  if ( v7 != -1 )
  {
    result = 0LL;
    if ( a4 )
      *a4 = v7;
    if ( v11[0] )
    {
      v9 = a2 + v7;
      v10 = v9 + 16;
      if ( (v5 & 0x10000000) == 0 )
        v10 = v9;
      return (v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    }
  }
  return result;
}
