/*
 * XREFs of FsRtlGetNextBaseMcbEntry @ 0x14021EF80
 * Callers:
 *     FsRtlGetNextLargeMcbEntry @ 0x1404EF160 (FsRtlGetNextLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlGetNextBaseMcbEntry(
        PBASE_MCB Mcb,
        ULONG RunIndex,
        PLONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCount)
{
  int v6; // r11d
  int v7; // eax
  int v8; // eax
  int v9; // ecx

  if ( RunIndex >= Mcb->PairCount )
    return 0;
  v6 = 0;
  if ( RunIndex )
    v7 = *((_DWORD *)Mcb->Mapping + 2 * RunIndex - 2);
  else
    v7 = 0;
  *(_DWORD *)Vbn = v7;
  if ( v7 == -1 )
    v8 = -1;
  else
    v8 = 0;
  *((_DWORD *)Vbn + 1) = v8;
  v9 = *((_DWORD *)Mcb->Mapping + 2 * RunIndex + 1);
  *(_DWORD *)Lbn = v9;
  *((_DWORD *)Lbn + 1) = (v9 != -1) - 1;
  if ( RunIndex )
    v6 = *((_DWORD *)Mcb->Mapping + 2 * RunIndex - 2);
  *SectorCount = (unsigned int)(*((_DWORD *)Mcb->Mapping + 2 * RunIndex) - v6);
  return 1;
}
