/*
 * XREFs of MiVadLeafPagesPrecharged @ 0x14022B4E0
 * Callers:
 *     MiCommitPageTablesForVad @ 0x1407BDB60 (MiCommitPageTablesForVad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadLeafPagesPrecharged(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x200000) != 0 )
  {
    if ( (v1 & 0x800000) != 0 || (v1 & 0x180000u) >= 0x100000 )
      return 1LL;
  }
  else if ( (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 )
  {
    return 1LL;
  }
  return (*(_BYTE *)(a1 + 48) & 0x70) == 0x30;
}
