/*
 * XREFs of _RtlpHpMetadataHeapCreate@12 @ 0x4B3794A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpHeapCreate@20 @ 0x4B378A0E (_RtlpHpHeapCreate@20.c)
 */

LOGICAL __stdcall RtlpHpMetadataHeapCreate(PRTL_RUN_ONCE a1, int *a2, PVOID *a3)
{
  int v3; // esi
  int v4; // eax

  v3 = 0;
  v4 = RtlpHpHeapCreate(0, 0, 0, *a2, a2[1]);
  if ( v4 )
  {
    a1[-1].Value = v4;
    return 1;
  }
  return v3;
}
