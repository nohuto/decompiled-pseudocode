/*
 * XREFs of RtlUIntAdd @ 0x1402E0E50
 * Callers:
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  UINT v3; // edx

  v3 = uAugend + uAddend;
  if ( v3 < uAugend )
  {
    *puResult = -1;
    return -1073741675;
  }
  else
  {
    *puResult = v3;
    return 0;
  }
}
