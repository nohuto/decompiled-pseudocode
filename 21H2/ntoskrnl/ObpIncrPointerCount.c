/*
 * XREFs of ObpIncrPointerCount @ 0x14021BFC0
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x14021BC90 (PsImpersonateContainerOfThread.c)
 *     IopCallDriverReference @ 0x14022BD00 (IopCallDriverReference.c)
 *     IoGetAttachedDeviceReference @ 0x14022CA10 (IoGetAttachedDeviceReference.c)
 *     ExpApplyPriorityBoost @ 0x14022F000 (ExpApplyPriorityBoost.c)
 *     PsGetThreadProperty @ 0x140292580 (PsGetThreadProperty.c)
 *     ObInheritObjectHandle @ 0x140606624 (ObInheritObjectHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1406855C0 (ObpReferenceProcessObjectByHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
