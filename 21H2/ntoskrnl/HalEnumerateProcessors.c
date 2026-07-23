/*
 * XREFs of HalEnumerateProcessors @ 0x1403B4FF0
 * Callers:
 *     HvlpSelectLpSet @ 0x1404F3494 (HvlpSelectLpSet.c)
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 * Callees:
 *     HalpInterruptModel @ 0x14037AEA4 (HalpInterruptModel.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A24C4 (HalpQueryMaximumRegisteredProcessorCount.c)
 */

__int64 __fastcall HalEnumerateProcessors(unsigned int a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // edx
  unsigned int v4; // r8d
  int v5; // r9d
  _DWORD *v6; // rcx
  unsigned int MaximumRegisteredProcessorCount; // eax

  v2 = 1;
  v3 = 1;
  v4 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
  v5 = v4 & *(_DWORD *)(HalpInterruptProcessorState + 8);
  if ( (unsigned int)HalpInterruptProcessorCount > 1 )
  {
    v6 = (_DWORD *)(HalpInterruptProcessorState + 72);
    do
    {
      if ( v5 != (v4 & *v6) )
      {
        ++v3;
        v5 = v4 & *v6;
        if ( v3 > a1 )
          break;
      }
      ++v2;
      v6 += 16;
    }
    while ( v2 < (unsigned int)HalpInterruptProcessorCount );
  }
  if ( HalpInterruptProcessorCap && HalpInterruptProcessorCap < v2 )
    v2 = HalpInterruptProcessorCap;
  if ( (unsigned int)HalpInterruptModel() - 1 > 3 )
    v2 = 1;
  MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
  if ( v2 >= MaximumRegisteredProcessorCount )
    return MaximumRegisteredProcessorCount;
  return v2;
}
