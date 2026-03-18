/*
 * XREFs of CmpDummyThreadRoutine @ 0x1407BEC20
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __noreturn CmpDummyThreadRoutine()
{
  NTSTATUS v0; // eax

  v0 = KeWaitForSingleObject(&CmpDummyThreadEvent, Executive, 0, 0, 0LL);
  KeBugCheckEx(0x51u, 0x23uLL, v0, 0LL, 0LL);
}
