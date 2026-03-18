/*
 * XREFs of ObpIncrPointerCount @ 0x1402126D0
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1402123A0 (PsImpersonateContainerOfThread.c)
 *     IopCallDriverReference @ 0x140221CF0 (IopCallDriverReference.c)
 *     IoGetAttachedDeviceReference @ 0x1402244D0 (IoGetAttachedDeviceReference.c)
 *     ExpApplyPriorityBoost @ 0x1402830C0 (ExpApplyPriorityBoost.c)
 *     PsGetThreadProperty @ 0x1403271E0 (PsGetThreadProperty.c)
 *     ObInheritObjectHandle @ 0x1405D0A34 (ObInheritObjectHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E8650 (ObpReferenceProcessObjectByHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
