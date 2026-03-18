/*
 * XREFs of IopPerfCallDriver @ 0x140502A78
 * Callers:
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x14036D120 (IofCallDriverSpecifyReturn.c)
 *     IovCallDriver @ 0x1409C1CA4 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1409C2474 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1409C24E4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     IopAllocateIrpExtension @ 0x140326CF0 (IopAllocateIrpExtension.c)
 *     IopfCallDriver @ 0x14036D144 (IopfCallDriver.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x140502830 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallEvent @ 0x140502ED8 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x140502FAC (IopPerfLogCallReturnEvent.c)
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
