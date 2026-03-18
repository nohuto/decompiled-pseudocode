/*
 * XREFs of AcquireMagInputLock @ 0x1C0107148
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C01070F0 (AddMagnificationOutputTransform.c)
 *     _SetMagnificationInputTransform @ 0x1C0128AF0 (_SetMagnificationInputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01CEE40 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01CF220 (TransformForInputMagnification.c)
 *     EditionMagnificationMousePosition @ 0x1C0213AC0 (EditionMagnificationMousePosition.c)
 * Callees:
 *     <none>
 */

signed __int64 AcquireMagInputLock()
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    result = _InterlockedCompareExchange64(&gpMagInputLock, (signed __int64)CurrentThread, 0LL);
    if ( !result )
      break;
    UserSleep(1LL);
  }
  return result;
}
