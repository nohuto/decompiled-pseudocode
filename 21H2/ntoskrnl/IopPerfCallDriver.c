/*
 * XREFs of IopPerfCallDriver @ 0x140507F40
 * Callers:
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x14036E510 (IofCallDriverSpecifyReturn.c)
 *     IovCallDriver @ 0x1409C5CB4 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1409C6484 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1409C64F4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14020DB80 (IopAllocateIrpExtension.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     IopfCallDriver @ 0x14036E534 (IopfCallDriver.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x140507CE0 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallEvent @ 0x140508398 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x14050846C (IopPerfLogCallReturnEvent.c)
 */

__int64 __fastcall IopPerfCallDriver(PADAPTER_OBJECT DmaAdapter, ULONG_PTR a2)
{
  _WORD *IrpExtension; // rcx
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebp

  if ( (IopPerfStatus & 2) != 0 )
  {
    if ( IopIrpHasValidCombinationOfExtensionTypes(a2, 1) )
    {
      IrpExtension = IopAllocateIrpExtension(a2, 1);
      if ( IrpExtension )
        *((_QWORD *)IrpExtension + 5) = MEMORY[0xFFFFF78000000014];
    }
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
