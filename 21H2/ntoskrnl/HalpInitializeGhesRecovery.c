/*
 * XREFs of HalpInitializeGhesRecovery @ 0x1403C5CAC
 * Callers:
 *     HalpInitializeMce @ 0x1409A1D4C (HalpInitializeMce.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 */

__int64 (__fastcall *HalpInitializeGhesRecovery())()
{
  _SLIST_ENTRY *v0; // rdi
  _QWORD *v1; // rbx
  __int64 v2; // rsi
  __int64 (__fastcall *result)(); // rax

  if ( ((unsigned __int8)&WheapDrsPoolList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  v0 = &WheapDrsPoolEntries;
  WheapDrsPoolList = 0LL;
  v1 = &unk_140CEDA28;
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
