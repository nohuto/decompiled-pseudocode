/*
 * XREFs of RtlRunOnceComplete @ 0x180043AB0
 * Callers:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180009518 (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18000A448 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18002F690 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x180043830 (RtlRunOnceExecuteOnce.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18009E3F0 (ZwAlertThreadByThreadId.c)
 */

NTSTATUS __cdecl RtlRunOnceComplete(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID Context)
{
  char v4; // al
  unsigned __int64 Value; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v11; // rbx
  void *v12; // rcx
  char v13; // [rsp+38h] [rbp+10h]

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFF9) != 0 )
    return -1073741584;
  v4 = (v13 ^ ~(unsigned __int8)(Flags >> 1)) & 3 ^ v13;
  if ( Context && (((unsigned __int8)Context & 3) != 0 || (v4 & 2) == 0) )
    return -1073741583;
  _m_prefetchw(RunOnce);
  Value = RunOnce->Value;
  v6 = (unsigned __int64)Context & 0xFFFFFFFFFFFFFFFCuLL | v4 & 2;
  v7 = RunOnce->Value & 3;
  if ( v7 == 1 )
  {
    if ( (v4 & 1) != 0 )
    {
      v8 = _InterlockedExchange64((volatile __int64 *)RunOnce, v6);
      if ( (v8 & 3) == 1 )
      {
        v9 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v9 )
        {
          do
          {
            v11 = *(_QWORD *)v9;
            v12 = *(void **)(v9 + 24);
            _interlockedbittestandset((volatile signed __int32 *)(v9 + 36), 2u);
            ZwAlertThreadByThreadId(v12);
            v9 = v11;
          }
          while ( v11 );
        }
        return 0;
      }
      return -1073741734;
    }
    return -1073741584;
  }
  if ( v7 != 3 )
    return -1073741823;
  if ( (v4 & 1) != 0 )
    return -1073741584;
  if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v6, Value) )
    return 0;
  return -1073741771;
}
