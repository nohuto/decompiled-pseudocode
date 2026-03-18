/*
 * XREFs of IrqLibAcquireArbiterLock @ 0x1C000EFCC
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C002DB30 (IrqLibpGetVectorInput.c)
 *     ProcessorpAddInstanceCallback @ 0x1C006C470 (ProcessorpAddInstanceCallback.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C00917E0 (LinkNodepAddLinkNodeWorker.c)
 *     IrqTranslateResources @ 0x1C0093200 (IrqTranslateResources.c)
 *     AcpiUpdateInterruptProperties @ 0x1C00AF240 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00B6160 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00B6410 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00B6960 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IrqLibAcquireArbiterLock(char a1)
{
  NTSTATUS result; // eax

  result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  if ( a1 )
  {
    while ( byte_1C0081748 )
    {
      KeSetEvent(Object, 0, 0);
      KeWaitForSingleObject(qword_1C0081750, Executive, 0, 0, 0LL);
      result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
