/*
 * XREFs of FsRtlLookupBaseMcbEntry @ 0x14020F490
 * Callers:
 *     FsRtlLookupLargeMcbEntry @ 0x1404EF250 (FsRtlLookupLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlLookupBaseMcbEntry(
        PBASE_MCB Mcb,
        LONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCountFromLbn,
        PLONGLONG StartingLbn,
        PLONGLONG SectorCountFromStartingLbn,
        PULONG Index)
{
  int v7; // ebp
  signed int v8; // r11d
  signed int v12; // ebx
  unsigned int v13; // r9d
  _DWORD *Mapping; // r10
  ULONG v15; // eax
  int v16; // r8d
  int v17; // ecx
  LONGLONG v19; // r8
  _DWORD *v20; // r9

  v7 = 0;
  v8 = Mcb->PairCount - 1;
  v12 = 0;
  if ( v8 < 0 )
    return 0;
  v13 = Vbn;
  while ( 1 )
  {
    Mapping = Mcb->Mapping;
    v15 = (v8 + v12) / 2;
    if ( !v15 )
      break;
    v13 = Vbn;
    if ( (unsigned int)Vbn >= Mapping[2 * v15 - 2] )
      break;
    v8 = v15 - 1;
LABEL_20:
    if ( v12 > v8 )
      return 0;
  }
  if ( v13 > Mapping[2 * v15] - 1 )
  {
    v12 = v15 + 1;
    goto LABEL_20;
  }
  if ( Lbn )
  {
    v16 = Mapping[2 * v15 + 1];
    if ( v16 == -1 )
    {
      *Lbn = -1LL;
    }
    else
    {
      if ( v15 )
        v17 = Mapping[2 * v15 - 2];
      else
        v17 = 0;
      *Lbn = v13 + v16 - v17;
    }
  }
  if ( SectorCountFromLbn )
    *SectorCountFromLbn = *((_DWORD *)Mcb->Mapping + 2 * v15) - v13;
  if ( StartingLbn )
  {
    v19 = *((unsigned int *)Mcb->Mapping + 2 * v15 + 1);
    if ( (_DWORD)v19 == -1 )
      *StartingLbn = -1LL;
    else
      *StartingLbn = v19;
  }
  if ( SectorCountFromStartingLbn )
  {
    v20 = Mcb->Mapping;
    if ( v15 )
      v7 = v20[2 * v15 - 2];
    *SectorCountFromStartingLbn = (unsigned int)(v20[2 * v15] - v7);
  }
  if ( Index )
    *Index = v15;
  return 1;
}
