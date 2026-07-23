/*
 * XREFs of HalpCorrectMachineCheckErrSrc @ 0x1409A2724
 * Callers:
 *     HalpCorrectErrSrc @ 0x1409A26E0 (HalpCorrectErrSrc.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     HalpIsCmciImplemented @ 0x14099AC64 (HalpIsCmciImplemented.c)
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
  if ( a1[6] < 4u )
    a1[6] = 4;
  result = 0LL;
  *a2 = 352;
  return result;
}
