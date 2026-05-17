/*
 * XREFs of _RtlCompressWorkSpaceSizeXpressLz@12 @ 0x4B374730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlCompressWorkSpaceSizeXpressLz(__int16 a1, _DWORD *a2, _DWORD *a3)
{
  if ( a1 )
  {
    if ( a1 == 256 )
    {
      *a2 = 196611;
      *a3 = 0;
      return 0;
    }
    else
    {
      return -1073741637;
    }
  }
  else
  {
    *a2 = 30611;
    *a3 = 0;
    return 0;
  }
}
