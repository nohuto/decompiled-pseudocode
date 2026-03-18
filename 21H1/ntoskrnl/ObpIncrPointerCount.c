/*
 * XREFs of ObpIncrPointerCount @ 0x14026B720
 * Callers:
 *     ExpApplyPriorityBoost @ 0x1402468E0 (ExpApplyPriorityBoost.c)
 *     PsImpersonateContainerOfThread @ 0x14026B3F0 (PsImpersonateContainerOfThread.c)
 *     IopCallDriverReference @ 0x14027AD40 (IopCallDriverReference.c)
 *     IoGetAttachedDeviceReference @ 0x14027D520 (IoGetAttachedDeviceReference.c)
 *     PsGetThreadProperty @ 0x1402ED8B0 (PsGetThreadProperty.c)
 *     ObpReferenceProcessObjectByHandle @ 0x14061DC70 (ObpReferenceProcessObjectByHandle.c)
 *     ObInheritObjectHandle @ 0x140671554 (ObInheritObjectHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
