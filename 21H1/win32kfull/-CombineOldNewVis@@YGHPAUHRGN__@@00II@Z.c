/*
 * XREFs of ?CombineOldNewVis@@YGHPAUHRGN__@@00II@Z @ 0xA1FF0
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge CombineOldNewVis@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        HRGN a3,
        HRGN a4,
        HRGN a5,
        unsigned int a6,
        unsigned int a7)
{
  if ( ((unsigned __int8)a5 & 3) != 0 )
  {
    switch ( (unsigned __int8)a5 & 3 )
    {
      case 1:
        GreCombineRgn(a2, a1, 0, 5);
        return 1;
      case 2:
        if ( a4 != (HRGN)4 )
        {
          GreCombineRgn(a2, a3, 0, 5);
          return 1;
        }
        break;
      case 3:
        break;
      default:
        return 1;
    }
  }
  else if ( GreCombineRgn(a2, a1, a3, a4) > 1u )
  {
    return 1;
  }
  return 0;
}
