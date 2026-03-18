/*
 * XREFs of HalEfiResetSystem @ 0x1404BECB0
 * Callers:
 *     HalpPowerWriteResetCommand @ 0x1404B942C (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x1404B95AC (HalpShutdown.c)
 * Callees:
 *     HalpEfiStartRuntimeCode @ 0x1404BF0B8 (HalpEfiStartRuntimeCode.c)
 */

KPCR *HalEfiResetSystem()
{
  KPCR *result; // rax
  unsigned int v1; // r10d
  __int16 v2; // [rsp+20h] [rbp-8h]

  result = (KPCR *)HalEfiRuntimeServicesTable;
  if ( HalEfiRuntimeServicesTable && HalEfiRuntimeServicesTable[2] )
  {
    _disable();
    _InterlockedIncrement(&HalpEfiTimeWrites);
    _InterlockedIncrement(&HalpEfiVariableWrites);
    HalpEfiStartRuntimeCode(4LL);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))HalEfiRuntimeServicesTable[2])(v1, 0LL, 0LL, 0LL);
    result = KeGetPcr();
    _InterlockedAnd((volatile signed __int32 *)&result->HalReserved[8], 0xFFFFFFFB);
    _InterlockedDecrement(&HalpEfiVariableWrites);
    _InterlockedDecrement(&HalpEfiTimeWrites);
    if ( (v2 & 0x200) != 0 )
      _enable();
  }
  return result;
}
