/*
 * XREFs of _RtlpHpMetadataHeapCreate@12 @ 0x4B3794A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpHeapCreate@20 @ 0x4B378A0E (_RtlpHpHeapCreate@20.c)
 */

int __stdcall RtlpHpMetadataHeapCreate(int a1, int *a2, int a3)
{
  int v3; // esi
  int v4; // eax

  v3 = 0;
  v4 = RtlpHpHeapCreate(0, 0, 0, *a2, a2[1]);
  if ( v4 )
  {
    *(_DWORD *)(a1 - 4) = v4;
    return 1;
  }
  return v3;
}
