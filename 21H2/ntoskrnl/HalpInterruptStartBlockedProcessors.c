/*
 * XREFs of HalpInterruptStartBlockedProcessors @ 0x14051E084
 * Callers:
 *     HalStartNextProcessor @ 0x1403B2F30 (HalStartNextProcessor.c)
 *     HalpInterruptReinitialize @ 0x140A505D4 (HalpInterruptReinitialize.c)
 *     HalpProcInitSystem @ 0x140A54E70 (HalpProcInitSystem.c)
 * Callees:
 *     HalpBlkStartBlockedProcessor @ 0x140A6350C (HalpBlkStartBlockedProcessor.c)
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
