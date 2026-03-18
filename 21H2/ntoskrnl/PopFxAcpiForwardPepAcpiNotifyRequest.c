/*
 * XREFs of PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1405DDD88
 * Callers:
 *     PopFxProcessWork @ 0x140354CBC (PopFxProcessWork.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x1405CAE6C (PopFxBugCheck.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1405CC3A0 (PopFxFindAndReferenceAcpiDevice.c)
 */

LONG __fastcall PopFxAcpiForwardPepAcpiNotifyRequest(ULONG_PTR BugCheckParameter2, int *a2)
{
  LONG result; // eax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  HIDWORD(v5[0]) = 0;
  result = PopFxFindAndReferenceAcpiDevice((__int64 *)BugCheckParameter2);
  if ( result >= 0 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
      PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
    v5[1] = *((_QWORD *)&PopFxPlatformInterface + 1);
    v5[0] = 0LL;
    v5[2] = 0LL;
    v5[3] = a2;
    ((void (__fastcall *)(_QWORD *))PopFxPlatformInterface)(v5);
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 276), 0xFFFFFFFF);
    if ( result == 1 )
      return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 280), 0, 0);
  }
  return result;
}
