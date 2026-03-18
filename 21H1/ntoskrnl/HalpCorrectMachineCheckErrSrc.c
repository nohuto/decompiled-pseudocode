/*
 * XREFs of HalpCorrectMachineCheckErrSrc @ 0x14099C734
 * Callers:
 *     HalpCorrectErrSrc @ 0x14099C6F0 (HalpCorrectErrSrc.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     HalpIsCmciImplemented @ 0x1409952D4 (HalpIsCmciImplemented.c)
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
