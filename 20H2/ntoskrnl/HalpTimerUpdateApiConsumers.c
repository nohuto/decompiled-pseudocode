/*
 * XREFs of HalpTimerUpdateApiConsumers @ 0x1404D3CE8
 * Callers:
 *     HalpPrepareForBugcheck @ 0x1404C0AA0 (HalpPrepareForBugcheck.c)
 *     HalpRestoreHvEnlightenment @ 0x1404C1410 (HalpRestoreHvEnlightenment.c)
 *     HalpSaveAndDisableEnlightenment @ 0x1404C1780 (HalpSaveAndDisableEnlightenment.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 HalpTimerUpdateApiConsumers()
{
  __int64 i; // rbx
  __int64 result; // rax
  __int16 v2; // [rsp+20h] [rbp-8h]

  _disable();
  for ( i = HalpTimerHvApicCallbackList; i; i = *(_QWORD *)i )
    result = (*(__int64 (__fastcall **)(__int64))(i + 8))(5LL);
  if ( (v2 & 0x200) != 0 )
    _enable();
  return result;
}
