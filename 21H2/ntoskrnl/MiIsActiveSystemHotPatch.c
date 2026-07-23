/*
 * XREFs of MiIsActiveSystemHotPatch @ 0x1408CAD00
 * Callers:
 *     MiLogHotPatchRundown @ 0x1408CC11C (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x1408CE048 (MiQueryProcessActivePatches.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsActiveSystemHotPatch(__int64 a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (*(_DWORD *)(a1 + 196) & 0x20) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 280);
    if ( v1 )
    {
      if ( *(_QWORD *)(v1 + 280) == a1 )
        return 1;
    }
  }
  return result;
}
