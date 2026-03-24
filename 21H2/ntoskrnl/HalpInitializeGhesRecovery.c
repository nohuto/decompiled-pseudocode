/*
 * XREFs of HalpInitializeGhesRecovery @ 0x1403C587C
 * Callers:
 *     HalpInitializeMce @ 0x1409A0E1C (HalpInitializeMce.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 */

__int64 (__fastcall *HalpInitializeGhesRecovery())()
{
  struct _SLIST_ENTRY *v0; // rdi
  _QWORD *v1; // rbx
  __int64 v2; // rsi
  __int64 (__fastcall *result)(); // rax

  if ( ((unsigned __int8)&WheapDrsPoolList & 0xF) != 0 )
    RtlRaiseStatus(0x80000002);
  v0 = &WheapDrsPoolEntries;
  WheapDrsPoolList = 0LL;
  v1 = &unk_140CED9E8;
  v2 = 32LL;
  do
  {
    *(_OWORD *)(v1 - 3) = 0LL;
    *(_OWORD *)(v1 - 1) = 0LL;
    v1[1] = 0LL;
    *(v1 - 1) = HalpErrorDeferredHandler;
    RtlpInterlockedPushEntrySList(&WheapDrsPoolList, v0);
    v0 += 6;
    v1 += 12;
    --v2;
  }
  while ( v2 );
  result = HalpRequestGenericErrorRecovery;
  off_140C009D8[0] = HalpRequestGenericErrorRecovery;
  return result;
}
