/*
 * XREFs of ObpIncrPointerCount @ 0x1402C08C0
 * Callers:
 *     PsGetThreadProperty @ 0x1402104F0 (PsGetThreadProperty.c)
 *     PsImpersonateContainerOfThread @ 0x1402C0590 (PsImpersonateContainerOfThread.c)
 *     IopCallDriverReference @ 0x1402D0580 (IopCallDriverReference.c)
 *     IoGetAttachedDeviceReference @ 0x1402D1260 (IoGetAttachedDeviceReference.c)
 *     ExpApplyPriorityBoost @ 0x1402D3850 (ExpApplyPriorityBoost.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E27D0 (ObpReferenceProcessObjectByHandle.c)
 *     ObInheritObjectHandle @ 0x1406960B4 (ObInheritObjectHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
