/*
 * XREFs of IopPerfCallDriver @ 0x140506488
 * Callers:
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x14036FD20 (IofCallDriverSpecifyReturn.c)
 *     IovCallDriver @ 0x1409C7CC4 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1409C8494 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1409C8504 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     IopAllocateIrpExtension @ 0x14024EA70 (IopAllocateIrpExtension.c)
 *     IopfCallDriver @ 0x14036FD44 (IopfCallDriver.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1405061F0 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallEvent @ 0x1405068E8 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x1405069BC (IopPerfLogCallReturnEvent.c)
 */

__int64 __fastcall IopPerfCallDriver(PADAPTER_OBJECT DmaAdapter, ULONG_PTR a2)
{
  _WORD *IrpExtension; // rcx
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebp

  if ( (IopPerfStatus & 2) != 0 && IopIrpHasValidCombinationOfExtensionTypes(a2, 1) )
  {
    IrpExtension = IopAllocateIrpExtension(a2, 1);
    if ( IrpExtension )
      *((_QWORD *)IrpExtension + 5) = MEMORY[0xFFFFF78000000014];
  }
  if ( (IopPerfStatus & 1) != 0 )
  {
    ObfReferenceObjectWithTag(DmaAdapter, 0x746C6644u);
    v5 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
    IopPerfLogCallEvent(DmaAdapter->DmaOperations, a2, v5);
    v6 = IopfCallDriver((__int64)DmaAdapter, a2);
    IopPerfLogCallReturnEvent(a2, v5);
    HalPutDmaAdapter(DmaAdapter);
  }
  else
  {
    return (unsigned int)IopfCallDriver((__int64)DmaAdapter, a2);
  }
  return v6;
}
