/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x140257E3C
 * Callers:
 *     ExpDeleteCallback @ 0x1406E0DD0 (ExpDeleteCallback.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
