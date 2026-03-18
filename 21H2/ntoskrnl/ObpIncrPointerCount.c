/*
 * XREFs of ObpIncrPointerCount @ 0x14030F6D0
 * Callers:
 *     IopCallDriverReference @ 0x1402F8AE0 (IopCallDriverReference.c)
 *     PsImpersonateContainerOfThread @ 0x14030F330 (PsImpersonateContainerOfThread.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     ExpApplyPriorityBoost @ 0x140343010 (ExpApplyPriorityBoost.c)
 *     IopQueueWorkItemProlog @ 0x1403467F0 (IopQueueWorkItemProlog.c)
 *     ObInheritObjectHandle @ 0x1406A6A34 (ObInheritObjectHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407A2680 (ObpReferenceProcessObjectByHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
