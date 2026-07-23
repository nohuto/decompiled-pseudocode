/*
 * XREFs of FsRtlLookupLastBaseMcbEntry @ 0x140224D80
 * Callers:
 *     FsRtlLookupLastLargeMcbEntry @ 0x1404EF300 (FsRtlLookupLastLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlLookupLastBaseMcbEntry(PBASE_MCB Mcb, PLONGLONG Vbn, PLONGLONG Lbn)
{
  ULONG PairCount; // r10d
  __int64 v5; // r11
  _DWORD *Mapping; // rdi
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // ecx

  PairCount = Mcb->PairCount;
  if ( !PairCount )
    return 0;
  v5 = PairCount - 1;
  Mapping = Mcb->Mapping;
  v7 = -1;
  v8 = Mapping[2 * v5 + 1];
  if ( v8 != -1 )
  {
    if ( PairCount == 1 )
      v9 = 0;
    else
      v9 = Mapping[2 * PairCount - 4];
    v7 = v8 - v9 + Mapping[2 * v5] - 1;
  }
  *Lbn = v7;
  *Vbn = (unsigned int)(*((_DWORD *)Mcb->Mapping + 2 * (Mcb->PairCount - 1)) - 1);
  return 1;
}
