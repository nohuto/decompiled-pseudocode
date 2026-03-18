/*
 * XREFs of _IsParentBandValid@8 @ 0x2FF3A
 * Callers:
 *     _ValidateNewParent@8 @ 0x2FEC8 (_ValidateNewParent@8.c)
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 * Callees:
 *     _IsTopLevelParent@4 @ 0x2FF80 (_IsTopLevelParent@4.c)
 */

BOOL __fastcall IsParentBandValid(int a1, int a2)
{
  int v3; // edx
  BOOL result; // eax
  int v5; // edx
  int v6; // ecx

  result = 1;
  if ( !IsTopLevelParent(a2) )
  {
    v5 = *(_DWORD *)(v3 + 20);
    if ( *(char *)(v5 + 147) >= 0 )
    {
      v6 = *(_DWORD *)(a1 + 20);
      if ( *(_DWORD *)(v5 + 148) != *(_DWORD *)(v6 + 148) || ((*(_BYTE *)(v5 + 146) ^ *(_BYTE *)(v6 + 146)) & 0x20) != 0 )
        return 0;
    }
  }
  return result;
}
