/*
 * XREFs of IopPerfCallDriver @ 0x140507FC0
 * Callers:
 *     IofCallDriver @ 0x1403519C0 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x14036E360 (IofCallDriverSpecifyReturn.c)
 *     IovCallDriver @ 0x1409C4CB4 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1409C5484 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1409C54F4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IopAllocateIrpExtension @ 0x1402EE1B0 (IopAllocateIrpExtension.c)
 *     IopfCallDriver @ 0x14036E384 (IopfCallDriver.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x140507D60 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallEvent @ 0x140508418 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x1405084EC (IopPerfLogCallReturnEvent.c)
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
