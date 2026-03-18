/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x1405E2CC4
 * Callers:
 *     CmpCreateTombstone @ 0x1404E83EC (CmpCreateTombstone.c)
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x1405E7810 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1405EC120 (CmpWalkOneLevel.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063DCA4 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x14063E6C4 (CmpGetSecurityDescriptorNode.c)
 *     CmpGetKeyNodeForKcb @ 0x140644540 (CmpGetKeyNodeForKcb.c)
 *     CmQueryMultipleValueKey @ 0x1406552BC (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x140672240 (CmEnumerateKey.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x14069FC00 (HvpMarkCellDirty.c)
 */

void __fastcall CmpUpdateKeyNodeAccessBits(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x8001) == 0 && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
  {
    if ( (unsigned __int8)HvpMarkCellDirty(a1, a3) )
      *(_BYTE *)(a2 + 12) |= CmpAccessBitForPhase;
  }
}
