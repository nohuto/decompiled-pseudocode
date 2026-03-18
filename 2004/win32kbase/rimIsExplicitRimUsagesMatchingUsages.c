/*
 * XREFs of rimIsExplicitRimUsagesMatchingUsages @ 0x1C00AEC8C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00ABE60 (RIMCreateHidDesc.c)
 *     rimAnyExplicitRimUsagesMatchingUsages @ 0x1C00AEBE8 (rimAnyExplicitRimUsagesMatchingUsages.c)
 *     rimFindReferencedRimObj @ 0x1C0155B8C (rimFindReferencedRimObj.c)
 *     RIMIDECreateHIDDesc @ 0x1C016977C (RIMIDECreateHIDDesc.c)
 *     RIMIDEIsCompatibleDevice @ 0x1C016BC8C (RIMIDEIsCompatibleDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimIsExplicitRimUsagesMatchingUsages(__int64 a1, __int16 a2, __int16 a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rax
  __int64 v5; // r9

  v3 = *(_DWORD *)(a1 + 88);
  v4 = 0LL;
  if ( !v3 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 96);
  while ( *(_WORD *)(v5 + 4 * v4) != a3 || *(_WORD *)(v5 + 4 * v4 + 2) != a2 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= v3 )
      return 0LL;
  }
  return 1LL;
}
