/*
 * XREFs of AMLIReferenceHandleEx @ 0x1C00648D0
 * Callers:
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00ABA30 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIReferenceHandleEx(__int64 a1)
{
  __int64 result; // rax

  dword_1C0081AC8 = 0;
  result = (unsigned int)gdwfAMLI;
  byte_1C0081ACC = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
