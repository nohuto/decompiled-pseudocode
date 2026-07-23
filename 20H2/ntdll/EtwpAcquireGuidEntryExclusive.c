/*
 * XREFs of EtwpAcquireGuidEntryExclusive @ 0x180050CD0
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180043594 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpEventApiCallback @ 0x180043974 (EtwpEventApiCallback.c)
 *     EtwDeliverDataBlock @ 0x1800452F0 (EtwDeliverDataBlock.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180046670 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180050C48 (EtwpDereferenceUmGuidEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall EtwpAcquireGuidEntryExclusive(__int64 a1)
{
  struct _TEB *result; // rax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  result = NtCurrentTeb();
  *(_DWORD *)(a1 + 48) = result->ClientId.UniqueThread;
  return result;
}
