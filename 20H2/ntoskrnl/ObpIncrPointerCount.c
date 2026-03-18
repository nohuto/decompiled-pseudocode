/*
 * XREFs of ObpIncrPointerCount @ 0x14027E460
 * Callers:
 *     IopCallDriverReference @ 0x14020A830 (IopCallDriverReference.c)
 *     IoGetAttachedDeviceReference @ 0x14020ACC0 (IoGetAttachedDeviceReference.c)
 *     PsImpersonateContainerOfThread @ 0x14027E130 (PsImpersonateContainerOfThread.c)
 *     ExpApplyPriorityBoost @ 0x140291140 (ExpApplyPriorityBoost.c)
 *     PsGetThreadProperty @ 0x1402F6900 (PsGetThreadProperty.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1406A5D30 (ObpReferenceProcessObjectByHandle.c)
 *     ObInheritObjectHandle @ 0x1406F5504 (ObInheritObjectHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
