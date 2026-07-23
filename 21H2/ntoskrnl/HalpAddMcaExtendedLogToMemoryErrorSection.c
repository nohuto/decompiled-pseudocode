/*
 * XREFs of HalpAddMcaExtendedLogToMemoryErrorSection @ 0x1404B9464
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x1404B9E98 (HalpCreateMcaMemoryErrorRecord.c)
 * Callees:
 *     HalpAddMcaToMemoryErrorSection @ 0x1404B94D0 (HalpAddMcaToMemoryErrorSection.c)
 *     HalpGetMcaExtendedLogStatusBlock @ 0x1404BA350 (HalpGetMcaExtendedLogStatusBlock.c)
 *     HalpAddErrorEntryToPacket @ 0x1404CFAB0 (HalpAddErrorEntryToPacket.c)
 */

__int64 __fastcall HalpAddMcaExtendedLogToMemoryErrorSection(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 McaExtendedLogStatusBlock; // rcx
  _DWORD *v8; // rcx

  v6 = -1073741823;
  McaExtendedLogStatusBlock = HalpGetMcaExtendedLogStatusBlock();
  if ( McaExtendedLogStatusBlock )
  {
    HalpAddErrorEntryToPacket(McaExtendedLogStatusBlock, a2, a3);
    *v8 = 0;
    return 0;
  }
  else
  {
    HalpAddMcaToMemoryErrorSection(a1, a3);
  }
  return v6;
}
