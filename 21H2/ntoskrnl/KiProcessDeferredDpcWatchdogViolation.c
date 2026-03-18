/*
 * XREFs of KiProcessDeferredDpcWatchdogViolation @ 0x1405794F8
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x140294110 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     <none>
 */

void (__fastcall __noreturn *__fastcall KiProcessDeferredDpcWatchdogViolation(__int64 a1))(__int64 a1)
{
  void (__fastcall __noreturn *result)(__int64); // rax

  KiDeferredDpcWatchdogActivePrcb = 1LL;
  KiInjectedMachineFrame = 0LL;
  xmmword_140C2AAD0 = 0LL;
  xmmword_140C2AAE0 = 0LL;
  LOWORD(xmmword_140C2AAE0) = *(_WORD *)(a1 + 392);
  *((_QWORD *)&xmmword_140C2AAD0 + 1) = *(_QWORD *)(a1 + 384);
  LODWORD(xmmword_140C2AAD0) = *(_DWORD *)(a1 + 376);
  WORD4(KiInjectedMachineFrame) = *(_WORD *)(a1 + 368);
  *(_QWORD *)&KiInjectedMachineFrame = *(_QWORD *)(a1 + 360);
  *((_QWORD *)&xmmword_140C2AAE0 + 1) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = &KiInjectedMachineFrame;
  result = KiDeferredDpcWatchdogViolation;
  *(_QWORD *)(a1 + 360) = KiDeferredDpcWatchdogViolation;
  return result;
}
