/*
 * XREFs of HalpMcaAMDMapHwidAndMcaTypeToBlock @ 0x1404BD450
 * Callers:
 *     HalpMcaAMDIsMemoryError @ 0x1404BD3D4 (HalpMcaAMDIsMemoryError.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpMcaAMDMapHwidAndMcaTypeToBlock(int a1, int a2)
{
  __int64 result; // rax

  result = 14LL;
  switch ( a1 )
  {
    case 176:
      if ( a2 )
      {
        switch ( a2 )
        {
          case 1:
            return 1LL;
          case 2:
            return 2LL;
          case 3:
            return 3LL;
          case 5:
            return 5LL;
          case 6:
            return 6LL;
          case 7:
            return 7LL;
        }
      }
      else
      {
        return 0LL;
      }
      break;
    case 150:
      return a2 != 0 ? 14 : 8;
    case 1:
      return a2 != 0 ? 14 : 9;
    case 255:
      return a2 != 0 ? 14 : 10;
    case 5:
      return a2 != 0 ? 14 : 11;
    case 46:
      if ( a2 )
      {
        if ( a2 == 1 )
          return 13LL;
      }
      else
      {
        return 12LL;
      }
      break;
  }
  return result;
}
