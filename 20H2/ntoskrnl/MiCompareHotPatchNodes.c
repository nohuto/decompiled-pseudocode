/*
 * XREFs of MiCompareHotPatchNodes @ 0x1408CC070
 * Callers:
 *     MiFindHotPatchRecord @ 0x140756BF4 (MiFindHotPatchRecord.c)
 *     MiDeleteHotPatchRecord @ 0x1408CC23C (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x1408CD1E0 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1408CD334 (MiInsertSecureImageActivePatch.c)
 *     MiUnloadHotPatch @ 0x1408D1008 (MiUnloadHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompareHotPatchNodes(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 >= *(_DWORD *)(a2 + 24) )
  {
    if ( v2 > *(_DWORD *)(a2 + 24) )
      return 1LL;
    v3 = *(_DWORD *)(a1 + 28);
    if ( v3 >= *(_DWORD *)(a2 + 28) )
      return v3 > *(_DWORD *)(a2 + 28);
  }
  return 0xFFFFFFFFLL;
}
