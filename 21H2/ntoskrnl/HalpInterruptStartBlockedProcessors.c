/*
 * XREFs of HalpInterruptStartBlockedProcessors @ 0x1404D1CFC
 * Callers:
 *     HalStartNextProcessor @ 0x1403A15F0 (HalStartNextProcessor.c)
 *     HalpInterruptReinitialize @ 0x140996D78 (HalpInterruptReinitialize.c)
 *     HalpProcInitSystem @ 0x14099C4C0 (HalpProcInitSystem.c)
 * Callees:
 *     HalpBlkStartBlockedProcessor @ 0x1409AA4D4 (HalpBlkStartBlockedProcessor.c)
 */

__int64 __fastcall HalpInterruptStartBlockedProcessors(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  int i; // esi
  ULONG_PTR v4; // rbx

  result = HalpInterruptProcessorState;
  v2 = 0;
  for ( i = *(_DWORD *)(((unsigned __int64)a1 << 6) + HalpInterruptProcessorState + 8);
        v2 < (unsigned int)HalpInterruptProcessorCount;
        ++v2 )
  {
    v4 = HalpInterruptProcessorState + ((unsigned __int64)v2 << 6);
    if ( *(_BYTE *)(v4 + 56) && *(_DWORD *)(v4 + 60) == i )
    {
      if ( HalpInterruptStartHyperthreadSiblings )
        result = HalpBlkStartBlockedProcessor(v2, *(unsigned int *)(v4 + 8));
      *(_WORD *)(v4 + 12) = 257;
    }
  }
  return result;
}
