/*
 * XREFs of RtlUIntAdd @ 0x14027F120
 * Callers:
 *     SPCall2ServerInternal @ 0x14066C0B8 (SPCall2ServerInternal.c)
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
