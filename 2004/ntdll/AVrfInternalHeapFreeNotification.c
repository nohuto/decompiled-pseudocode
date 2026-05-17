/*
 * XREFs of AVrfInternalHeapFreeNotification @ 0x1800DA260
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 */

struct _PEB *__fastcall AVrfInternalHeapFreeNotification(__int64 a1, __int64 a2)
{
  struct _PEB *result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rbx
  void (__fastcall *v8)(__int64, __int64); // rax

  result = NtCurrentPeb();
  if ( (result->NtGlobalFlag & 0x100) != 0 && AVrfpEnabled )
  {
    RtlEnterCriticalSection((__int64)&AVrfpVerifierLock);
    v7 = (__int64 *)AVrfpVerifierProvidersList;
    while ( v7 != &AVrfpVerifierProvidersList )
    {
      v8 = (void (__fastcall *)(__int64, __int64))v7[8];
      v7 = (__int64 *)*v7;
      if ( v8 )
        v8(a1, a2);
    }
    return (struct _PEB *)RtlLeaveCriticalSection((__int64)&AVrfpVerifierLock, v5, v6);
  }
  return result;
}
