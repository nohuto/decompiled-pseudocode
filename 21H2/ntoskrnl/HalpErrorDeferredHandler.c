/*
 * XREFs of HalpErrorDeferredHandler @ 0x1404CFF00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     HalpMemoryErrorDeferredHandler @ 0x1404D00EC (HalpMemoryErrorDeferredHandler.c)
 *     HalpPmemErrorDeferredHandler @ 0x1404D028C (HalpPmemErrorDeferredHandler.c)
 */

PSLIST_ENTRY __fastcall HalpErrorDeferredHandler(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm1
  PSLIST_ENTRY result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h]

  v2 = a2[1];
  v4 = *a2;
  v5 = v2;
  result = RtlpInterlockedPushEntrySList(&WheapDrsPoolList, (PSLIST_ENTRY)(a1 - 16));
  if ( HIDWORD(v2) == 1 )
    return (PSLIST_ENTRY)HalpMemoryErrorDeferredHandler(&v4);
  if ( HIDWORD(v5) == 2 )
    return (PSLIST_ENTRY)HalpPmemErrorDeferredHandler(&v4);
  return result;
}
