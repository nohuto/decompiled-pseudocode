/*
 * XREFs of _RtlCompressWorkSpaceSizeXpressHuff@12 @ 0x4B3746E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlCompressWorkSpaceSizeXpressHuff(__int16 a1, _DWORD *a2, _DWORD *a3)
{
  if ( a1 )
  {
    if ( a1 == 256 )
    {
      *a2 = 748327;
      *a3 = 5157;
      return 0;
    }
    else
    {
      return -1073741637;
    }
  }
  else
  {
    *a2 = 123575;
    *a3 = 5157;
    return 0;
  }
}
