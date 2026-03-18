/*
 * XREFs of KiQueryProcessorNode @ 0x1403C1A84
 * Callers:
 *     KiInitializePrcbThread @ 0x1403C1454 (KiInitializePrcbThread.c)
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 * Callees:
 *     KiFindFirstAvailableNode @ 0x1403C1F24 (KiFindFirstAvailableNode.c)
 *     KiIsNodeFull @ 0x1403C1F9C (KiIsNodeFull.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HvlGetApicIdFromLpIndex @ 0x1405439E0 (HvlGetApicIdFromLpIndex.c)
 *     HvlpGetLpcbByApicId @ 0x140544640 (HvlpGetLpcbByApicId.c)
 */

__int64 __fastcall KiQueryProcessorNode(unsigned int a1, _DWORD *a2, _WORD *a3)
{
  __int64 v7; // r14
  unsigned int ProcessorNode; // eax
  unsigned int FirstAvailableNode; // ebx
  __int64 LpcbByApicId; // rax

  if ( a1 < (unsigned int)KeNumberProcessors_0 )
  {
    _mm_lfence();
    *a3 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[a1] + 192) + 138LL);
    return 0LL;
  }
  v7 = (unsigned __int16)*a3;
  if ( !KiNumaQueryProcessorNode )
  {
    if ( a1 >= KiMaximumGroupSize )
      return (unsigned int)-1073741275;
    *a3 = 0;
    FirstAvailableNode = 0;
    goto LABEL_8;
  }
  ProcessorNode = KiNumaQueryProcessorNode(a1);
  FirstAvailableNode = ProcessorNode;
  if ( ProcessorNode )
  {
    if ( ProcessorNode == -1073741275 )
    {
      if ( (_WORD)v7 == 0xFFFF || (unsigned __int8)KiIsNodeFull(KeNodeBlock[v7]) )
        return FirstAvailableNode;
      FirstAvailableNode = 0;
      *a3 = v7;
    }
  }
  else
  {
    if ( *a3 != 0xFFFF )
      goto LABEL_8;
    FirstAvailableNode = KiFindFirstAvailableNode(a3);
  }
  if ( !FirstAvailableNode )
  {
LABEL_8:
    if ( (*(_BYTE *)(KeNodeBlock[(unsigned __int16)*a3] + 10) & 2) == 0 )
      FirstAvailableNode = -1073741275;
    if ( *a2 == -1 )
      HvlGetApicIdFromLpIndex(a1, a2);
    if ( (HvlpFlags & 2) == 0 )
      return FirstAvailableNode;
    LpcbByApicId = HvlpGetLpcbByApicId((unsigned int)*a2);
    if ( LpcbByApicId )
    {
      if ( *(_DWORD *)(LpcbByApicId + 48) )
        return FirstAvailableNode;
    }
    return (unsigned int)-1073741275;
  }
  return FirstAvailableNode;
}
