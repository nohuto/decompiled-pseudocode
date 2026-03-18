/*
 * XREFs of HalpCorrectMachineCheckErrSrc @ 0x140A5B7B4
 * Callers:
 *     HalpCorrectErrSrc @ 0x140A5B770 (HalpCorrectErrSrc.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     HalpIsCmciImplemented @ 0x140A5367C (HalpIsCmciImplemented.c)
 */

__int64 __fastcall HalpCorrectMachineCheckErrSrc(_DWORD *a1, _DWORD *a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 result; // rax

  if ( !a1[2] || HalpIsCmciImplemented() )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( a1[5] < ActiveProcessorCount )
      a1[5] = ActiveProcessorCount;
  }
  if ( a1[6] < 5u )
    a1[6] = 5;
  result = 0LL;
  *a2 = 372;
  return result;
}
