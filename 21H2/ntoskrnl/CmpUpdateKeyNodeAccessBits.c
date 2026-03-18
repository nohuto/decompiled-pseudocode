/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x140722534
 * Callers:
 *     CmpCreateTombstone @ 0x14053FB50 (CmpCreateTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140657670 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140677DC0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetKeyNodeForKcb @ 0x14067E828 (CmpGetKeyNodeForKcb.c)
 *     CmQueryMultipleValueKey @ 0x1406B3C34 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmEnumerateKey @ 0x1407C16A0 (CmEnumerateKey.c)
 *     CmpCreateKeyControlBlock @ 0x1407C3850 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 */

void __fastcall CmpUpdateKeyNodeAccessBits(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x8001) == 0
    && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
    && (int)HvpMarkCellDirty(a1, a3, 0) >= 0 )
  {
    *(_BYTE *)(a2 + 12) |= CmpAccessBitForPhase;
  }
}
