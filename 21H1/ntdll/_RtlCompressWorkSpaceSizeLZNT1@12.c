/*
 * XREFs of _RtlCompressWorkSpaceSizeLZNT1@12 @ 0x4B372A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlCompressWorkSpaceSizeLZNT1(__int16 a1, _DWORD *a2, _DWORD *a3)
{
  if ( !a1 )
  {
    *a2 = 32784;
LABEL_3:
    *a3 = 4096;
    return 0;
  }
  if ( a1 == 256 )
  {
    *a2 = 16;
    goto LABEL_3;
  }
  return -1073741637;
}
