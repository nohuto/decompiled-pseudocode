/*
 * XREFs of MiCompareHotPatchNodes @ 0x140972C58
 * Callers:
 *     MiDeleteHotPatchRecord @ 0x140972E78 (MiDeleteHotPatchRecord.c)
 *     MiFindHotPatchRecord @ 0x1409730F0 (MiFindHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x140973D6C (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140973EA4 (MiInsertSecureImageActivePatch.c)
 *     MiUnloadHotPatch @ 0x140977B70 (MiUnloadHotPatch.c)
 *     MmRegisterHotPatches @ 0x140B2F2BC (MmRegisterHotPatches.c)
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
